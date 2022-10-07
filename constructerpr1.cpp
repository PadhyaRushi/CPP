#include<iostream>

using namespace std;

class A
{
    int n=25;
    public:
    	A()
    	{
    		cout<<n<<endl;
		}
		A(A &ob)
		{
			cout<<ob.n<<endl;
		}
	
};

int main()
{
	
	A obj;
	A obj1( obj);
	return 0;
}