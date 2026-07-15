#include<stdio.h>
#include<stdio.h>
//they dio round off
//int main(){
//    double x = 45.55;
//    printf("%.1lf", x);
//    return 0;
//}



//Structer decleration
//struct student{
//	int id;
//	char name[20];
//	float marks;
//};

//Structer variable
//struct student s1;


//EXAMPLE:
//struct student{
//	int id;
//	char name[20];
//	float marks;
//};
//int main(){
//	struct student s1;
//	scanf("%d %s %f",&s1.id,&s1.name,&s1.marks);
//	printf("%d %s %.2f",s1.id,s1.name,s1.marks);
//}



//EXAMPLE of structre intialization
//struct employee{
//	int id;
//	char name[20];
//};
//int main(){
//	struct employee e1={101,"VED"};
//	printf("%d %s",e1.id,e1.name);
//	return 0;
//}


//Array of structeres
//struct student{
//	int id;
//	char name[20];
//};
//int main(){
//	struct student arr[2];
//	for(int i=0;i<2;i++){
//		scanf("%d %s",&arr[i].id,&arr[i].name);
//	}
//	for(int i=0;i<2;i++){
//		printf("%d %s\n",arr[i].id,arr[i].name);
//	}
//	return 0;
//}



//Structer Pointer

//struct student{
//	int id;
//	char name[20];
//};
//int main(){
//	struct student s1;
//	struct student *p=&s1;
//	scanf("%d %s",&p->id,&p->name);
//	printf("%d %s",p->id,p->name);
//	return 0;
//}


//NESTED STRUCTER
#include<stdio.h>
//struct Address{
//    char city[20];
//    int pin;
//};
//struct Student{
//    int id;
//    char name[20];
//    struct Address a1;
//};
//int main(){
//    struct Student s1 ={1,"Ved",{"Alwar",301001}};
//    printf("%d %s %s %d",s1.id,s1.name,s1.a1.city,s1.a1.pin);
//    return 0;
//}



//LECTURE 2(UNIONS)
//union declaration
//union data{
//	int id;
//	float marks;
//};


//Union BEHAVIOUR
//union data{
//	int id;
//	float marks;
//};
//int main(){
//	union data d1;
//	d1.id=10;
//	printf("%d\n",d1.id);
//	d1.marks=45.556;
//	printf("%.2f",d1.marks);
//	return 0;
//}


//the important thing about union is its last updated
//members remains valid;
//union size == largest member size
//struct test{
//	int a;
//	float b;
//	char c;
//};
//union test2{
//	int a;
//	float b;
//	char c;
//};
//
//int main(){
//	printf("%d\n",sizeof(struct test));
//	printf("%d",sizeof(union test2));
//	return 0;
//}


//part 2 basic of c++
//c is a procedural programming language but 
//c++ is a object oriented language
//c is not good for large projects become diffcult for him


//class is a blueprint for objects that contain data memebers 
//and member function


//1 creat a class
#include<iostream>
using namespace std;
//class student{
//public:
//	int id;
//	void show(){
//		cout<<"Welcome";
//	}		
//};
//int main(){
//	student s1;
//	s1.id=10;
//	cout<<s1.id<<endl;
//	s1.show();
//	return 0;
//}



//INLINE function
//function body inserted call overhead
#include<iostream>
//using namespace std;
//inline int square(int x){
//	return x*x;
//}
//int main(){
//	cout<<square(5);
//	return 0;
//}


//LECTURE 5 
//Static data memeber
//::is a scope resolution operator it tells compiler 
//that count belongs to class test
#include<iostream>
//using namespace std;
//class test{
//public:
//	static int count;
//};
//int test::count=10;
//int main(){
//	cout<<test::count;
//	return 0;
//}



//static function
#include<iostream>

//using namespace std;
//class Test{
//public:
//    static int count;
//    static void show(){
//        cout<<count;
//    }
//};
//int Test::count = 5;
//int main(){
//    Test::show();
//    return 0;
//}


