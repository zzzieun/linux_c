#include <stdio.h>

int main(void)
{
	int num;
	printf("input num");
	scanf("%d",&num);
	
	int result;
	
	if (num >= 0)
	{
		result = num;
	}
	else
	{
		result = num * -1;
		//result = -num;
	}
	
	printf("absolute Value : %d\n",result);

	return 0;
}
