#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
void input(phanso &ps){
	cout<<"tu:"; cin>>ps.tu;
	cout<<"mau:"; cin>>ps.mau;
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
void solve(phanso &ps){
	int gcd=ucln(ps.tu,ps.mau);
	if (gcd==1)
		cout<<"phan so toi gian.";
	else 
		cout<<"Phan so chua toi gian.";
}
int main()
{
	phanso ps;
	input(ps);
	solve(ps);
	return 0;
}