//enumerate function
#include<stdio.h>
//enum day{
//	ram,
//	shyam,
//	ganga,
//	hym
//};
//int main(){
//	enum day d=hym;
//	printf("%d",d);
//	return 0;
//}


//custom value in enum
//enum status{
//	success=1,
//	failed=0
//};
//int main(){
//	enum status s=success;
//	printf("%d",s);
//	return 0;
//}


//enum with switch
//enum day{
//	sun,
//	mon,
//	tue
//};
//int main(){
//	enum day d=sun;
//	switch(d){
//		case sun:
//			printf("Sunday");
//			break;
//		case mon:
//			printf("Monday");
//			break;
//		case tue:
//			printf("Tuesday");
//			break;
//	}
//	return 0;
//}



//EXAMPLES WITH LOTS OF QUESTIONS
//union data{
//	int n;
//	int n2;
//	float flo;
//};
//int main(){
//	union data d1;
//	int n;
//	scanf("%d",&n);
//	if(n==1){
//		printf("enter an integer: ");
//		scanf("%d",&d1.n);
//		scanf("%d",&d1.n2);
//		printf("%d",d1.n);
//		printf("%d",d1.n2);
//	}else if(n==2){
//		printf("enter an float value: ");
//		scanf("%f",&d1.flo);
//		printf("%.2f",d1.flo);
//	}
//	return 0;
//}




//question 2
//union Value{
//	int marks;
//	char grade;
//};
//int main(){
//	union Value v1;
//	int n;
//	scanf("%d",&n);
//	if(n==1){
//		scanf("%d",&v1.marks);
//		if(v1.marks>=40){
//			printf("Pass");
//		}else{
//			printf("Fail");
//		}
//	}else if(n==2){
//		scanf(" %c",&v1.grade);
//		if(v1.grade=='A'){
//			printf("Excellent");
//		}else if(v1.grade=='B'){
//			printf("Good");
//		}else if(v1.grade=='C'){
//			printf("Average");
//		}
//	}
//	return 0;
//}




//questio no 1
//struct bio{
//	int id;
//	char name[20];
//	int marks;
//};
//int main(){
//	struct bio array[3];
//	for(int i=0;i<3;i++){
//		scanf("%d",&array[i].id);
//		scanf("%s",&array[i].name);
//		scanf("%d",&array[i].marks);
//	}
//	for(int i=0;i<3;i++){
//		scanf("%d",array[i].id);
//		scanf("%s",array[i].name);
//		scanf("%d",array[i].marks);
//	}
//	return 0;
//}


//question 2
//struct bio{
//	int id;
//	int marks;
//};
//int main(){
//	struct bio array[3];
//	for(int i=0;i<3;i++){
//		scanf("%d",&array[i].id);
//		scanf("%d",&array[i].marks);
//	}
//	int high=array[0].marks;
//	printf("Highest mariks is : ");
//	for(int i=1;i<3;i++){
//		if(array[i].marks>high){
//			high=array[i].marks;
//		}
//	}
//	printf("%d",high);
//	return 0;
//}


//struct pointer{
//	int id;
//	char name[20];
//	int marks;
//};
//int main(){
//	struct pointer p1={25,"Vansh",99};
//	struct pointer *pp1=&p1;
//	printf("%d %s %d",pp1->id,pp1->name,pp1->marks);
//	return 0;
//}



//important concept pass structer to a function
//struct bio{
//	int id;
//	char name[20];
//	int marks;
//};
//void print(struct bio p){
//	printf("%d %s %d",p.id,p.name,p.marks);
//}
//int main(){
//	struct bio var;
//	scanf("%d",&var.id);
//	scanf("%s",&var.name);
//	scanf("%d",&var.marks);
//	print(var);
//}



