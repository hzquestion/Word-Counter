#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 1000 + 1;
	int x , count = 0;
	
	printf ( "���Ѿ����һ��1��1000�����ˡ�\n\n");
	
	do{
		scanf ( "%d", &x);
		count ++;
		if ( x > number)
		printf ( "��µ���ƫ���ˣ�\n\n");
		else if ( x < number)
		printf ( "�����û����ôС��\n\n"); 
	} while ( x != number);
	
	printf ( "��ϲ�㣡������%d�ξͲ³���%d�������\n", count, number);

	return 0;
}
