#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
void input(phanso &ps){
	cout<<"Nhap tu so:"; cin>>ps.tu;
	cout<<"Nhap mau so:"; cin>>ps.mau;
}
int ucln(int a, int b){
	if (a==0||b==0)
		return 0;
	while (a!=b){
		if (a>b)
			a=a-b;
		else if (a<b)
			b=b-a;
	}
	return a;
}
int bcnn(int a, int b){
	return (a*b)/ucln(a,b);
}
void rutgon(phanso &ps){
	int gcd;
	if (ps.tu>0)
		gcd=ucln(ps.tu,ps.mau);
	else 
		gcd=ucln(-ps.tu,ps.mau);
	ps.tu /= gcd;
	ps.mau /=gcd;
}
void solve(phanso &a, phanso &b){
	phanso c;
	int lcd=bcnn(a.mau,b.mau);
	c.tu=((lcd/a.mau)*a.tu)-((lcd/b.mau)*b.tu);
	c.mau=lcd;
	//rutgon(c);
	cout<<"hieu 2 phan so:"<<c.tu<<"/"<<c.mau;
}
int main()
{
	phanso a,b;
	input(a); input(b);
	solve(a,b);
	return 0;
}