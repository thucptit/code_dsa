#include <iostream>
using namespace std;
const double PI=3.14;
struct Point{
	float x, y;
};
struct CIRCLE{
	Point I;
	float R;
};
void input_point(Point &p){
	cin>>p.x>>p.y;
}
void input_circle(CIRCLE &c){
	cout<<"Nhap toa do tam cua duong tron";	input_point(c.I);
	cout<<"Nhap ban kinh:"; cin>>c.R;
}
void solve(CIRCLE c){
	cout<<"Dien tich cua hinh tron la:"<<PI * (c.R*c.R);
	cout<<"Chu vi hinh tron la "<< 	2 * PI * c.R;
}
int main()
{
	CIRCLE c;
	input_circle(c);
	solve(c);
	return 0;
}