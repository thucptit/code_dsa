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
void dht(DATHUC &c, int k){
	DATHUC result;
	for (int i=0;i<k;++i){
		result.n=c.n-1;
		result.v.resize(result.n+1);
		for (int j=c.n;j>0;--j){
			result.v[j-1]= c.v[j] * j;
		}
		c.n=c.n-1;
	}
}
void output(DATHUC &a, int k){
	DATHUC result=dht(a,k);
	for (int i=result.n;i>=0;--i){
		if (result.v[i]!=0){
			if (result.v[i]>0 && i!=result.n)
				cout<<"+";
			cout<<result.v[i];
			if (i==1)
				cout<<"x";
			else if (i>1)
				cout<<"x^"<<i;
		}
	}
}
int main()
{
	DATHUC c;
	input(c);
	int k; cin>>k;
	output(c,k);
	return 0;
}