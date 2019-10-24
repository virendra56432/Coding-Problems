// Extract all integers from string
#include <iostream> 
#include <sstream> 
using namespace std; 

void extractInteger(string str) 
{ 
	stringstream ss;	 
	ss << str; 
	string temp; 
	int found; 
	while (!ss.eof()) { 
		ss >> temp; 
		if (stringstream(temp) >> found) 
			cout << found << " "; 
		temp = ""; 
	} 
} 

int main() 
{ 
	string str = "Hello34Hii45"; 
	extractInteger(str); 
	return 0; 
} 
