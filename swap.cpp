#include<iostream>

using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter First Value : ";
	cin>>a;
	cout<<"Enter Second Value : ";
	cin>>b;
	//With Third Variable
	temp=a;
    a=b;
    b=temp;
    ////Without Third Variable
    a=a+b;
    b=a-b;
    a=a-b;
	cout<<"After Swap value :\n";
	cout<<"First Value ="<<a<<"\nSecond Value= "<<b;
	return 0;
}
