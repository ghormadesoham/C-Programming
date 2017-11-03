//Let Us C++
//include input output stream
//cout and cin are defined in std namespace

#include <iostream>
#include <string>
#include"FunctionDeclarations.h"
#include "Polymorphism.cpp"
#include "Complex.cpp"
using namespace std;

struct employee
{
	char name[20];
	int age;
	float salary;
};

void PrintEmployeeData(employee);
employee& GetEmployee3();

//main function 
void main()
{
	//forward declare functions
	void modify_c(employee*);
	void modify_cpp(employee&);
	//AverageMarksComputation();
	/*single line comment*/
	//VoidPointerExample();
	//TypeCastingExample();
	//GlobalVariableExample();
	//ReferenceExample();
	//Swap();
	//ReturnByReference();
	//ConstPointersExample();
	PolymorphismExample();
	string str1;
	cin >> str1;//for viewing input 

}

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

void Swap()
{
	int i = 10, j = 20;
	cout << "i : " << i << " " << "j : " << j << endl;
	SwapByValue(i, j);
	cout << "i : " << i << " " << "j : " << j << endl;
	SwapByReference(i, j);
	cout << "i : " << i << " " << "j : " << j << endl;
	SwapByAddress(&a, &j);
	cout << "i : " << i << " " << "j : " << j << endl;
}
//swap by reference
//uses references --easier to read than Pass by Address but logic is the same
void SwapByReference(int& a, int& b)
{
	int temp;
	//store "a" to a temp variable before overwriting
	temp = a;
	//copy over value of "b" to "a"
	a = b;
	//assign the value of "a" from temp to "b"
	b = temp;
	cout << "Swap By Reference" << endl;
	cout << "a : " << a << " " << "b : " << b << endl;
}

//swap by value
void SwapByValue(int a, int b)
{
	int temp;
	//store "a" to a temp variable before overwriting
	temp = a;
	//copy over value of "b" to "a"
	a = b;
	//assign the value of "a" from temp to "b"
	b = temp;
	cout << "Swap By Value" << endl;
	cout << "a : " << a << " " << "b : " << b << endl;
}

//& Address of operator- apply to a variable to get its address
//* deferencing operator -apply to a pointer to get its value
void SwapByAddress(int* a, int* b)
{
	int temp;
	//store "a" to a temp variable before overwriting
	temp = *a;
	//copy over value of "b" to "a"
	*a = *b;
	//assign the value of "a" from temp to "b"
	*b = temp;
	cout << "Swap By Address" << endl;
	cout << "a : " << *a << " " << "b : " << *b << endl;

}

//modify values C style using pointers
void modify_c(employee * emp)
{
	cout << "modify values C style using pointers" << endl;
	emp->age = 21;
	strcpy(emp->name, "Santhosh");
	emp->salary = 3000;

}

//modify values C++ style using references
void modify_cpp(employee & emp)
{
	cout << "modify values C++ style using references" << endl;
	emp.age = 31;
	strcpy(emp.name, "Soham");
	emp.salary = 4000;

}

void PrintEmployeeData(employee emp)
{
	cout << "Employee  Data" << endl;
	cout << "Name :" << emp.name << endl;
	cout << "Age :" << emp.age << endl;
	cout << "Salary :" << emp.salary << endl;
}

//global user-defined variable
employee e3 = { "Sahil",32,90000 };
employee e4 = { "Varun",42,5000 };

//return e3 by reference(&)
employee& GetEmployee3()
{
	PrintEmployeeData(e3);
	return e3;
}

void ReturnByReference()
{

	GetEmployee3() = e4;
	PrintEmployeeData(e3);
	PrintEmployeeData(e4);
}

void EmployeeReferenceExample()
{
	employee e1 = { "Amit",40,1000 };
	employee e2 = { "Mukesh",50,7000 };
	modify_c(&e1);
	modify_cpp(e2);
	PrintEmployeeData(e1);
	PrintEmployeeData(e2);
}


//compute area of a circle using const
void ConstExample()
{
	float r, a;
	//uppercase 
	const float PI = 3.14;
	cout << "Enter radius: " << endl;
	cin >> r;
	a = PI*r*r;
	cout << "Area of circle :" << a << endl;

}

void xstrcpy(char * destination,  char *source)
{
	while (*destination != '\0')//"\0" refers to the last character of a string
	{
		*destination = *source;
		destination++;
		source++;
	}
	*destination = '\0';
}

void ConstPointersExample()
{
	char str1[] = "Nagpur";
	char str2[10];
	xstrcpy(str2,str1);
	cout << "String 2 after str cpy :" << str2 << endl;
}

void ConstReferencesExample()
{
	//pointer is variable so is string
	//non-const pointer and non-const string
	char * str = "Hello";
	*str = 'M';
	str = "Bye";

	//fixed string but pointer is not
	const char * pointerToConstString = "Hello";// equivalent to 
	//char const *pointerToConstString = "Hello";
	//*pointerToConstString = 'M';//compiler error
	pointerToConstString = "Bye";

	//pointer is fixed but string is not
	char* const constPointerToVariableString = "Hello";
	*constPointerToVariableString = 'M';
	//constPointerToVariableString = "Bye";

}

void PolymorphismExample()
{

	Vehicle * ptr1;
	Vehicle v;

	//base class pointer pointing to an instance of the base class
	ptr1 = &v;
	ptr1->Speed();
	ptr1->Maintenance();
	ptr1->Value();

	Vehicle * ptr2, *ptr3, *ptr4;
	FourWheeler maruti;
	TwoWheeler bajaj;
	AirBorne jumbo;

	//run time /dynamic binding polymorphism
	ptr2 = &maruti;
	ptr3 = &bajaj;
	ptr4 = &jumbo;

	ptr2->Speed();
	ptr2->Maintenance();

	ptr3->Speed();
	ptr3->Maintenance();

	ptr4->Speed();
	ptr4->Maintenance();

	//calling a non-virtual function
	ptr2->Value();
	ptr3->Value();

	//early/static/compile-time binding
	Vehicle w;
	w.Speed();

	FourWheeler f;
	f.Speed();

	AirBorne a;
	a.Maintenance();


}
