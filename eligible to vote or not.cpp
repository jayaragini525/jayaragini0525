#include<iostream>
using namespace std;
int main()
{
	int age;
	cout <<"enter the age:";
	cin>>age;
	if (age>18)
	cout<<"eligible to vote";
	else
	cout<<"not eligible to vote,will be eligible to vote in"<<18-age<<"years"<<endl;
}
