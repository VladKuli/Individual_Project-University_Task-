#pragma once
#ifndef DATASERACH_H
#define DATASERACH_H

#include "Client.h"
#include "Employee.h"
#include "Account.h"
#include "Transaction.h"
#include "Branch.h"

Client* searchClientById(Client* clients, int numClients, long id);

Employee* searchEmployeeById(Employee* employees, int numEmployees, long id);

Account* searchAccountById(Account* accounts, int numAccounts, long id);

Transaction* searchTransactionById(Transaction* transactions,
	int numTransactions, long id);

Branch* searchBranchById(Branch* branches, int
	numBranches, long id);

Client* searchClientByName(Client* clients, int numClients, const char* name);

Employee* searchEmployeeByName(Employee* employees, int numEmployees,
	const char* name);

Account* searchAccountByNumber(Account* accounts, int numAccounts, int number);

Transaction* searchTransactionByPurpose(Transaction* transactions,
	int numTransactions, const char* purpose);

Branch* searchBranchByName(Branch* branches, int numBranches, const char* name);

#endif

