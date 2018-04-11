#include <stdio.h>

int main(void)
{
	int w;
	int t;
	int s;
	
	
	printf("시간당 임금:");
	scanf_s("%d", &w);
	printf("작업시간:");
    scanf_s("%d", &t);

	s = w * t;
	printf("시간당 임금은 %d \n", w);
	printf("작업시간은 %d \n", t);
	printf("s는 %d \n", s);

	return 0;
}