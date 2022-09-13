#include<iostream>
using namespace std;
class add
{
    int x,y;
	public:
	int input();
	int display();
};
int  add :: input()
{
	cout<<"enter the x and y value";
	cin>>x>>y;
}
int add :: display()
{
	cout<<"sum of 2 no's"<<x+y;
}
int  main()
{
	add a;
	a.input();
	a.display();
}
