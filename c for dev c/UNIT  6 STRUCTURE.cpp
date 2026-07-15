#include<stdio.h>
//\LECTURE 1
//one way:  here e1 ,e2 are used to access the value stored in the structire
//struct employee{
//	int id;
//	char name[50];
//	float salary;
//};
//int main(){
//	struct employee e1,e2;
//	return 0;
//}


//2ndd way:
//struct employee{
//	int id;
//	char name[50];
//	float salary;
//}e1,e2;


//LECTURE 2(Accessing Structure Member
//we used . operatore to access object in members

//int main(){
//	struct person{
//		char name[50];
//		int age;
//		float height;
//	};
//	struct person person1={"John Doe",25,1.75};
//	printf("Name: %s\n",person1.name);
//	printf("Age: %d\n",person1.age);
//	printf("Height: %.2f meters\n",person1.height);
//	struct person person2={"Vansh",12,1.5};
//	printf("Name: %s\n",person2.name);
//	printf("Age: %d\n",person2.age);
//	printf("Height: %.2f meters\n",person2.height);
//	return 0;
//}



//2nd Lecture
//C structure and pointers
//struct student{
//	char name[50];
//	int age;
//};
//int main(){
//	struct student s1={"Alice",20};
//	struct student *ps1;
//	ps1=&s1;
//	printf("Student Name: %s\n",(*ps1).name);
//	printf("Student age: %d\n",(*ps1).age);
//	return 0;
//}


//ex2: Method of ->(Known as indirection Operartor)
//struct book{
//	char title[100];
//	char author[50];
//	int pages;
//};
//int main(){
//	struct book b1={"The Great","Scott",180};
//	struct book *pb1;
//	pb1=&b1;
//	printf("Tittle: %s\n",pb1->title);
//	printf("Tittle: %s\n",pb1->author);
//	printf("Tittle: %d\n",pb1->pages);
//}
	
	
//Nested Structure in c
//two wayus in nested structure 1)by separate structurte
//struct date{
//	int dd;
//	int mm;
//	int yyyy;
//};
//struct Employee{
//	int id;
//	char name[20];
//	struct Date doj;
//}emp1;


//ex1:
//#include<string.h>
//struct student{
//	int rollnum;
//	char name[30];
//	struct enroll{
//		char course[50];
//		int year;
//	}enrollment;
//}student1;
//int main(){
//	s1.rollnum=501;
//	strcpy(s1.name,"Emma");
//	strcpy(s1.enroll,"Emma");
//}
//Embeddede Structure
//struct employee{
//	int id;
//	char name[20];
//	struct Date{
//		int dd;
//		int mm;
//		int yyyy;
//	}doj;
//}emp1;




//Lecture 3(UNIOUN AND MACROS)#
//#1unioins

//union car{            
//	char name[50];
//	int price;
//};
//int main(){
//	union car car1,car2;
//	return 0;
//}


//EXample
union myunion{
	int intvalue;
	float floatvalue;
	char stringvalue[20];
};
int main(){
	union myunion myvar
}












