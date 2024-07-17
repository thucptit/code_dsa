#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
istream &operator >> (istream &in, phanso &ps){
	cout<<"nhap tu:"; in>>ps.tu;
	do{
		cout<<"Nhap mau:"; in>>ps.mau;
		if (ps.mau==0)
			cout<<"Mau so phai !=0. xin nhap lai!!";
	}while (ps.mau==0);
	return in;
}
//tien to 
phanso &operator -- (phanso &ps){
	ps.tu-=ps.mau;
	return ps;
}
//hau to
phanso operator -- (phanso &ps, int){
	phanso t=ps;
	ps.tu -=ps.mau;
	return t;
}
ostream &operator << (ostream &out, phanso &ps){
	cout<<ps.tu<<"/"<<ps.mau;
	return out;
}
int main()
{
	phanso a;
	cout<<"Nhap phan so:"<<endl;
	cin>>a;
	cout<<"Phan so ban dau la:"<<endl;
	cout<<a<<endl;
	--a;  // S? d?ng toan t? ti?n t?
    cout << "Sau khi --a: " << a << endl;

    a--;  // S? d?ng toan t? h?u t?
    cout << "Sau khi a--: " << a << endl;
	return 0;
}