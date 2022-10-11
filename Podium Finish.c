#include <stdio.h>

int main(void) {
	// your code goes here
	int cases,a,b,i;
	scanf("%d" , &cases);
    for(i=0; i<cases; i++)
    {
        scanf("%d%d" , &a,&b);
        printf("%d\n" , (a+b));
    }
	return 0;
}
