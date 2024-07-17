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
	while (a!=b){
		if (a>b)
			a=a-b;
		else if (a<b)
			b=b-a;
	}
	return a;
}
phanso solve(phanso &ps){
	int UCLN=ucln(ps.tu,ps.mau);
	phanso psm;
	psm.tu=ps.tu/UCLN;
	psm.mau=ps.mau/UCLN;
	return psm;
}
void output(phanso ps){
	phanso result=solve(ps);
	cout<<"Phanso sau khi rut gon:"<<result.tu<<"/"<<result.mau;
}
int main()
{
	phanso ps;
	input(ps);
	output(ps);
	return 0;
}