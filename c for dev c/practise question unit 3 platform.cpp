#include<stdio.h>
//tell about call value by reference
int swap(int *a, int *b){
	int temp= *a;
	*a =*b;
	*b=temp;
	printf("swaping value of a = %d and b = %d .",*a,*b);
}
int main(){
	int a,b;
	a=10;
	b=9;
	swap(&a,&b);
	printf("End of the program.");
	return 0;
}

