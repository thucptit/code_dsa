#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
void operator >> (istream &in, phanso &ps){
	cout<<"nhap tu:"; in>>ps.tu;
	cout<<"nhap mau:"; in>>ps.mau;
}
phanso operator * (phanso &a, phanso &b){
	phanso c;
	c.tu=a.tu*b.tu;
	c.mau=a.mau*b.mau;
	return c;
}
void operator << (ostream &out, phanso &ps){
	out<<"tich 2 phan so:"<<ps.tu<<"/"<<ps.mau;
}
int main()
{
	phanso a,b,c;
	cin>>a;
	cin>>b;
	c=a*b;
	cout<<c;
	return 0;
}