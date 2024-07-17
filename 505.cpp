#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct dathuc{
	vector <float> v;
	int n;
};
void input(dathuc &a){
	do {
		cout<<"Nhap bac cua da thuc:"; cin>>a.n;
		if (a.n<1)
			cout<<"bac cua da thuc phai >=1. xin nhap lai!!";
	}while (a.n<1);
	a.v.resize(a.n+1);
	for (int i=a.n;i>=0;--i){
		cout<<"Nhap he so cua x^"<<i<<":";
		cin>>a.v[i];
	}
}
double _sum(dathuc &c, int k){
	double sum=0;
	c.v.resize(c.n+1);
	for (int i=c.n;i>=0;--i){
		sum += c.v[i] * pow (k,i);
	} 
	return sum;
}
void output(dathuc c, int a, int b ){
	vector <int> d;
	bool k=false;
	for (int i=a;i<=b;++i){
		if (_sum(c,i)==0){
			k=true;
			d.push_back(i);
		}	
	}
	if (!k)
		cout<<"khong co nghiem!!";
	else 
		for (int i=0;i<d.size();++i){
			cout<<d[i]<<" ";
		}
}
int main()
{
	dathuc c; int a,b;
	input(c);
	cin>>a>>b;
	output(c,a,b);
	return 0;
}