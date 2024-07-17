#include <iostream>
using namespace std;
struct Date{
	int year, month, day;
};
void input(Date &a){
	cout<<"Nhap ngay:"; cin>>a.day ;
	cout<<"Nhap thang"; cin>>a.month;
	cout<<"Nhap nam:"; cin>>a.year;
}
void output(Date a){
	cout<<a.day<<"/"<<a.month<<"/"<<a.year;
}
int main()
{
	Date ng;
	input(ng);
	output(ng);
	return 0;
}