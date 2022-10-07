#include<iostream>

using namespace std;

class father 
{
	protected :
	int money=500;
	public:
		void display1()
		{
			cout<<"Father Have.....$500"<<endl;
		}
		
};
class son : public father 
{
	public:
		void display2()
		{
			display1();
			int sum=0;
			sum=500-150;
			cout<<"Father Give To Son = $"<<sum<<endl;
		}
		
};
class daughter : public father 
{
	public:
		void display3()
		{
			int sum1=0;
			sum1=500-350;
			cout<<"Father Give To Daughter = $"<<sum1<<endl;
		}
	
};
int main()
{
	son obj;
	daughter obj1;
	obj.display2();
    obj1.display3();
   
	return 0;
}