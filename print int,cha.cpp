#include<iostream>
using namespace std;
class print
{
	int no;
	char *p;
	public:
		print (int,char *);
		print(char *,int);
};
print::print( int x,char *y)
{
	no=x;
 	p=y;
 	cout<<" enter a integer is:"<<no<<endl;
 	cout<<"enter a char:"<<p<<endl;
}
print::print(char  *y,int x)
{
	p=y;
	no=x;
	cout<<" enter a char is:"<<p<<endl;
	cout<<"integer:"<<no<<endl;
}
int main()
{
	print p1(123," hehe"),p2(" haha",321);
	return 0;
}
