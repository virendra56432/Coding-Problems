// Extract all integers from string
#include <iostream> 
#include <sstream> 
using namespace std; 

 

int main() 
{ 
	string str = "1234"; 
	for(int i=0;i<str.size();i++)
	cout<<str[i]-'0';
	return 0; 
} 
