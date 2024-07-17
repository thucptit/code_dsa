#include <iostream>
using namespace std;
struct Point{
	double x, y,z;
};
void input(Point &a){
	cout<<"Nhap toa do diem x:"; cin>>a.x;
	cout<<"Nhap toa do diem y:"; cin>>a.y;
	cout<<"Nhap toa do diem z:"; cin>>a.z;
}
void output(Point a){
	cout<<"Diem co toa do:"<<"("<<a.x<<","<<a.y<<","<<a.z<<")";
}
int main(){
	Point A,B;
	input(A);
	output(A);
	return 0;
}