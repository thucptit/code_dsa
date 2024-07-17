#include <iostream>
#include <vector>
using namespace std;
struct dathuc{
	vector <float> v;
	int n;
};
void input(dathuc c){
	do{
		cout<<"Nhap bac cua da thuc:"; cin>>c.n;
		if (c.n<1)
			cout<<"bac phai >=1. xin nhap lai!!!";
	}while (c.n<1);
	for (int i=c.n;i>=0;--i){
		cout<<"Nhap he so cua x^"<<i<<":";
		cin>>c.v[i];
	}
}
dathuc operator * (dathuc &a, dathuc &b){
	dathuc c;
	c.n=a.n+b.n;
	c.v.resize(c.n+1);
	for (int i=0;i<=a.n;++i){
		for (int j=0;j<=b.n;++j){
			c.v[i+j] +=a.v[i] * b.v[j];
		}
	}
	return c;
}
void operator << (ostream &cout, dathuc &c){
	for (int i=c.n;i>=0;--i){
		if (c.v[i]!=0){
			if (c.v[i]>0 && i!=c.n)
				cout<<"+";
			cout<<c.v[i];
			if (i==1)
				cout<<"x";
			else if (i>1)
				cout<<"x^"<<i;
		}
	}
}
int main()
{
	dathuc a,b,c;
	input(a); input(b);
	c=a*b;
	cout<<c;
	return 0;
}