#include <iostream>
#include <fstream>
using namespace std;

int main()
 {
 	string a;
  
  //Write in file
    ofstream file1;
    file1.open("C:/Users/Rushi/Pictures/f1.txt");
    //Using This you will be print only first word
   cin>>a;
    //Using This you will be print Whole sentence
    getline(cin,a);
    file1<<a;
    
    file1.close();
    
  //Read in file
    ifstream file2;
    file2.open("C:/Users/Rushi/Pictures/f1.txt");
    file2>>a;
    cout<<a;
  
    file2.close();
    return 0;
}