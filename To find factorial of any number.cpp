#include<stdio.h>
int main()
{
	
	int n,i,f=1;
	printf("Enter any number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		f=f*i,"%d";
	}
	printf("\n %d!=%d",n,f);
	
  return 0;
}
