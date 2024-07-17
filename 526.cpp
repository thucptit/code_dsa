#include <iostream>
#include <cmath>
using namespace std;
struct honso{
	int n, tu, mau;
};
istream &operator >> (istream &in, honso &hs){
	cout<<"Nhap phan nguyen:"; in>>hs.n;
	cout<<"Nhap tu:"; in>>hs.tu;
	do{
		cout<<"nhap mau:"; in>>hs.mau;
		if (hs.mau==0)
			cout<<"mau so phai !=0. xin nhap lai!!!";
	}while (hs.mau==0);
	return in;
}
int ucln(int a, int b){
	a=abs(a);
	b=abs(b);
	while (b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
int bcnn(int a, int b){
	return (a*b)/ucln(a,b);
}
void rutgon(honso &hs){
	int tu=hs.n*hs.tu+hs.mau;
	int mau=hs.mau;
	int gcd=ucln(tu,mau);
	tu /= gcd;
	mau /= gcd;
	hs.n=tu/mau;
	hs.tu=tu%mau;
	hs.mau=mau;
}
honso operator + (honso &a, honso &b){
	honso c;
	int lcd=bcnn(a.mau, b.mau);
	rutgon(a); rutgon(b);
	c.n=a.n+b.n;
	c.tu=((lcd/a.mau)*a.tu)+((lcd/b.mau)*b.tu);
	c.mau=lcd;
	return c;
}
ostream &operator << (ostream &out, honso &hs){
	out <<hs.n<<hs.tu<<"/"<<hs.mau;
	return out;
}
int main()
{
	honso a,b,c;
	cin>>a;
	cin>>b;
	c=a+b;
	cout<<c;
	return 0;
}