#include<stdio.h>
#include<string.h>
struct Student                           //structure definituon with three fields
{
	int roll_no;
	char name[15];
	int age;
};
void insert_record(struct Student *s2)       //funtion to add values to the member data
{
	(*s2).roll_no=10;
		strcpy(s2->name,"Harish_Prasad");
			(*s2).age=20;
	
}
int main()
{
	struct Student s1;   //structure declaration
	insert_record(&s1);            //call by address
	printf("Roll number is %d\n",s1.roll_no);
	printf("Name of the student is %s\n",s1.name);
	printf("Age is %d\n",s1.age);
	
	
	
	return 0;
}
