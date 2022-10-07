#include<iostream>
using namespace std;

class a
{
	
	int n,sum=0,i;
	public:
	friend void getsum(a obj);
};
    void getsum(a obj)
    {
    	cout<<"Enter Last Number of Series :"<<endl;
    	cin>>obj.n;
    	for( obj.i=02;obj.i<=obj.n;obj.i++)
    	{
    		obj.sum =obj.sum+obj.i;
		}
		cout<<"Sum Of Series : "<<obj.sum<<endl;
	}

int main()
{
	a obj1;
	getsum(obj1);
	return 0;
}