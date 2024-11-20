#pragma once

#include <fstream>
#include <iostream> //I keep the libraries that I need for this project in my header file
using namespace std;

class BankAccount { //"BankAccount" class is created
public:

	void set(int dollars, int cents, double rate); //setter function that requests to be provided two integers and a double

	void set(int dollars, double rate); //setter function when only provided one integer and a double

	void update(); //accounts for the interest after ONE YEAR and alters provided stats accordingly

	double getBalance(); //returns the current account balance

	double getRate(); //returns the current account interest rate as a percentage

	void output(); //print function that returns the balance and interest rate to the screen

	void outputToFile(const string& filename); //saves the cpp file data to a new file (requested in JOB#2)

private:

	double balance;

	double interestRate;

	double fraction(double percent); //converts percent into a fraction
};