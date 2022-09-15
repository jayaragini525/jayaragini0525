#include<iostream>
using namespace std;
class x
{
	int a=5,b=6;
	public:
		void getdata1()
		{
			cout<<"addition value is"<<a+b<<endl;
		}
};
class Y:public x
{
	int a=2,b=4;
	public:
		void getdata()
		{
			cout<<"product value is"<<a*b<<endl;
		}
};
int main()
{
	Y y;
	y.getdata1();
	y.getdata();
}