//struct bio{
//	int id;
//	char name[20];
//	int marks;
//};
//void print(struct bio *p){
//	printf("%d %s %d",p->id,p->name,p->marks);
//}
//int main(){
//	struct bio b1;
//	struct bio *pb1=&b1;
//	scanf("%d",&pb1->id);
//	scanf("%s",&pb1->name);
//	scanf("%d",&pb1->marks);
//	print(pb1);
//	return 0;
//}


//question is sort 
#include <stdio.h>
//struct Student {
//    char name[20];
//    int marks;
//};
//int main() {
//    struct Student arr[3];
//    for (int i = 0; i < 3; i++) {
//        printf("Student %d (Name and Marks): ", i + 1);
//        scanf("%s %d", arr[i].name, &arr[i].marks);
//    }
//    // Bubble sort (ascending order)
//    for (int i = 0; i < 3 - 1; i++) {
//        for (int j = 0; j < 3 - i - 1; j++) {
//            if (arr[j].marks > arr[j + 1].marks) {
//                struct Student temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    printf("\nSorted List:\n");
//    for (int i = 0; i < 3; i++) {
//        printf("%s %d\n", arr[i].name, arr[i].marks);
//    }
//    return 0;
//}

//output(A)			
//union A {
//    int x;
//    char c;
//};
//
//int main(){
//    union A a;
//    a.x = 65;
//    printf("%c", a.c);
//}


//output will come garbage
//because union see last accse data type
//in this question last acces type id float 
//but we are printing x in int 
//in this everymemeber overwrote it
//union A {
//    int x;
//    float y;
//};
//int main(){
//    union A a;
//    a.x = 10;
//    a.y = 5.5;
//    printf("%d", a.x);
//}


//output is gabage beacuse latest memeory is 1 but accordingt
//we see largest memory of union its means memory will waste;'
//union A {
//    int x;
//    char c;
//};
//
//int main(){
//    union A a;
//    a.c = 'B';
//    printf("%d", a.x);
//}
//

//union A {
//    int x;
//    char c;
//};
//
//int main(){
//    union A a;
//    a.x = 66;
//    a.c = 'A';
//    printf("%d", a.x);
//}
//Both share the same memory Only 1 byte is updated.
//Only 1 byte is updated.





#include<stdio.h>

#include<stdio.h>

//union student
//{
//    int id;
//    float marks;
//};
//int main()
//{
//    union student s;
//    s.id = 101;
//    s.marks = 89.5;
//    printf("Marks = %.2f\n",s.id);
//    return 0;
//}

#include<stdio.h>

//union test
//{
//    int a;
//    char b;
//};
//
//int main()
//{
//    union test t;
//
//    t.a = 97;
//
//    printf("%d\n",t.a);
//
//    t.b = 'A';
//
//    printf("%c\n",t.b);
//
//    printf("%d\n",t.a);
//
//    return 0;
//}



//struct employee{
//	char name[50];
//	double salary;
//	int hours;
//};
//int main(){
//	struct employee e;
//	struct employee *pe=&e;
//	scanf("%s",&pe->name);
//	scanf("%lf",&pe->salary);
//	scanf("%d",&pe->hours);
//	if(pe->hours>=12){
//		pe->salary+=150.00;
//	}else if(pe->hours>=10){
//		pe->salary+=100.00;
//	}else if((pe->hours)>=8){
//		pe->salary+=50.00;
//	}else{
//		pe->salary+=0.00;
//	}
//	double res=(pe->salary)*30;
//	printf("%.2lf",res);
//	return 0;
//}


//same without pointer
//struct employee{
//	char name[50];
//	double salary;
//	int hours;
//};
//int main(){
//	struct employee e;
//	scanf("%s",&e.name);
//	scanf("%lf",&e.salary);
//	scanf("%d",&e.hours);
//	if(e.hours>=12){
//		e.salary+=150.00;
//	}else if(e.hours>=10){
//		e.salary+=100.00;
//	}else if((e.hours)>=8){
//		e.salary+=50.00;
//	}else{
//		e.salary+=0.00;
//	}
//	double res=(e.salary)*30;
//	printf("%.2lf",res);
//	return 0;
//}








