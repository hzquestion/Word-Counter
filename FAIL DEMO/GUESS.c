#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand() % 1000 + 1;
	int x , count = 0;
	
	printf ( "我已经想好一个1到1000的数了。\n\n");
	
	do{
		scanf ( "%d", &x);
		count ++;
		if ( x > number)
		printf ( "你猜的数偏大了！\n\n");
		else if ( x < number)
		printf ( "这个数没有那么小！\n\n"); 
	} while ( x != number);
	
	printf ( "恭喜你！你用了%d次就猜出了%d这个数！\n", count, number);

	return 0;
}
