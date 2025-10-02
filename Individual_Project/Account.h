#ifndef ACCOUNT_H
#define ACCOUNT_H

#include "Client.h"

enum AccountType { SAVINGS, CHECKING, CREDIT };

struct Account {
	long id;
    int number;
    long clientId;
    AccountType type;
    char currency[4];
    double balance;
};

#endif
