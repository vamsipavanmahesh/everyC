#include<stdio.h>
#include<stdlib.h>

int main(){
	int a = 10;
	int *p;
	p = &a;
	printf("%d",*p);
	printf("address of p is \n");
	printf("%d\n",p);
	printf("address at p+1 is %d",p+1);
	printf("value at p+1 is%d\n",*(p+1));
	
	
	
	return 0;
}
