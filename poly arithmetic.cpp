#include<iostream>
using namespace std;
class arithmetic
{
	int x=5,y=10 ,add,sub,Multi,divi,module;
	public:
		void  display()
		{
		    x&y;
		}
};
class add:public arithmetic
{
	int x=6,y=5;
	public:
	void display()
	{
		cout<<"add is "<<x+y<<endl;
	}
};
class sub:public arithmetic
{
	int x=5,y=4;
	public:
	void display()
	{
		cout<<"sub is  "<<x-y<<endl;
	}
};
class Multi:public arithmetic
{
	int x=2,y=2;
	public:
	void display()
	{
		cout<<"Multi is  "<<x*y<<endl;
	}
};
class divi: public arithmetic
{
	int x=3,y=3;
	public:
	void display()
	{
		cout<<"divi is "<<x/y<<endl;
	}
};
class module: public arithmetic
{
	int x=2,y=4;
	public:
	void display()
	{
		cout<<"module is "<<x%y<<endl;
	}
};
int main()
{
	module m;
	m.display();
	divi d;
	d.display();
	Multi u;
	u.display();
	sub s;
	s.display();
	add a;
	a.display();
}
