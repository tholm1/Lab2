#include <iostream> 
using namespace std; 

int hello1Function(string name1) 
{ 
 cout << "hello World " << name1 << endl; 
 return 0; 
} 
 
int hello2Function(string name2) 
{ 
 cout << "hello World " << name2 << endl; 
 return 0; 
} 

int main() 
{ 
    string name1 = "your name1"; 
    hello1Function(name1); 
    string name2="your name2"; 
    hello2Function(name2);
    return 0;
} 
