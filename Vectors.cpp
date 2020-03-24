#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class Account
{
private:
	int accountNumber;
	double balance;

public:
	Account(int, double);
	Account();
	int getAccountNumber();
	double getBalance();
	void setBalance(double);
	void credit(double);
	void debit(double);
	void print();
};

Account::Account(int accNumber, double bal)
{
	accountNumber = accNumber;
	balance = bal;
}

Account::Account()
{
	accountNumber = 0;
	balance = 0;
}

int Account::getAccountNumber()
{
	return(accountNumber);
}

double Account::getBalance()
{
	return(balance);
}

void Account::setBalance(double newBalance)
{
	balance = newBalance;
}

void Account::credit(double amount)
{
	balance += amount;
}

void Account::debit(double amount)
{
	balance -= amount;
}

void Account::print()
{
	cout << "Your account number is: " << accountNumber << endl;
	cout << "Your balance is: " << balance << endl;
}

bool compare(Account a, Account b)
{
	return (a.getBalance() < b.getBalance());
}

int main() {
    
	vector <Account> vec;

	for (int i = 0; i < 45; i++)
	{
		vec.push_back(Account(i, rand() % 100 + 1));
	}

	sort(vec.begin(), vec.end(), compare);

	for (int i = 0; i < 45; i++){
		vec[i].print();
	}

	system("pause");
	return(0);
} 
