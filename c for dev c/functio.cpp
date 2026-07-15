#include<stdio.h>
void add(int a,int b);
int main(){
	int result=add();
	printf("%d",result);
	return 0;
}
int add(){
	int a,b;
	scanf("%d\n",a);
	scanf("%d\n",b);
	int add=a+b;
	printf("the value of add is : %d",add);
}

