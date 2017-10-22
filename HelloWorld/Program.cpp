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

void TypeCastingExample()
{
	int y = 1001, j = 365, n;
	n = (y - 1)*j;
	cout << "n:" << n << endl;
	n = (y - 1) *(long)j;//C style casting
	cout << "n after C style casting :" << n << endl;
	n = (y - 1)*long(j);//C++ style casting
	cout << "n:afterC++ stle casting " << n << endl;
}

void AverageMarksComputation()
{
	char str[40];
	int m1, m2, m3, avg;
	cout << "Enter your name" << endl;
	cin >> str;//input operator
	cout << "Enter your marks in three subjects";
	cin >> m1 >> m2 >> m3;
	avg = (m1 + m2 + m3) / 3;
	cout << "Your name is " << str << endl;
	cout << endl << "Average marks are " << avg;//endl is a manipulator

}

void VoidPointerExample()
{
	void * voidPointer;
	char *pointerToChar;
	voidPointer = pointerToChar;
	//s = p;//does not compile you cannot assign void pointer to a pointer of specific type
	//do an explicit typecast for this case
	pointerToChar = (char*)voidPointer;//explicit C -style cast

}
void stringExample()
{
	char str1[] = "Hello";//5 characters
	cout << str1 << endl;
	_strupr(str1);//upper case  
	cout << str1 << "\n";
	cout << ch << endl;
	cout << cold << endl;
}

//global variable 
int a = 10;
void GlobalVariableExample()
{
	//local variable with same name 
	int a = 15;
	//:: is the scope reosolution operator used for calling global variables with 
	//same name as local variables and also for defining class methods outside of the class definition
	cout << "\n local a :" << a << "\n global a :" << ::a << endl;
	::a = 20;
	cout << "After updating global variable" << endl;
	cout << "\n local a :" << a << "\n global a :" << ::a << endl;

}

void ReferenceExample()
{

	int i = 10;
	int &j = i;//create a reference
	//a reference is a handle to the integer i 
	cout << endl << "i  :" << i << endl << "j : " << j << endl;
	j = 20;//change j
	cout << "After j is updated:" << endl;
	cout << endl << "i  :" << i << endl << "j : " << j << endl;

	i = 30;
	cout << "After i is updated:" << endl;
	cout << endl << "i  :" << i << endl << "j : " << j << endl;
	i++;
	cout << "After i is incremented:" << endl;
	cout << endl << "i  :" << i << endl << "j : " << j << endl;
	j++;
	cout << "After j is incremented:" << endl;
	cout << endl << "i  :" << i << endl << "j : " << j << endl;
	cout << endl << "address of i  :" << &i << endl << "address of j : " << &j << endl;
	int &l = i;
	l = j;
	int z = 12;
	l = z;
	char * p = "Hello";// a char pointer
	char * &q = p;//reference to a char pointer

}

//main function 
void main()
{
	//AverageMarksComputation();
	/*single line comment*/
	//VoidPointerExample();
	//TypeCastingExample();
	//GlobalVariableExample();
	ReferenceExample();
	string str1;
	cin >> str1;//for viewing input 

}
//define a structure in C++
//structures can define data and methods in C++

struct employee
{
	char name[20];
	int age;
	int GetAge()
	{
		return age;
	};
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

