#include<iostream>

using namespace std;

class Mammals
{
	public:
	void d1()
	{
		cout<<"I am Mammal";
	}
};
class MarinAnimals
{
	public:
	void d2()
	{
		cout<<"\nI am MarinAnimals";
	}
};
class BlueWhale :  public  Mammals, public MarinAnimals
{
    public:
	void d3()
	{
		cout<<"\nI am Mammal as well as MarinAnimal";
	}
	
};

int main()
{
 BlueWhale obj;
	obj.d1();
	obj.d2();
	obj.d3();
	return 0;
}