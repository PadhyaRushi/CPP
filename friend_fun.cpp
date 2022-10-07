#include<iostream>

using namespace std;

class animal
{
	int id=79;
	string name="Tiger";
	
	friend void Wild(animal obj);
	
};

    void Wild(animal obj)
{
   cout<<obj.id<<endl<<obj.name<<endl;
	
}


int main()
{
	animal a;
	Wild(a);
	return 0;
}