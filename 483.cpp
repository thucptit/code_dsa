#include <iostream>
using namespace std;
struct Diem{
	float x, y;
};
struct Duongtron{
	Diem I;
	float R;
};
void nhapdiem(Diem &d){
	cout<<"Nhap toa do x:"; cin>>d.x;
	cout<<"Nhap toa do y:"; cin>>d.y;
}
void xuatdiem(Diem d){
	cout<<"("<<d.x<<","<<d.y<<")";
}
void nhapduongtron(Duongtron &dt){
	cout<<"Nhap toa do tam cua duong tron."<<endl;
	nhapdiem(dt.I);
	cout<<"Nhap ban kinh cua duong tron."<<endl;
	cin>>dt.R;
}
void xuatduongtron(Duongtron dt){
	cout<<"Duong tron co tam";
	xuatdiem(dt.I);
	cout<<"Ban kinh:"<<dt.R;
}
int main()
{
	Duongtron dt;
	nhapduongtron(dt);
	xuatduongtron(dt);
	return 0;
}