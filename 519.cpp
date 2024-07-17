#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
istream &operator >> (istream &in, phanso &ps){
	cout<<"nhap tu:"; in>>ps.tu;
	do{
		cout<<"nhap mau:"; in>>ps.mau;
		if (ps.mau==0)
			cout<<"mau so pha !=0.. xin nhap lai";
	}while (ps.mau==0);
	return in;
}
phanso operator / (phanso &a, phanso &b){
	phanso c;
	c.tu=a.tu*b.mau;
	c.mau=a.mau*b.tu;
	return c;
}
ostream &operator << (ostream &out, phanso &ps){
	cout<<"thuong 2 phan so la:"<<ps.tu<<"/"<<ps.mau;
	return out;
}
int main()
{
	phanso a,b,c;
	cin>>a;
	cin>>b;
	c=a/b;
	cout<<c;
	return 0;
}