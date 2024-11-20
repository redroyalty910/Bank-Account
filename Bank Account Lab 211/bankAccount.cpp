#include "bankAccount.h" //using this header file allows me access to everything that I need within my cpp files

void BankAccount::set(int dollars, int cents, double rate) { //setter function when provided two integers and a double

	balance = dollars + cents / 100.0; //this is the proper math to combine dollars and cents in the way it is intended to be displayed (took me a little while to figure out, honestly)

	interestRate = rate;
}
void BankAccount::set(int dollars, double rate) { //setter function when only provided one integer and a double

	balance = dollars;

	interestRate = rate;
}
void BankAccount::update() { //accounts for the interest after ONE YEAR and alters provided stats accordingly

	balance += balance * fraction(interestRate); //very simple math, we just account for the interest
}
double BankAccount::getBalance() { //returns the current account balance

	return balance;
}
double BankAccount::getRate() { //returns the current account interest rate as a percentage

	return interestRate;
}
void BankAccount::output() { //print function that returns the balance and interest rate to the screen

	cout << "Balance: $" << balance << endl;

	cout << "Interest Rate: " << interestRate << "%" << endl;
}
void BankAccount::outputToFile(const string& filename) { //saves the cpp file data to a new file (requested in JOB#2)

	ofstream outFile(filename);

	if (outFile.is_open()) {

		outFile << "Balance: $" << balance << endl;

		outFile << "Interest Rate: " << interestRate << "%" << endl;

		outFile.close();

	}

	else {

		cout << "Error opening file: " << filename << endl; // just incase there is a user error, I always include this line

	}
}
double BankAccount::fraction(double percent) //converts percent into a fraction (I'm curious why this function was private in the class definition)
{

	return percent / 100.0;
}