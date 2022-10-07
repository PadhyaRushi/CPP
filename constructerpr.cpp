#include<iostream>

using namespace std;


class a
{	
	int r;
	string q;
	public:
		a(int x)
		{
			r=x;
			cout<<"Helloo"<<x<<endl;
		}
		a(string a)
		{
			q=a;
			cout<<a<<endl;	
		}
};
int main()
{
	a ob(20);
	a ob1("How Are You");
	return 0;
}