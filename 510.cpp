#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
int ucln(int a, int b){
	if (a==0 || b==0){
		return 0;
	}
	while (a!=b){
		if (a>b)
			a=a-b;
		else if(a<b)
			b=b-a;
	}
	return a;
}
void rutgon(phanso &ps){
	int gcd;
	if (ps.tu<0)
		gcd=ucln(-ps.tu,ps.mau);
	else if (ps.tu>0)
		gcd=ucln(ps.tu,ps.mau);
	ps.tu /= gcd;
	ps.mau /= gcd;
}
void input(phanso &ps){
	cout<<"nhap tu:";cin>>ps.tu;
	cout<<"Nhap mau:"; cin>>ps.mau;
}
void solve(phanso &a, phanso &b){
	phanso c;
	c.tu=a.tu*b.mau;
	c.mau=a.mau*b.tu;
	rutgon(c);
	cout<<"thuong 2 phanso so:"<<c.tu<<"/"<<c.mau;
}
int main()
{
	phanso a,b;
	input(a);
	input(b);
	solve(a,b);
	return 0;
}