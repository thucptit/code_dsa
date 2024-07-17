#include <iostream>
using namespace std;
struct DUONGTHANG{
	float a,b,c;
};
void input(DUONGTHANG &dt){
	cout<<"Nhap a:"; cin>>dt.a;
	cout<<"Nhap b:"; cin>>dt.b;
	cout<<"Nhap c:"; cin>>dt.c;
}
void output(DUONGTHANG a){
	cout<<a.a<<"x+"<<a.b<<"y+"<<a.c;
}
int main()
{
	DUONGTHANG A;
	input(A);
	output(A);
	return 0;
}