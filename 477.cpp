#include <iostream>
using namespace std;
struct Point{
	double x, y;
};
void input(Point &a){
	cout<<"Nhap toa do diem x:"; cin>>a.x;
	cout<<"Nhap toa do diem y:"; cin>>a.y;
}
void output(Point a){
	cout<<"Diem co toa do:"<<"("<<a.x<<","<<a.y<<")";
}
int main(){
	Point A,B;
	input(A);
	output(A);
	return 0;
}