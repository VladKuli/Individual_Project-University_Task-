#pragma once
#ifndef DATASORT_H
#define DATASORT_H

#include "Client.h"
#include "Employee.h"
#include "Account.h"
#include "Transaction.h"
#include "Branch.h"
void sortClientsByName(Client* clients, int numClients);
void sortEmployeesByName(Employee* employees, int numEmployees);
void sortAccountsByBalance(Account* accounts, int numAccounts);
void sortTransactionsByDate(Transaction* transactions, int numTransactions);
void sortBranchesByName(Branch* branches, int numBranches);
#endif

