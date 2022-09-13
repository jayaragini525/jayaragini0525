#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
	   int input();
	   int display();
};
int biggest :: input()
{
	cout<<"enter the 1st value";
	cin>>x;
	cout<<"enter the 2rd value";
	cin>>y;
}
int biggest :: display()
{
	if (x>y)
	{
	cout<<" x is biggest value"<<endl;
    }
	else
	{
	cout<<"y is biggest value";
	}
}
int main()
{
	biggest a;
	a.input();
	a.display();
}
