#include<iostream>

using namespace std;

class father 
{
	protected :
	int money=500;
	public:
		void fun1()
		{
			cout<<"Father Have.....$500"<<endl;
		}
		
};
class mother 
{
	protected :
	int money=500;
	public:
		void fun2()
		{
			cout<<"Mother Have.....$500"<<endl;
		}
		
};
class son : public father ,public mother
{
	public:
		void display2()
		{
			fun1();
			fun2();
			int sum=0,sum2=0;
			sum=500-150;
			sum2=500-400;
			cout<<"Father Give To Son $"<<sum<<"Mother Give To Son $"<<sum2<<endl;
		}
		
	
	
};
class daughter : public father ,public mother

{
	public:
		void display3()
		{
			int sum=0,sum2=0;
			sum=500-350;
			sum2=500-100;
			cout<<"Father Give To Son $"<<sum<<"Mother Give To Son $"<<sum2<<endl;
		}
		
		
	
	
};


int main()
{
	son beta;
	daughter beti;
	beta.display2();
    beti.display3();
   
	return 0;
}