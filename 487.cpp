#include <iostream>
using namespace std;
struct DONTHUC{
	float heso; int somu;
};
void input(DONTHUC &dh){
	cout<<"Nhap he so:"; cin>>dh.heso;
	cout<<"Nhap so mu:"; cin>>dh.somu;
}
DONTHUC daoham(DONTHUC &a){
	DONTHUC c;
	c.heso=a.heso*a.somu;
	c.somu=a.somu-1;
	return c;
}
void output(DONTHUC a){
	DONTHUC c= daoham(a);
	cout<<"Dao ham cua don thuc "<<a.heso<<"x^"<<a.somu<<"="<<c.heso<<"x^"<<c.somu;
}
int main()
{
	DONTHUC a;
	input(a);
	output(a);
	return 0;
}