#include<iostream>

using namespace std;

class parents
{
     	string bankname;    
		string IFSC;
		int Ac;
		
		 public:
	    	
		void set()
		{
			cin>>bankname>>IFSC>>Ac;
//			cout<<"BankName = "<<bankname<<"\nIFSC = "<<IFSC<<"\nAccount Number = "<<Ac<<endl;
		}
			
		
};

class child : public parents
{
	public:
			void set1()
		{
	   cout<<"BankName = "<<bankname<<"\nIFSC = "<<IFSC<<"\nAccount Number = "<<Ac<<endl;
	}
};
int main()
{
  child p;
   p.set1();
	return 0;
	
}