#include "Member.h"

void menu();
void menuSelect(int select);

void main()
{
	initArray();
	menu();

}

//메뉴 출력
void menu()
{
	int select;
	
	while (1){
		printf("*******회원 관리 프로그램*******\n\n");
		printf("1. 회원 가입\n");
		printf("2. 로그인\n");
		printf("3. 회원 검색\n");
		printf("4. 전체 회원 보기\n");
		printf("5. 회원 탈퇴\n");
		printf("항목 선택 : ");

		scanf_s("%d", &select);

		menuSelect(select);
	}
}

//각 메뉴 기능 선택
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

//에러 메시지 출력
void ErrorMessage(int iResultValue)
{
	if (iResultValue){
		printf("정상적인 처리가 아닙니다.\n\n");
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
			printf("1. 회원번호 : %d\n", i);
			printf("2. ID : %s\n", g_member[i].id);
			//printf("3. Password(encrypted) : %s\n", );
			printf("4. Password(decrypted) : %s\n", g_member[i].password);
			printf("5. 이름 : %s\n", g_member[i].name);
			printf("\n\n");
			cnt++;
		}
	}

	if (0 == cnt)	printf("\n등록된 회원이 없습니다.\n");
	else			printf("총 회원 수 : %d\n", cnt);

	return 0;
}

int SignOut()
{
	printf("SignOut\n");
	return 0;
}