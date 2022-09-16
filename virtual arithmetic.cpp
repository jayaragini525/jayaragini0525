#include<iostream>
using namespace std;
class arithmetic
{
	int x,y ,add,sub,Multi,divi,module;
	public:
		virtual void  display()
		{
		    x&y;
		}
};
class add:public arithmetic
{
	int x=2,y=5;
	public:
	void display()
	{
		cout<<"add is"<<x+y<<endl;
	}
};
class sub:public arithmetic
{
	int x=5,y=3;
	public:
	void display()
		{
		cout<<"sub is  "<<x-y<<endl;
	}
};
class Multi:public arithmetic
{
	int x=6,y=2;
	public:
	void display()
	{
		cout<<"Multi is  "<<x*y<<endl;
	}
};
class divi: public arithmetic
{
	int x=10,y=5;
	public:
	void display()
	{
		cout<<"divi is "<<x/y<<endl;
		}
};
class module: public arithmetic
{
	int x=2,y=5;
	public:
	void display()
	{
		cout<<"module is "<<x%y<<endl;
	}
};
int main()
{
	arithmetic *a;
	add a1;
	sub s1;
	Multi m1;
	divi d1;
	module m2;
	a=&a1;
	a->display();
	a=&s1;
	a->display();
	a=&m1;
	a->display();
	a=&d1;
	a->display();
	a=&m2;
	a->display();
}
	
