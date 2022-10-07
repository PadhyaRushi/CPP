#include<iostream>

using namespace std;

class father
{
	int a;
	public:
	
	int get1()
	{
		cout<<"Enter Money from father :";
		cin>>a;
	 return a;
	}
		
};
class mother
{
     int n;
     public:
	 int get2()
	 {
	 	cout<<"Enter Money from mother:";
	 	cin>>n;
	 	 return n;
	 }	
};
class son : public father,public mother
{
	int sum=0;
	public:
	void get3()
	{
	    
	    sum=get1()+get2();
	    cout<<"Total Money : "<<sum;
		

	}
};




int main()
{
	son obj;
	obj.get1();
	obj.get2();
	obj.get3();
	return 0;
}