//struct weather{
//	double temp;
//	double pre;
//};
//int main(){
//	struct weather w1,w2;
//	scanf("%lf",&w1.temp);
//	scanf("%lf",&w1.pre);
//	scanf("%lf",&w2.temp);
//	scanf("%lf",&w2.pre);
//	double avgt=(w1.temp+w2.temp)/2.0;
//	double avgp=(w1.pre+w2.pre)/2.0;
//	printf("%.2lf degree celsius\n",avgt);
//	printf("%.2lf mm\n",avgp);
//	if(avgt>=25.0 && avgp<10.0){
//		printf("Sunny");
//	}else if(avgp>=10.0){
//		printf("Rainy");
//	}else{
//		printf("Cloudy");
//	}
//	return 0;
//}






//but in case of union

//struct numbers{
//	int num1;
//	int num2;
//};    
//void swap(struct numbers *n){
//	int temp=n->num1;
//	n->num1=n->num2;
//	n->num2=temp;
//}
//int main(){
//	struct numbers n;
//	scanf("%d %d",&n.num1,&n.num2);
//	printf("Original value: %d %d\n",n.num1,n.num2);
//	swap(&n);
//	printf("swapped value: %d %d\n",n.num1,n.num2);
//}


//struct numbers{
//	int num1;
//	int num2;
//};    
//void swap(struct numbers n){
//	int temp=n.num1;
//	n.num1=n.num2;
//	n.num2=temp;
//}
//int main(){
//	struct numbers n;
//	scanf("%d %d",&n.num1,&n.num2);
//	printf("Original value: %d %d\n",n.num1,n.num2);
//	swap(n);
//	printf("swapped value: %d %d\n",n.num1,n.num2);
//}


//int main(){
//	int day;
//	scanf("%d",&day);
//	switch(day){
//		case 1:
//			printf("Mon");
//			break;
//		case 2:
//			printf("tue");
//			break;
//		case 3:
//			printf("wed");
//			break;
//		case 4:
//			printf("thu");
//			break;
//		case 5:
//			printf("fri");
//			break;
//		case 6:
//			printf("sat");
//			break;
//		case 7:
//			printf("Mon");
//			break;
//		default:
//			printf("Nothing else!");
//	}
//	return 0;
//}



#include<stdio.h>

union WeatherForecast
{
    float temperature;
    float precipitation;
};

//int main()
//{
//    float t1, p1, t2, p2;
//    scanf("%f %f", &t1, &p1);
//    scanf("%f %f", &t2, &p2);
//    float avgTemp = (t1 + t2) / 2.0;
//    float avgPrecipitation = (p1 + p2) / 2.0;
//    printf("%.2f degree celsius\n", avgTemp);
//    printf("%.2f mm\n", avgPrecipitation);
//    if(avgTemp >= 25 && avgPrecipitation < 10)
//    {
//        printf("Sunny");
//    }
//    else if(avgPrecipitation >= 10)
//    {
//        printf("Rainy");
//    }
//    else
//    {
//        printf("Cloudy");
//    }
//    return 0;
//}

#include<stdio.h>
//
//union test
//{
//    int a;
//    char b;
//};
//
//int main()
//{
//    union test t;
//
//    int i;
//
//    printf("Enter integer value: ");
//    scanf("%d",&t.a);
//
//    if(t.a > 0)
//    {
//        printf("Positive Number\n");
//    }
//    else if(t.a < 0)
//    {
//        printf("Negative Number\n");
//    }
//    else
//    {
//        printf("Zero\n");
//    }
//
//    t.b = 'A';
//
//    printf("\nCharacter = %c\n\n",t.b);
//
//    for(i=1; i<=3; i++)
//    {
//        printf("%c ",t.b);
//    }
//
//    return 0;
//}


