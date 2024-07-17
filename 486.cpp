#include <iostream>
using namespace std;
struct DONTHUC{
	float  heso;
	int bac;
};
void input(DONTHUC &dt){
	cout<<"Nhap he so:"; cin>>dt.heso;
	cout<<"Nhap bac cua don thuc:"; cin>>dt.bac;
}
DONTHUC tichdonthuc(DONTHUC a, DONTHUC b){
	DONTHUC c;
	c.heso=a.heso*b.heso;
	c.bac=a.bac+b.bac;
	return c;
}
void output(DONTHUC A, DONTHUC B){
	DONTHUC C=tichdonthuc(A,B);
	cout<<A.heso<<"x^"<<A.bac<<"*"<<B.heso<<"x^"<<B.bac<<"="<<C.heso<<"x^"<<C.bac;
}

int main()
{
	DONTHUC a, b;
	input(a); input(b);
	output(a,b);
	return 0;
}