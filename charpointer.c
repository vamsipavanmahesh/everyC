#include<stdio.h>
int main(){
	int a = 1025;
	int *p;
	p = &a;
	char *p1;
	p1 = (char*)p;
	printf("The value of cp is %d",*p1);
	
	
	
	
	return 0;
}
