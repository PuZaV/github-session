#include<stdio.h>
int main()
{
	int ans;
	int a,b,sum=0;
	printf("choose a program\n");
	printf("1.sum of two numbers\n");
	printf("2.count to 10\n");
	printf("answer;\n");
	scanf("%d", &ans);
	switch(ans)
	{
		case 1:
        a=5;
        b=2;
        sum=a+b;
        printf("sum of the two numbers is %d\n",sum);
		break;
		case 2:
	   for(int i=1;i<=10;i++)
       {
	      printf("%d\n",i);
       }
       break;
	   default :
	   printf("invalid input\n");
	   	
	}
    return 0;
}
