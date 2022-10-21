#include<stdio.h>
int main(){
	int num,i,j;
	printf("enter the value of num");
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
	 printf("x");
        }
        printf("\n");
    }
	return 0;
}
