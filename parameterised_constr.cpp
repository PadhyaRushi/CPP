#include<iostream>

using namespace std;

class XYZ
{
    int rno;
    string name;
    public:
    	XYZ(int rno,string name)
    	{
    		cout<<rno<<endl<<name<<endl;
		}
	
};

int main()
{
	
	XYZ obj(25,"Rushi"),obj1(30,"How Are You");
	
	return 0;
}