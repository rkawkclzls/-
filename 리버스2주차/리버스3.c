#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("★★★★사각형 넓이 구하기★★★★\n");
	printf("너비 입력:");
	scanf_s("%d", &x);
	printf("높이 입력:");
	scanf_s("%d", &y);
	printf("넓이=%d \n", x*y);

	system("pause");
}