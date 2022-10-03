#include<iostream>

using namespace std;



class mango
{
	int n;
	public:
		void display1()
		{
			cout<<"Enter number of mango : ";
			cin>>n;
			
			
		}
	
   	
};

class apple
{
	int n;
	public:
		void display2()
		{
			cout<<"Enter number of mango : ";
			cin>>n;		
		}
};
class Fruit : public mango,public apple
{
	public:
		void fdisplay()
		{
			cout<<n;
			cout<<n1;
		}
			

	
};

int main()
{
	Fruit f1;
	f1.display1();
	f1.display2();
	f1.fdisplay()
	return 0;
}