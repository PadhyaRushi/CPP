#include<iostream>
using namespace std;

class op_overload
{
	int a,b;
	
	public:
		
		void setValue(int v,int x)
		{
			a=v;
			b=x;
		}
		
		op_overload operator +(op_overload r1)
		{
		    op_overload p;
		    
	    	p.a = a+r1.a;
			p.b = b+r1.b;
			return p;
		}
		
		void display()
		{
			cout<<"Sum of First Two Operand Of Objects : "<<a<<endl;
		    cout<<"Sum of Second Two Operand Of Objects : "<<b<<endl;
		
		}
	
};

int main()
{

	op_overload ob1,ob2,ob3;
	ob1.setValue(12,3);
	ob2.setValue(10,2);

	ob3 = ob1+ob2;
	
	ob3.display();
	return 0;
}