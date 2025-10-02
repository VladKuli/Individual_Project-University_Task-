#pragma once
#ifndef DATACALC_H
#define DATACALC_H

#include "Client.h"
#include "Employee.h"
#include "Branch.h"

int calculateTotalClients(Client* clients, int numClients);

int calculateTotalEmployees(Employee* employees, int numEmployees);

int calculateTotalBranches(Branch* branches, int numBranches);

#endif