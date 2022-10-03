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
			cout<<"BankName = "<<bankname<<"\nIFSC = "<<IFSC<<"\nAccount Number = "<<Ac<<endl;
		}
		 
			
		
};

class child : public parents
{
	
};
int main()
{
  child p;
   p.set();
	return 0;
	
}