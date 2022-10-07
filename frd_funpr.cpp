#include<iostream>

using namespace std;

class sum
{
     int n1,n2,sum1;
	 public :
	 
	friend void getsum(sum s);	
};
    void getsum(sum s)	
     {
     	cout<<"Enter Any Two Number : ";
     	cin>>s.n1;
     	cin>>s.n2;
     	s.sum1 = s.n1+s.n2;
     	cout<<"Sum of two number : "<<s.sum1;
  	
	 }

int main()
{
	sum obj;
	getsum(obj);
	return 0;
}