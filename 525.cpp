#include <iostream>
using namespace std;
struct honso{
	int n, tu, mau ;
};
istream &operator >> (istream &in, honso &hs){
	cout<<"Nhap phan nguyen:"; in>>hs.n;
	cout<<"Nhap tu:"; in>>hs.tu;
	do{
		cout<<"Nhap mau:"; in>>hs.mau;
		if (hs.mau==0)
			cout<<"Mau so phai khac 0. XIn nhap lai!!!";
	}while (hs.mau==0);
	return in;
}
int gcd(int a, int b){
	while (b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}
void rutgon(honso &hs){
	int tu= hs.n*hs.mau+hs.tu;
	int mau= hs.mau;
	int ucln=gcd(tu,mau);
	tu /= ucln;
	mau /=ucln;
	hs.n=tu/mau;
	hs.tu=tu%mau;
	hs.mau=mau;
}
ostream &operator << (ostream &out, honso &hs){
	cout<<hs.n<<hs.tu<<"/"<<hs.mau;
	return out;
}
int main()
{
	honso a;
	cin>>a;
	rutgon(a);
	cout<<a;
	return 0;
}