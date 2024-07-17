#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
struct DATHUC{
	vector <float> v;
	int n;
};
void input(DATHUC &a){
	do{
		cout<<"Nhap bac cua da thuc:"; cin>>a.n;
		if (a.n<1)
			cout<<"Bac cua da thuc phai >=1.Xin nhap lai!!!";
	}while(a.n<1);
	a.v.resize(a.n+1);
	for (int i=a.n;i>=0;--i){
		cout<<"Nhap he so cua x^"<<i;
		cin>>a.v[i];
	}
}
void solve(DATHUC c, int k){
	float sum=0;
	for (int i=c.n;i>=0;--i){
		sum+=c.v[i] * pow(k,i);
	}
	cout<<"tai x=x0 thi:"<<sum;
}
int main()
{
	DATHUC a; int k;
	input(a);
	cout<<"Nhap x0=";
	cin>>k;
	solve(a,k);
	return 0;
}