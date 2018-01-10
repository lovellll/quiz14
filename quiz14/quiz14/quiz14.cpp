// quiz14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stdexcept>

class Fraction
{
	int m_numerator;
	int m_denominator;

public:
	Fraction(int numerator, int denominator) try:m_numerator(numerator), m_denominator(denominator)
	{
		if (!denominator)
			throw std::runtime_error("Denominator is zero");
	}

	catch (std::exception &exception)
	{
		std::cout << "Fatal error:" << exception.what() << "\n";
	}

	void print() const
	{
		std::cout << "The number is " << m_numerator << "." << m_denominator << "\n";
	}


};

int main()
{
	
	try
	{
		std::cout << "Please input one number\n";
		int numerator;
		std::cin >> numerator;
		std::cout << "Please input another number\n";
		int denominator;
		std::cin >> denominator;

		Fraction f1(numerator, denominator);
		f1.print();
	}

	catch (...)
	{
		std::cout << "ggwp\n";
	}

    return 0;
}

