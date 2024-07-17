#include <iostream>
using namespace std;
struct phanso{
	int tu, mau;
};
istream &operator >> (istream &in, phanso &ps){
	cout<<"Nhap tu:"; in>>ps.tu;
	do{
		cout<<"Nhap mau:"; in>>ps.mau;
		if (ps.mau==0)
			cout<<"Mau so phai !=0. Xin nhap laiiii.";
	}while (ps.mau==0);
	return in;
}
phanso& operator ++ (phanso &ps){
	ps.tu=ps.tu+ps.mau;
	return ps;
}
phanso operator ++ (phanso &ps, int){
	phanso temp=ps;
	ps.tu +=ps.mau;
	return temp;
}
ostream &operator << (ostream &out, const phanso &ps){
	out<<ps.tu<<"/"<<ps.mau;
	return out;
}
int main()
{
	phanso a;
    cout << "Nhap phan so:\n";
    cin >> a;
    cout << "Phan so ban dau: " << a << endl;

    ++a;  // S? d?ng toan t? ti?n t?
    cout << "Sau khi ++a: " << a << endl;

    a++;  // S? d?ng toan t? h?u t?
    cout << "Sau khi a++: " << a << endl;
	return 0;
}