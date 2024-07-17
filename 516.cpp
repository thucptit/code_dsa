#include <iostream>
#include <cmath>
using namespace std;
struct phanso{
	int tu, mau;
};
void input(phanso &ps){
	cout<<"Nhap tu:"; cin>>ps.tu;
	cout<<"Nhap mau:"; cin>>ps.mau;
}
int ucln(int a, int b){
	a=abs(a);
	b=abs(b);
	if (a==0 || b==0)
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
phanso operator + (phanso &a, phanso &b){
	phanso c;
	int lcd=bcnn(a.mau,b.mau);
	c.tu=((lcd/a.mau)*a.tu)+((lcd/b.mau)*b.tu);
	c.mau=lcd;
	return c;
}
void operator << (ostream &cout, phanso &ps){
	cout<<ps.tu<<"/"<<ps.mau;
}
int main()
{
	phanso a,b,c;
	input(a);
	input(b);
	c=a+b;
	cout<<c;
	return 0;
}