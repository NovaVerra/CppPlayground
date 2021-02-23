#ifndef _ACCOUNTUTIL_H_
#define _ACCOUNTUTIL_H_

#include "./Account.h"
#include <vector>

using std::vector;

void display(const vector<Account *> &accounts);
void withdraw(vector<Account *> &accounts, double amount);
void deposit(vector<Account *> &accounts, double amount);

#endif