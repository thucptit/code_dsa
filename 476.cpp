#include <iostream>
#define ll long long
using namespace std;
struct honso{
	ll numerator, denominator, interger;
};
void input(honso &hs){
	cout<<"Login interger:"; cin>>hs.interger;
	cout<<"Login numerator:"; cin>>hs.numerator;
	cout<<"Login denominator:"; cin>>hs.denominator;
}
void output(honso p){
	cout << p.interger<<"("<<p.numerator<<"/"<<p.denominator<<")";
}
int main()
{
	honso a;
	input(a);
	output(a);
	return 0;
}