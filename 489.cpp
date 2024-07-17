#include <iostream>
#include <cmath>
using namespace std;
struct DONTHUC{
	float heso; int somu; float x0;
};
void input(DONTHUC &a){
	cout<<"Nhap gia tri x0"; cin>>a.x0;
	cout<<"Nhap he so:"; cin>>a.heso;
	cout<<"Nhap so mu:"; cin>>a.somu;
}
float solve(DONTHUC a){
	return a.heso*pow(a.x0,a.somu);
}
void output(DONTHUC a){
	float result=solve(a);
	cout<<"Tai x = "<<a.x0<<" gia tri cua don thuc ="<<result;
}
int main(){
	DONTHUC a;
	input(a);
	output(a);
	return 0;
}