//Let Uc C++
//include input output stream
//cout and cin are defined in std namespace
#include <iostream>
using namespace std;
void main()
{
	char str[40];
	int m1, m2, m3, avg;
	cout << "Enter your name";
	cin >> str;//input operator
	cout << "Enter your marks in three subjects";
	cin >> m1 >> m2 >> m3;
	avg = (m1 + m2 + m3) / 3;
	cout << "Your name is " << str;
	cout << endl << "Average marks are " << avg;//endl is a manipulator
}