#include<stdio.h>
#include<string.h>
struct Student
{
	int roll_no;
	char name[15];
	int age;
};
void insert_record(struct Student *s2)
{
	(*s2).roll_no=10;
		strcpy(s2->name,"Harish_Prasad");
			(*s2).age=20;
	
}
int main()
{
	struct Student s1;
	insert_record(&s1);
	printf("Roll number is %d\n",s1.roll_no);
	printf("Name of the student is %s\n",s1.name);
	printf("Age is %d\n",s1.age);
	
	
	
	return 0;
}
