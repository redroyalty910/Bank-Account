
// Tim Mills, 6/23/24, Bank Account Practice lab that we were told to finish for homework :) all required functions have been defined in bankAccount.cpp

#include "bankAccount.h" //using this header file allows me access to everything that I need within my cpp files

int main() {

	BankAccount account1, account2; //creation of account1 and account2

	cout << "Start of Test:\n";

	account1.set(123, 99, 3.0); // sets $123, 99 cents, and a three percent interest rate

	cout << "account1 initial statement:\n";

	account1.output(); //outputs what we had set

	account1.set(100, 5.0); // sets $100, 00 cents, and a five percent interest rate

	cout << "account1 with new setup:\n";

	account1.output();

	account1.update(); // updates the new setup one year after a 5% interest rate

	cout << "account1 after update:\n";

	account1.output();

	account2 = account1; // we set account2 equal to account1 

	cout << "account2:\n";

	account2.output(); // the output is the same as account1

	account1.outputToFile("account1.txt");

	account2.outputToFile("account2.txt"); //both accounts are output into their respective new files thanks to the function we created

	return 0;
}
/* this is my output!
Start of Test:
account1 initial statement:
Balance: $123.99
Interest Rate: 3%
account1 with new setup:
Balance: $100
Interest Rate: 5%
account1 after update:
Balance: $105
Interest Rate: 5%
account2:
Balance: $105
Interest Rate: 5%
*/