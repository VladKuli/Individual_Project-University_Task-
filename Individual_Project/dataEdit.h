#pragma once
#ifndef DATAEDIT_H
#define DATAEDIT_H

#include "Client.h"
#include "Employee.h"
#include "Account.h"
#include "Transaction.h"
#include "Branch.h"

void editClient(Client& client);
void editEmployee(Employee& employee);
void editAccount(Account& account);
void editTransaction(Transaction& transaction);
void editBranch(Branch& branch);
#endif
