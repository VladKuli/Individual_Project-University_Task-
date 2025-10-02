#pragma once
#include <ctime>
#ifndef TRANSACTION_H
#define TRANSACTION_H


#include "Client.h"

enum TransactionType { DEPOSIT, WITHDRAWAL, TRANSFER };

struct Transaction {
	long id;
	time_t date;
	long senderAccountId;
	long recipientAccountId;
	TransactionType type;
	char purpose[100];
	double amount;
};

#endif