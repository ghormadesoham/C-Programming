
	#include<iostream>
	#include<conio.h>
    #include"Polymorphism.h"
	using namespace std;

		void Vehicle::Speed()
		{
			cout << endl << "in Speed() of Vehicle class." << endl;
		}

		 void Vehicle::Maintenance()
		{
			cout << endl << "in Maintenance() of Vehicle class." << endl;
		}

		void Vehicle::Value()
		{
			cout << endl << "in Value() of Vehicle class." << endl;
		}

		void FourWheeler::Speed()
		{
			cout << endl << "in Speed() of FourWheeler class." << endl;
		}
		//override the virtual method from the base class
		void FourWheeler::Maintenance()
		{
			cout << endl << "in Maintenance() of FourWheeler class." << endl;
		}

		//override the virtual method from the base class
		void TwoWheeler::Speed()
		{
			cout << endl << "in Speed() of TwoWheeler class." << endl;
		}
		//override the virtual method from the base class
		void TwoWheeler::Maintenance()
		{
			cout << endl << "in Maintenance() of TwoWheeler class." << endl;
		}
		void TwoWheeler::Value()
		{
			cout << endl << "in Value() of TwoWheeler class." << endl;
		}

		//override the virtual method from the base class
		void AirBorne::Speed()
		{
			cout << endl << "in Speed() of AirBorne class." << endl;
		}







