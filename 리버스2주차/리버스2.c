#include <stdio.h>

int main(void)
{  
	int x;
	int y;
	
	printf("�ڡڡڡڻﰢ�� ���� ���ϱ�ڡڡڡ�\n");
	printf("�ʺ� �Է�:");
	scanf_s("%d", &x);
	printf("���� �Է�:");
	scanf_s("%d", &y);
	printf("����=%d", (x*y) / 2);
	    
	return 0;
}