#include<iostream>
using namespace std;
class printnumber
{
	int n1;
	char *p;
	float n2;
	double n3;
	long int n4;
	public:
		printnumber(int);
		printnumber(char*);
		printnumber(float);
		printnumber(double);
		printnumber(long int);
		void display();
};
printnumber::printnumber(int a)
{
	n1=a;
	cout<<"integer is"<<n1;
}
printnumber::printnumber(char *b)
{
	p= b;
	cout<<"char is"<<p;
}
printnumber::printnumber(float c)
{
	n2=c;
	cout<<"float is"<<n2;
}
printnumber::printnumber(double d)
{
	n3=d;
	cout<<" double is"<<n3;
}
printnumber::printnumber(long int e)
{
	n4=e;
	cout<<"long integer is"<<n4;
}


int main()
{
	printnumber p1(88),p2("hi"),p3(3.15),p4(5.2344),p5(155652);
	return 0;
}
