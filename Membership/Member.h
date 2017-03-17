#ifndef MEMBER_H
#define MEMBER_H

#include <stdio.h>

#define ID_LENGTH 100
#define PW_LENGTH 100
#define NAME_LENGTH 100
#define MAX_MEMBER 100

typedef struct _member{
	bool isMember;
	char id[ID_LENGTH];
	char password[PW_LENGTH];
	char name[NAME_LENGTH];
} Member;

Member g_member[MAX_MEMBER];

void initArray();
int SignIn();
int LogIn();
int SearchMember();
int ViewAllMembers();
int SignOut();
void ErrorMessage(int iResultValue);

#endif