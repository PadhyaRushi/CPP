#include<iostream>

using namespace std;
class pattern
{
	int row,col;
	public:
	
		
		pattern(int r,int c)
		{
			row=r;
			col=c;
			for(int i=0;i<row;i++)
			  {
			  	for(int j=0;j<=col-i;j++)
			  	{
			  		cout<<"* ";
				}
				cout<<"\n";
			  }
            			
		}
		
};

int main()
{
	int a,b;
	cout<<"Enter Value of Row =";
	cin>>a;
	cout<<"Enter Value of Column =";
	cin>>b;
	pattern obj(a,b);
	return 0;
}