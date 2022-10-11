#include<iostream>

using namespace std;


class overload
{
    int n;
    public:
    	void get(int a)
    	{
    		n=a;
		}
	    void operator ++(int)
		{
			n++;
		}
    	void display()
    	{
    		cout<<n;
		}
    	
    	
};
int main()
{
	overload obj;
	obj.get(5);
	obj++;
	obj.display();
	return 0;
}