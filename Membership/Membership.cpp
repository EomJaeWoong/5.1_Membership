#include "Member.h"

void menu();
void menuSelect(int select);

void main()
{
	initArray();
	menu();

}

//�޴� ���
void menu()
{
	int select;
	
	while (1){
		printf("*******ȸ�� ���� ���α׷�*******\n\n");
		printf("1. ȸ�� ����\n");
		printf("2. �α���\n");
		printf("3. ȸ�� �˻�\n");
		printf("4. ��ü ȸ�� ����\n");
		printf("5. ȸ�� Ż��\n");
		printf("�׸� ���� : ");

		scanf_s("%d", &select);

		menuSelect(select);
	}
}

//�� �޴� ��� ����
void menuSelect(int select)
{
	switch (select){
	case 1 :
		ErrorMessage(SignIn());
		break;
	case 2 :
		ErrorMessage(LogIn());
		break;
	case 3 :
		ErrorMessage(SearchMember());
		break;
	case 4 :
		ErrorMessage(ViewAllMembers());
		break;
	case 5 :
		ErrorMessage(SignOut());
		break;
	default :
		ErrorMessage(-1);
		break;
	}
}

//���� �޽��� ���
void ErrorMessage(int iResultValue)
{
	if (iResultValue){
		printf("�������� ó���� �ƴմϴ�.\n\n");
	}
}

void initArray(){
	int i;
	for (i = 0; i < MAX_MEMBER; i++){
		g_member[i].isMember = false;
		*g_member[i].id = '\0';
		*g_member[i].password = '\0';
		*g_member[i].name = '\0';
	}
}

int SignIn()
{
	printf("SignIn\n");
	return 0;
}

int LogIn()
{
	printf("LogIn\n");
	return 0;
}

int SearchMember()
{
	printf("SearchMember\n");
	return 0;
}

int ViewAllMembers()
{
	int i;
	int cnt = 0;

	for (i = 0; i < MAX_MEMBER; i++){
		if (true == g_member[i].isMember){
			printf("\n");
			printf("1. ȸ����ȣ : %d\n", i);
			printf("2. ID : %s\n", g_member[i].id);
			//printf("3. Password(encrypted) : %s\n", );
			printf("4. Password(decrypted) : %s\n", g_member[i].password);
			printf("5. �̸� : %s\n", g_member[i].name);
			printf("\n\n");
			cnt++;
		}
	}

	if (0 == cnt)	printf("\n��ϵ� ȸ���� �����ϴ�.\n");
	else			printf("�� ȸ�� �� : %d\n", cnt);

	return 0;
}

int SignOut()
{
	printf("SignOut\n");
	return 0;
}