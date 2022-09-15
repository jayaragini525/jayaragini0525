#include<iostream>
using namespace std;
class rectangle
{
	int l=3,b=5,h=4;
	public:
	void getdata1()
		{
			cout<<"area of the rectangle"<<l*b<<endl;
			cout<<"volume of the rectagle"<<l*b*h<<endl;
		}
};
class shape
{
	char cubiod;
	public:
		void getdata2()
		{
			cout<<"shape is a cubiod"<<endl;
		}
};
class cubiod:public rectangle,public shape
{
	int l=6,b=7,h=3;
	public:
		void getdata()
		{
			cout<<"area of the cubiod"<<l*b<<endl;
			cout<<"volume of the cubiod"<<l*b*h<<endl;
		}
};
int main()
{
	cubiod  c;
	c.getdata1();
	c.getdata2();
	c.getdata();
}
