#include <iostream>
#include <iomanip>
using namespace std;
struct phanso{
	int tu, mau;
};
void input(phanso &ps){
	cout<<"nhap tu so:"; cin>>ps.tu;
	cout<<"Nhap mau so:"; cin>>ps.mau;
}
int ucln(int a, int b)
{
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
void rutgon(phanso &ps){
	int gcd=ucln(ps.tu,ps.mau);
	ps.tu=ps.tu/gcd;
	ps.mau=ps.mau/gcd;
}
void solve(phanso a, phanso b){
	phanso result;
	result.tu=((bcnn(a.mau,b.mau)/a.mau)*a.tu)+((bcnn(a.mau,b.mau)/b.mau)*b.tu);
	result.mau=bcnn(a.mau,b.mau);
	rutgon(result);
	cout<<"tong cua 2 phan so = "<<result.tu<<"/"<<result.mau;
}
int main()
{
	phanso a,b;
	input(a); input(b);
	solve(a,b);
	return 0;
}