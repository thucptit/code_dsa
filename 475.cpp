#include <iostream>
#define ll long long
using namespace std;
struct Phanso{
	ll tu,mau;
};
void input(Phanso &ps){
	cout<<"Login numerator:";
	cin>>ps.tu;
	do{
		cout<<"Login denominator:";
		cin>>ps.mau;
		if (ps.mau==0){
			cout<<"denominator must be different with zero., Please login again.";
		}
	} while (ps.mau==0);
}
void output(Phanso a){
	cout<<a.tu<<"/"<<a.mau;
}
int main()
{
	Phanso phanso;
	input(phanso);
	output(phanso);
	return 0;
}