	#pragma once

	#include<iostream>
	#include<conio.h>

	using namespace std;
	//base class
	class Vehicle
	{
	public:
		virtual void Speed();
		virtual void Maintenance();
		void Value();
	};

	//derived class
	class FourWheeler :public Vehicle
	{
	public:

		void Speed();
		void Maintenance();
	};

	//derived class
	class TwoWheeler :public Vehicle
	{
	public:
		void Speed();
		void Maintenance();
		void Value();
	};

	//derived class,public inheritance
	class AirBorne :public Vehicle
	{
	public:
		void Speed();
	};






