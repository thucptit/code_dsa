#include <iostream>
using namespace std;
struct donthuc{
	float a; 
	int n;
};
void input(donthuc &dt){
	cout<<"Enter coefficient:"; cin>>dt.a;
	cout<<"Enter bac don thuc:"; cin>>dt.n;
}
void output(donthuc dt){
	cout<<dt.a<<"x^"<<dt.n;
}
int main()
{
	donthuc dt;
	input(dt);
	output(dt);
	return 0;
}