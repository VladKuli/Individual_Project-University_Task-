#pragma once
#ifndef DATAVIEW_H
#define DATAVIEW_H

#include "Client.h"
#include "Employee.h"
#include "Account.h"
#include "Transaction.h"
#include "Branch.h"

void viewClient(const Client& client);
	
void viewEmployee(const Employee& employee);

void viewAccount(const Account& account);

void viewTransaction(const Transaction& transaction);

void viewBranch(const Branch& branch);

#endif

