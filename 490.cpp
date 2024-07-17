#include <iostream>
using namespace std;
struct DONTHUC {
	float heso; int somu;
};
void input(DONTHUC a){
	cout<<"Nhap he so:"; cin>>a.heso;
	cout<<"Nhap so mu:"; cin>>a.somu;
}
DONTHUC daoham(DONTHUC a, int x){
	DONTHUC c;
	c.heso=a.heso*a.somu;
	c.somu=a.somu-1;
	for (int i=0;i<x-1;++i){
		c.somu--;
		c.heso=c.heso*c.somu;
	}
	return c;
}
void output(DONTHUC A, int x){
	DONTHUC c=daoham(A,x);
	cout<<"Dao ham caa "<<x<<" cua don thuc "<<A.heso<<"x^"<<A.somu<<"="<<c.heso<<"x^"<<c.somu;
}                                                           
int main()
{
	DONTHUC A; int k; cout<<"Nhap k:"; cin>>k;
	input(A);
	output(A,k);
	return 0;  
}