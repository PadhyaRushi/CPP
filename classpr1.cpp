#include<iostream>

using namespace std;

class base
{
    private:
    	int id;
    	string name;
    public:
    	void set_b()
    	{
    		cout<<"Enter Your Id : ";
    		cin>>id;
    		cout<<"Enter Name : ";
    		cin>>name;
		}
		void display_b()
		{
		  cout<<"Id = "<<id<<"\nName = "<<name<<endl;
		}	
};

class stud : private base
{
    	int fees;
	    string c;
	 
	  public:
	  		void set_s()
    	{
    		set_b();
    		cout<<"Enter Your course : ";
    		cin>>c;
    		cout<<"Enter Fees : ";
    		cin>>fees;
		}
		void display_s()
		{
			display_b();
		  cout<<"course = "<<c<<"\nFees of this course = "<<fees<<endl;
		}	
	
};


int main()
{
    stud b;
	b.set_s();
	b.display_s();
	
	return 0;
	
}