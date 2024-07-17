#include <iostream>
#include <vector>
using namespace std;
struct DATHUC{
	vector <int> v;
	int n;
};
void input(DATHUC &dt){
	cout<<"Nhap bac cua da thuc:"; cin>>dt.n;
	dt.v.resize(dt.n+1);
	for (int i=dt.n;i>=0;--i){
		cout<<"Nhap he so cho x^"<<i<<":"; 
		cin>>dt.v[i];
	}
}
void output(DATHUC dt){
	for (int i=dt.n;i>=0;--i){
		cout<<dt.v[i]<<"x^"<<i;
		if (i>0)
			cout<<"+";
	}
}
int main()
{
	DATHUC dt;
	input(dt);
	output(dt);
	return 0;
}