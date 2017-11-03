
	#include<iostream>
	#include<conio.h>

	using namespace std;
	//base class
	class Vehicle
	{
	public:


		virtual void Speed()
		{
			cout << endl << "in Speed() of Vehicle class." << endl;
		}

		virtual void Maintenance()
		{
			cout << endl << "in Maintenance() of Vehicle class." << endl;
		}

		void Value()
		{
			cout << endl << "in Value() of Vehicle class." << endl;
		}

	};

	//derived class
	class FourWheeler :public Vehicle
	{
	public:
		//override the virtual method from the base class
		void Speed()
		{
			cout << endl << "in Speed() of FourWheeler class." << endl;
		}
		//override the virtual method from the base class
		void Maintenance()
		{
			cout << endl << "in Maintenance() of FourWheeler class." << endl;
		}

	};


	//derived class
	class TwoWheeler :public Vehicle
	{
	public:
		//override the virtual method from the base class
		void Speed()
		{
			cout << endl << "in Speed() of TwoWheeler class." << endl;
		}
		//override the virtual method from the base class
		void Maintenance()
		{
			cout << endl << "in Maintenance() of TwoWheeler class." << endl;
		}
		void Value()
		{
			cout << endl << "in Value() of TwoWheeler class." << endl;
		}

	};

	//derived class,public inheritance
	class AirBorne :public Vehicle
	{
	public:
		//override the virtual method from the base class
		void Speed()
		{
			cout << endl << "in Speed() of AirBorne class." << endl;
		}
	};






