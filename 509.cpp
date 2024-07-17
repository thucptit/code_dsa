#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
void input(phanso &ps){
	cout<<"Nhap tu:"; cin>>ps.tu;
	cout<<"Nhap mau:"; cin>>ps.mau;
}
int ucln(int a, int b)
{
	if (a==0 || b==0)
		return 0;
	while (a!=b){
		if (a>b)
			a=a-b;
		else if (b>a)
			b=b-a;
	}
	return a;
}
int bcnn(int a, int b){
	return (a*b)/ucln(a,b);
}
void rutgon(phanso &ps){
	int gcd;
	if (ps.tu<0)
		gcd=ucln(-ps.tu,ps.mau);
	else 
		gcd=ucln(ps.tu,ps.mau);
	ps.tu /= gcd;
	ps.mau /= gcd;
}
void solve(phanso &a, phanso &b){
	phanso c;
	c.tu=a.tu*b.tu;
	c.mau=a.mau*b.mau;
	rutgon(c);
	cout<<"tich 2 phan so:"<<c.tu<<"/"<<c.mau;
}
int main()
{
	phanso a,b;
	input(a);
	input(b);
	solve(a,b);
	return 0;
}