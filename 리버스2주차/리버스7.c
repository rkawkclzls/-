#include <stdio.h>

int main(void)
{
	int w;
	int t;
	int s;
	
	
	printf("�ð��� �ӱ�:");
	scanf_s("%d", &w);
	printf("�۾��ð�:");
    scanf_s("%d", &t);

	s = w * t;
	printf("�ð��� �ӱ��� %d \n", w);
	printf("�۾��ð��� %d \n", t);
	printf("s�� %d \n", s);

	return 0;
}