//Let Uc C++
//include input output stream
//cout and cin are defined in std namespace
#include <iostream>
#include <string>
using namespace std;

//anonymous union
//must be static 
static union
{
	char ch[2];
	int i;
};

//anonymous enum
enum
{
	hot,
	cold,
	windy,
};


void main()
{
	char str[40];
	int m1, m2, m3, avg;
	cout << "Enter your name"<<endl;
	cin >> str;//input operator
	cout << "Enter your marks in three subjects";
	cin >> m1 >> m2 >> m3;
	avg = (m1 + m2 + m3) / 3;
	cout << "Your name is " << str<<endl;
	cout << endl << "Average marks are " << avg;//endl is a manipulator
	/*single line comment*/
	char str1[] = "Hello";//5 characters
	cout << str1<<endl;
	strupr(str1);//upper case
	cout << str1<<"\n";
	cout << ch<<endl;
	cout << cold<<endl;
	cin >> str;//for viewing input 
	
}
//define a structure in C++
//structures can define data and methods in C++

struct employee
{
	char name[20];
	int age;
	int GetAge() 
	{ return age; };
};

//define a union in C++
//a union can hold functions as well
union data
{
	char ch[2];
	int i;
};

//define an enum in C++
enum status 
{
	married,
	unmarried,
	divorced
};

