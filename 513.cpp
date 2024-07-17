#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
istream &operator >>(istream &in, phanso &ps){
	cout<<"nhap tu so:"; in>>ps.tu;
	do{
		cout<<"nhap mau so:";in>>ps.mau;
		if (ps.mau==0)
			cout<<"mau so phai !=0. xin nhap laii!!";
	}while (ps.mau==0);
	return in;
}
void solve(phanso &ps){
	if (ps.tu * ps.mau >0)
		cout<<"Phan so duong";
	else 
		cout<<"Phan so am";
}
int main()
{
	phanso a;
	cin>>a;
	solve(a);
	return 0;
}