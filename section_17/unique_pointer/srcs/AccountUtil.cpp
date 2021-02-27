#include "../includes/section_challenge/AccountUtil.h"

void display(const vector<Account *> &accounts)
{
	for (auto acc : accounts)
		cout << *acc << " ";
	cout << endl;
}

void withdraw(vector<Account *> &accounts, double amount)
{
	for (auto acc : accounts)
		if (acc->deposit(amount))
			cout << "Deposited " << amount << " from " << *acc << endl;
		else
			cout << "Failed to deposit " << amount << " from " << *acc << endl;

}

void deposit(vector<Account *> &accounts, double amount)
{
	for (auto acc : accounts)
		if (acc->withdraw(amount))
			cout << "Withdrew " << amount << " from " << *acc << endl;
		else
			cout << "Failed to withdraw " << amount << " from " << *acc << endl;
}
