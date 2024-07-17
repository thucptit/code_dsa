#include <iostream>
#include <vector>
using namespace std;
struct DATHUC{
	vector <float> v;
	int n;
};
void input(DATHUC &a){
	do{
		cout<<"Nhap bac cua da thuc:"; cin>>a.n;
		if (a.n<=0){
			cout<<"Bac cua da thuc phai >0. Xin nhap lai!!!";
		}
	}while (a.n<=0);
	a.v.resize(a.n+1);
	for (int i=a.n;i>=0;--i){
		cout<<"Nhap he so cho x^"<<i<<":";
		cin>>a.v[i];
	}
}
DATHUC daoham(DATHUC &c){
	DATHUC result;
	result.v.resize(c.n);
	for (int i=c.n;i>0;--i){
		result.v[i-1]=c.v[i] * i;
	}
	result.n=c.n-1;
	return result;
}
void output(DATHUC c){
	DATHUC result=daoham(c);
	for (int i = result.n; i >= 0; --i) {
        if (result.v[i] != 0) {
            if (result.v[i] > 0 && i != result.n)
                cout << "+";
            cout << result.v[i];
            if (i > 1)
                cout << "x^" << i;
            else if (i == 1)
                cout << "x";
        }
    }
    cout << endl;
}
int main()
{
	DATHUC a;
	input(a);
	output(a);
	return 0;
}