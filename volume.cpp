#include<iostream>

using namespace std;

int main()
{
	int r,h;
	float volume;
	cout<<"Enter Radius :\n";
	cin>>r;
	cout<<"Enter Height :\n";
	cin>>h;
	volume=3.14*r*r*h;
	cout<<"Volume = "<<volume;

	return 0;
}