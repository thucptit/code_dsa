#include <iostream>
using namespace std;
struct DONTHUC{
	float heso;
	int mu;
};
void input(DONTHUC &dt){
	cout<<"Nhap he so:"; cin>>dt.heso;
	cout<<"Nhap so mu:"; cin>>dt.mu;
}
DONTHUC thuong(DONTHUC a, DONTHUC b){
	DONTHUC c;
	c.heso=a.heso/b.heso;
	c.mu=a.mu-b.mu;
	return c;
}
void output(DONTHUC a, DONTHUC b){
	DONTHUC C=thuong(a,b);
	cout<<a.heso<<"x^"<<a.mu<<"/"<<b.heso<<"x^"<<b.mu<<"="<<C.heso<<"x^"<<C.mu;
}
int main()
{
	DONTHUC a,b;
	input(a); input(b);
	output(a,b);
	return 0;
}