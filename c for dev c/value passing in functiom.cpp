#include<stdio.h>
//pass by value
//void increment(int a){
//	int inc=++a;
//	printf("the increment of %d is: %d",a,inc);
//}
//int main(){
//	int a;
//	scanf("%d",&a);
//	increment(a);
//	return 0;
//}


void incrementbyref(int *num){
	(*num)++;
	printf("inside function: %d\n",*num);
}
int main(){
	int value =5;
	incrementbyref(&value);
	printf("outside function:%d\n",value);
	return 0;
}





