#include<stdio.h>
#include<string.h>
typedef struct Student {
	char name[10];
	char stu_id[15];
	int age;
	char sex[5];
}student;
student* find_id(char id[], student stus[], int num)
{
	for (int i = 0; i < num; i++)
	{
		if (strcmp(id, stus->stu_id) == 1)
			return &stus[i];
	}
	return NULL;
}


