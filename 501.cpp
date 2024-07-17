#include <iostream>
#include <vector>
using namespace std;
struct DATHUC{
	vector <float> v;
	int n;
};
void input(DATHUC &a){
	do{
		cout<<"Nhap bac cua da thuc:"; cin>>a.n;
		if (a.n<1)
			cout<<"Bac cua da thuc phai >=1. Xin nhap lia!!";
	}while(a.n<1);
	a.v.resize(a.n+1);
	for (int i=a.n;i>=0;--i){
		cout<<"Nhap he so cua x^"<<i<<":";
		cin>>a.v[i];
	}
}
int _max(int a, int b){
	int max=0;
	if (a>b)
		max=a;
	else 
		max=b;
	return max;
}
DATHUC operator + (DATHUC &a, DATHUC &b)
{
	DATHUC c;
	c.n=_max(a.n,b.n);
	c.v.resize(c.n+1);
	for (int i=0;i<=a.n;++i){
		c.v[i] += a.v[i];
	}
	for (int i=0;i<=b.n;++i){
		c.v[i] += b.v[i];
	}
	return c;
}
void operator << (ostream &COUT, DATHUC &c){
	for (int i=c.n;i>=0;--i){
		if (c.v[i]!=0){
			if (c.v[i]>0 && i!=c.n){
				cout<<"+";
			}
			cout<<c.v[i];
			if (i>1)
				cout<<"x^"<<i;
			if (i==1)
				cout<<"x";
		}
	}
}
int main()
{
	DATHUC a,b;
	input(a); input(b);
	DATHUC c = a+b;
	cout<<c;
	return 0;
}