#include<iostream>

using namespace std;

class menu
{
	string name;
	public:
	void info()
{
		
	cout<<"-------Tops Tech. Fast Food--------"<<endl<<endl;

	cout<<"Please Enter Your Name : "<<endl;
	cin>>name;
	cout<<endl<<"WelCome..."<<name<<endl<<endl;
	cout<<"What Would You Like To Order...?"<<endl<<endl;
	
	cout<<"-----------Menu------------------"<<endl;
	cout<<"1)Pizzas"<<endl;
	cout<<"2)Burgers"<<endl;
	cout<<"3)Sandwich"<<endl;
	cout<<"4)Rolls"<<endl;
	cout<<"5)Biryani"<<endl;
}
	
};

class foodchoice
{
	int choice,choose,qnt;
	
	public:
		void food()
		{
		
		cout<<"Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"1  Neapolitan Pizza Rs.240"<<endl;
				cout<<"2  Sicilian Pizza Rs.160"<<endl;
			    cout<<"3  St. Louis Pizza Rs.100"<<endl;
			    
			    cout<<"Please Enter Which Pizza You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"1  Neapolitan Pizza"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*240<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"2  Sicilian Pizza"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*160<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"3  St. Louis Pizza"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*100<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			    	
				}break;
				
				case 2:
					
					
				cout<<"1  Lentil and Mushroom Burger Rs.80"<<endl;
				cout<<"2  Stuffed Bean Burger. Rs.130"<<endl;
			    cout<<"3  Potato Corn Burger. Rs.150"<<endl;
			    
			    cout<<"Please Enter Which Burger You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"1  Lentil and Mushroom Burger"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*80<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"2  Stuffed Bean Burger"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*130<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"3  Potato Corn Burger"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*150<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
			case 3:
					
					
				cout<<"1  Club Sandwich Rs.240"<<endl;
				cout<<"2  Veg. Crispy Sandwich Rs.160"<<endl;
			    cout<<"3  Extream Veg.Sandwich Rs.100"<<endl;
			    
			    cout<<"Please Enter Which Sandwich You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"1  Club Sandwich"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*240<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"2  Veg. Crispy Sandwich"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*160<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"3  Extream Veg.Sandwich "<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*100<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
			case 4:
					
					
				cout<<"1  Paneer Tikka Roll Rs.110"<<endl;
				cout<<"2  Corn Roll Rs.70"<<endl;
			    cout<<"3  Veg. Spring Roll Rs.190"<<endl;
			    
			    cout<<"Please Enter Which Rolls You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"1  Paneer Tikka Roll "<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*110<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"2  Corn Roll"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*70<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"3  Veg. Spring Roll "<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*190<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
			case 5:
					
					
				cout<<"1  Veg.Biryani Rs.100"<<endl;
				cout<<"2  Makhni Panner Biryani Rs.220"<<endl;
			    cout<<"3  Hyderabadi Biryani Rs.250"<<endl;
			    
			    cout<<"Please Enter Which Biryani You Would Like To have :";
			    cin>>choose;
			    switch(choose)
			    {
			    	case 1:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"1 Veg.Biryani"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*100<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 2:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"2 Makhni Panner Biryani"<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*220<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";
			    		break;
			    	case 3:
			    		cout<<"Please Enter Quantity :";
			    		cin>>qnt;
			    		cout<<endl<<"3   Hyderabadi Biryani "<<endl;
			    		cout<<"Your Total Bill is..."<<qnt*250<<endl;
			    		cout<<"Your Order Will Be Delivered in 40 Minutes";	
			    		break;
			    	default :
			    		cout<<"not";
			}break;
		}
  }
};

int main()
{
	char c;
	do{
	
    menu obj;
	obj.info();	
	foodchoice obj1;
	obj1.food();
	 printf("\nWould you like to continue [Y/N] : ");
     scanf("%s",&c);
}while(c=='y' || c=='n' && c=='N' || c=='Y');
	return 0;
}