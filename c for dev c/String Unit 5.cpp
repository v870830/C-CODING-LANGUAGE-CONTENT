#include<stdio.h>
#include<string.h>
//complete lecture about the string  in c language 
//Decler a string;
//int main(){
//	char str1[10];
//	char str2[]="Hello";
//	char str3[6]="Hello";
//	printf("Str1: %.2s",str1);
//	printf("Str2: %.3s",str2);
//	printf("Str3: %s",str3);
//}

//using get we also get complete string
//int main(){
//	char str1[20];
//	gets(str1);
//	printf("%s",str1);
//	return 0;
//}


//Using Scanf:
//int main(){
//	char name[50];
//	scanf("%s",name);//it will take first word only vansh agga only vansh not agg
//	printf("Name : %s",name);
//}




//Using fgets best method
//int main(){
//	char name[50];
//	fgets(name,50,stdin);//Best way to get complete string
//	printf("Name: %s",name);
//}



//MultiValued String[2d array]
//ex={'Vansh','agg','sahil'};

//int main(){
//	char name[3][50];
//	//here 3 respersent number of string and 50 repersent sizeof each
//	for(int i=0;i<3;i++){
//		printf("Enter name %d: ",i+1);
//		fgets(name[i],50,stdin);
//	}
//	for(int i=0;i<3;i++){
//		printf("%.2s",name[i]);
//	}
//}



//Method 2 (Using an array)
//int main(){
//	char *name[]={"Vansh","Rahul","Amit"};
//	for(int i=0;i<3;i++){
//		printf("name: %s\n",name[i]);
//	}
//	return 0;
//}


//Way to get a string character
//int main(){
//	char names[3][50]={"Vansh","Rahul","Amit"};
//	for(int i=0;i<3;i++){
//		printf("%c\n",names[i][3]);
//	}
//	return 0;
//}


//using pointer get a charcter
//int main() {
//    char *names[] = {"Vansh","Rahul","Amit"};
//    for(int i = 0; i < 3; i++) {
//        printf("%c\n", names[i][3]);
//}
//    return 0;
//}



//Topic 5 : Access Charcter of string
//int main(){
//	char str[]="Hello";
//	printf("%c",str[0]);
//	printf("%c",str[1]);
//}

//in loop form
//int main(){
//	char str[]="Hello";
//	for(int i=0;str[i]!='\0';i++){
//		printf("%c ",str[i]);
//	}
//	return 0;
//}


//TOPIC 6 String Length
#include<string.h>
//int main(){
//    char str[50]="Hello"; 
//	printf("%lu",strlen(str));
//}

//Manually
//int main(){
//	int len=0;
//	char str[30]="LALAL";
//	while(str[len]!='\0'){
//		len++;
//	}
//	printf("%d",len);
//}



//TOPIC 7
//String Copy
#include<string.h>
//int main(){
//	char a[20]="Hello";
//	char b[20];
//	strcpy(b,a);
//	printf("%s",b); //Copied String
//	return 0;
//}



//TOPIC 8 COnatinate String
#include<string.h>
//int main(){
//	char a[20]="Hello";
//	char b[]="World";
//	strcat(a,b);
//	printf("%s",a);
//}


//strncat used how many string character we wnat tp connect
//int main(){
//	char str1[20]="hello";
////	gets(str1);
//	char str2[20]="cagnjuj";
////	gets(str2);
//	int n;
//	scanf("%d",&n);
//	strncat(str1,str2,n);
//	printf("%s",str1);
//	printf("\n%s",str2);
//}



//TOpic 9 String COMPare
#include<string.h>
//here this are some symbol 
//1) == 0 means "Equal", 2) >0 means "smaller" 3) <0 "Grearter";
//IT compare chareter ascii if first char - second char positive then >0 negative then <0 and ==0 
//int main(){
//	char str1[50]="abcd";
//	char str2[50]="lac";
//	if(strcmp(str2,str1)==0){
//		printf("LALAL");	
//	}else{
//		printf("PAP");
//	}
//}




//int main(){
//	char str1[20],str2[10];
//	int x;
//	printf("\nEnter first string");
//	gets(str1);
//	printf("\n Enter second string");
//	gets(str2);
//	x=strcmp(str1,str2);
//	if(x==0){
//		printf("\n String are equal");
//	}
//	else if(x>0){
//		printf("\n First string is greater than second string(strings are no0t equal)");
//	}else{
//		printf("\n First String is less than second string(strings are not equal)");
//	}
//	return 0;
//}



//TOPIC 10 String REVERSE
#include<string.h>
//int main(){
//	char str[80]="Hello";
//	int len=strlen(str);
//	for(int i=len-1;i>=0;i--){
//		printf("%c",str[i]);
//	}
//}


//TOPic 11 CONVERTY CASe
#include<ctype.h>
//int main(){
//	char ch='a';
//	printf("%c",toupper(ch));
//	return 0;
//}


//TOPIC TO FOUND CHARCTER POSITION
#include <string.h>
//int main() {
//    char str[] = "Vansh";
//    char *ptr = strchr(str, 's');
//    if(ptr != NULL) {
//        printf("Found at position: %ld", ptr - str);
////	 here ptr-str its means ptr ptr storing address of s where is it 
////	 and str starting addres
//    }
//    return 0;
//}



//Questions With Examples

//Q1  Write a C program to check whether a given string is a palindrome or not.

//char str[80]="Hello";
//	int len=strlen(str);
//	for(int i=len-1;i>=0;i--){
//		printf("%c",str[i]);
//	}



//copy n number of string to other string
//Lecture numbere 5
//int main(){
//	char str1[15],str2[15];
//	int n;
//	printf("\nEnter Source string:");
//	gets(str1);
//	printf("\nEnter Destination string");
//	gets(str2);
//	printf("Enter number of charcters to replace in destination string: ");
//	scanf("%d",&n);
//	strncpy(str2,str1,n);
//	printf("Source string is:%s",str1);
//	printf("\nDestination String is :%s",str2);
//	return 0;
//}


#include<stdlib.h>
//int main(){double d;
//	d=atof("99.23");
//	printf("%.2lf",d);
//	return 0;
//}

//int main(){
//	char x[]="99";
//	int i;
//	i=atoi(x);
//	printf("%d",i);
//	return 0;
//}

//int main(){
//	long int i;
//	char x[]="10000000";
//	i=atol(x);
//	printf("%ld",i);
//	return 0;
//}	
	
//convert a string  into binary,octal,hexa	
//int main(){
//	int a=123;
//	char str[100];
//	itoa(a,str,2);
//	printf("\nBinary Value:%s",str);
//	itoa(a,str,10)
//	printf("\n Decimal value:%s",str);
//	itoa(a,str,16);
//	printf("\n Octal Value:%s",str);
//	return 0;
//}

//void ftoa1(float f1,char s[]){
//	sprintf(s,"%f",f1);
//}
//int main(){
//	char str[20];
//	float f=12.340000;
//	ftoa1(f,str);
//	printf("\n%s",str);
//	return 0;
//}













