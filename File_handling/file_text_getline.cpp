#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream object;
	char str[900];
	object.open("sameer.txt");  // member function of ofstream class
	object.getline(str,900);  // read a line 
	cout<<str;
	object.getline(str,900);  // read a line 
	cout<<str;
	object.close();  //member function of ofstream class
	return 0;
	
}
