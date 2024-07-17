#include <iostream>
using namespace std;
struct DONTHUC{
	float heso; int somu;
};
void input(DONTHUC &s){
	cout<<"Nhap he so:"; cin>>s.heso;
	cout<<"Nhap so mu:"; cin>>s.somu ;
}
DONTHUC operator *(DONTHUC &a, DONTHUC &b){
	DONTHUC c;
	c.heso=a.heso*b.heso;
	c.somu= a.somu+b.somu;
	return c;
}
void operator << (ostream &cout, DONTHUC &a){
	cout<<a.heso<<"x^"<<a.somu;
}
int main()
{
	DONTHUC a,b;
	input(a); input(b);
	DONTHUC c= a * b;
	cout << c;
	return 0;
}