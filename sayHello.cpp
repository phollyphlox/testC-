#include <iostream>
#include <string>

using namespace std;


void hello(string name, int num = 1)
{
     int i = 1;
	 while(i<=num)
	 {
         cout << "Hello " << name << endl;
	 i++;
	}
}

int main()
{
     int num = 5;
	 string name = "Phyllis";
	 
	 hello(name, 5);
	 
	 hello(name);
	 
	 cin >> name;
         return 0;
}