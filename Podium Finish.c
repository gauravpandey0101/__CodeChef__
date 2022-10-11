#include <stdio.h>
int main()
{
	int cases,a,b,i;
	scanf("%d" , &cases);
        for(i=0; i<cases; i++)
        {
        	scanf("%d%d" , &a,&b);
        	printf("%d\n" , (a+b));
    	}
	return 0;
}
