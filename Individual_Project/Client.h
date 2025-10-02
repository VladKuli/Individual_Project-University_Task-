#pragma once
#ifndef CLIENT_H
#define CLIENT_H

enum ClientType { INDIVIDUAL, COMPANY };
enum ClienLevel { REGULAR, PREMIUM, VIP };

struct Client {
	long id;
	long accountId;
	char name[50];
	char address[100];
	char phone[15];
	char email[50];
};
#endif