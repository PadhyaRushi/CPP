#include<iostream>
using namespace std;

class a
{
   int n;
   string name;
   public:
   	void getdata()
   	{
   		cout<<"Enter Your Roll Number : ";
   		cin>>n;
   		cout<<"Enter Your Name : ";
   		cin>>name;
	}
   friend class b;
	
};

class b:public a
{
	public:
	void display(a obj)
	{
		cout<<obj.n<<endl<<obj.name<<endl;
	}
   	
};

int main()
{
    a obj;
    b obj2;
    obj2.getdata();
    obj2.display(obj);
    
	return 0;
}