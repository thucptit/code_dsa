#include <iostream>
#include <vector >
#include <map>
using namespace std;
struct DATHUC {
	vector <float> v;
	int n;
};
void input(DATHUC &a){
	do{
		cout<<"Nhap bac cua da thuc:"; cin>>a.n;
		if (a.n<1)
			cout<<"Bac cua da thuc phai >=1. Xin nhap lai!!!";
	} while (a.n<1);
	a.v.resize(a.n+1);
	for (int i=a.n;i>=0;--i){
		cout<<"Nhap he so cua x^"<<i<<" : ";
		cin>>a.v[i];
	}
}
void output(DATHUC c){
	for (int i=c.n;i>=0;--i){
		if (c.v[i]!=0){
			if (c.v[i]>0)
				cout<<"+";
			cout<<c.v[i];
			if (i>1)
				cout<<"x^"<<i;
			if (i==1)
				cout<<"x";
		}
	}
}
DATHUC tich2(DATHUC a, DATHUC b){
	DATHUC result;
	result.n=a.n+b.n;
	result.v.resize(result.n+1);
	for (int i=0;i<a.n;++i){
		for (int j=0;j<b.n;++j){
			result.v[i+j] += a.v[i] * b.v[i];
		}
	}
	return result;
}
DATHUC tich(DATHUC a, DATHUC b){
	map <int, float> mp;
	DATHUC result;
	result.n=a.n+b.n;
	for (int i=0;i<a.n;++i){
		for (int j=0;j<b.n;++j){
			int degree = i + j;
			mp[degree] += a.v[i] * b.v[i];
		}
	}
	result.v.resize(result.n+1);
	for (pair <int, float> x: mp ){
		result.v[x.first]=x.second;
	}
	return result;
}
void solve(DATHUC a, DATHUC b){
	DATHUC C=tich(a,b);
	output(C);
}
int main(){
	DATHUC A,B;
	input(A); input(B);
	solve(A,B);
	return 0;
}