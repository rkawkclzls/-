#include <stdio.h>

int main(void)
{
	double 몸무게;
	double 키;

	printf("몸무게를 입력하세요:");
	scanf_s("%lf", &몸무게);
	printf("키를 입력하세요:");
	scanf_s("%lf", &키);
	printf("당신의 bmi는:%lf 입니다.\n", 몸무게 / 키);


	return 0;
}