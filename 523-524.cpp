#include <iostream>
using namespace std;
struct honso{
	int n, tu, mau;
};
istream &operator >> (istream &in, honso &hs){
	cout<<"Nhap phan nguyen "; in>>hs.n;
	cout<<"Nhap tu:"; in>>hs.tu;
	cout<<"Nhap mau:"; in>>hs.mau;
	return in;
}
ostream &operator << (ostream &out,honso &hs){
	out<<hs.n<<" "<<hs.tu<<"/"<<hs.mau;
	return out;
}
int main()
{
	honso a;
	cin>>a;
	cout<<a;
	return 0;
}