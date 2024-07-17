#include <iostream>
#include <vector>
using namespace std;
struct DATHUC{
	vector <float> heso;
	int bac;
};
void input(DATHUC &a){
	
	do{
		cout<<"Nhap bac cua cua da thuc:"; 
		cin>>a.bac;
		if (a.bac<1){
			cout<<"So bac cua da thuc phai >=1. XIn kiem tra lai!!!";
		}
	}while (a.bac<1);
	a.heso.resize(a.bac+1);
	for (int i=a.bac;i>=0;--i){
		cout << "Nhap he so cua x^" << i << ": ";
		cin>>a.heso[i];
	}
}
void output(DATHUC c){
	bool firstterm=true;
	for (int i=c.bac;i>=0;--i){
		if (c.heso[i]!=0){
			if (c.heso[i]>0){
				cout<<"+";
			}
			cout<<c.heso[i];
			if (i>1)
				cout<<"x^"<<i;
			else if (i==1)
				cout<<"x";
			firstterm=false;
		}
	}
	if (firstterm)
		cout<<"0";
}
int _max(int a, int b){
	int max=0;
	if (a>b)
		max=a;
	else if (a<b)
		max=b;
	else 
		max=a;
	return max;
}
DATHUC hieudathuc(DATHUC a, DATHUC b){
	DATHUC result;
	result.bac=_max(a.bac,b.bac);
	result.heso.resize(result.bac+1) ;
	for (int i=0;i<=result.bac;++i){
		result.heso[i]=a.heso[i]-b.heso[i];
	}
	return result;
}
void solve(DATHUC a, DATHUC b){
	DATHUC c=hieudathuc(a,b);
	output(c);
}
int main(){
	DATHUC a,b;
	input(a); input(b);
	solve(a,b);
	return 0;
}