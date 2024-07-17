#include <iostream>
#include <vector>
using namespace std;
struct dathuc{
	vector <float> v;
	int n;
};
void input(dathuc &a){
	do{
		cout<<"Nhap bac cua da thuc:";
		cin>>a.n;
		if (a.n<1)
			cout<<"Bac cua da thuc >=1. xin nhap lai!!";
	}while (a.n<1);
	a.v.resize(a.n+1);
	for (int i=a.n;i>=0;--i){
		cout<<"Nhap he so cua x^"<<i<<":";
		cin>>a.v[i];
	}
}
float _max(float a, float b){
	float max=0;
	if (a>b)
		max=a;
	else
		max=b;
	return max;
}
dathuc operator - (dathuc &a, dathuc &b){
	dathuc c;
	c.n=_max(a.n,b.n);
	c.v.resize(c.n+1,0.0);
	for (int i=c.n;i>=0;--i){
		c.v[i]=a.v[i]-b.v[i];
	}
	return c;
}
void operator << (ostream &cout, dathuc &c){
	for (int i=c.n;i>=0;--i){
		if (c.v[i]!=0){
			if (c.v[i]>0 && i!=c.n)
				cout<<"+";
			cout<<c.v[i];
			if (i>1)
				cout<<"x^"<<i;
			else if (i==1)
				cout<<"x";
		}
	}
}
int main()
{
	dathuc a,b,c;
	input(a); input(b);
	c=a-b;
	cout<<c;
	return 0;
}