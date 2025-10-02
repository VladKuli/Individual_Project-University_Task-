#pragma once
#ifndef MENU_H
#define MENU_H

#include "Client.h"
#include "Employee.h"
#include "Account.h"
#include "Transaction.h"
#include "Branch.h"
#include "dataCalc.h"
#include "dataView.h"
#include "dataEdit.h"
#include "dataSearch.h"
#include "dataSort.h"
#include "fileIO.h"

void displayMainMenu();

void displayClientMenu();

void displayEmployeeMenu();

void displayAccountMenu();

void displayTransactionMenu();

void displayBranchMenu();

void handleClientMenu(Client** clients, int* numClients);

void handleEmployeeMenu(Employee** employees, int* numEmployees);

void handleAccountMenu(Account** accounts, int* numAccounts);

void handleTransactionMenu(Transaction** transactions, int* numTransactions);

void handleBranchMenu(Branch** branches, int* numBranches);

void handleLoadData(Client** clients, int* numClients,
	Employee** employees, int* numEmployees,
	Account** accounts, int* numAccounts,
	Transaction** transactions, int* numTransactions,
	Branch** branches, int* numBranches);

void handleSaveData(Client* clients, int numClients,
	Employee* employees, int numEmployees,
	Account* accounts, int numAccounts,
	Transaction* transactions, int numTransactions,
	Branch* branches, int numBranches);

void handleCalculateData(Client* clients, int numClients,
	Employee* employees, int numEmployees,
	Branch* branches, int numBranches);

void handleSortData(Client* clients, int numClients,
	Employee* employees, int numEmployees,
	Account* accounts, int numAccounts,
	Transaction* transactions, int numTransactions,
	Branch* branches, int numBranches);

#endif



