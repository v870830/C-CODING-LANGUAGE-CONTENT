#include<stdio.h>
//here if we not used auto then its also save on auto it is bydefault
//void func1(){
//	auto int a=10;//local variable of func1()
//	printf("\n a=%d",a);
//}
//void func2(){
//	auto int a=20;//local variable of func2()
//	printf("\n a=%d",a);
//}
//int main(){
//	auto int a=30;//local variaable of main()
//	func1();
//	func2();
//	printf("\n a=%d",a);
//	return 0;
//}





//program example of static storage class
//in this case the where we are using the static on that place updated value will be enter
//void function();
//int main(){
//	function();
//	function();
//	function();
//	return 0;
//}
//void function(){
//	int a=10;
//	static int b=10;
//	printf("\n value of a: %d,value of b: %d",a,b);
//	a++;
//	b++;
//}




//program example of extern storage class
//here in case of mextern if you will put its value anywhere it will fetch value from there 
//and its alow updated value unless value update anywhere
//it will fetch the updated value
//void first();
//int main(){
//	extern int x;
//	printf("\n x=%d",x);
//	first();
//	printf("\nx=%d",x);
//	return 0;
//}
//void first(){
//	extern int x;
//	printf("\n x=%d",x);
//	x=x+10;
//}
//int x=10;





























