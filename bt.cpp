// nhan 2 don thuc 
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
DATHUC nhan(DATHUC a, DATHUC b){
	DATHUC c;
	c.n=a.n+b.n;
	c.v.resize(c.n+1);
	for (int i=0;i<=a.n;++i){
		for (int j=0;j<=b.n;++j){
			c.v[i+j] += a.v[i] * b.v[j];
		}
	}
	return c;
}
void output(DATHUC  a, DATHUC b){
	DATHUC result=nhan(a,b);
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
	DATHUC a,b;
	input(a); input(b);
	output(a,b);
	return 0;
}