/*************************************************************************
	> File Name: memcpy.cpp
	> Author: Pansj 
	> Mail: perry2008084@gmail.com 
	> Created Time: Wed 05 Mar 2014 10:49:45 PM UTC
 ************************************************************************/
#include<cstdio>
#include<cstring>

struct {
	char name[40];
	int age;
} person, person_copy;

int main()
{
	char myname[] = "Pierre de Fermat";

	memcpy( person.name, myname, strlen(myname)+1);
	person.age = 46;

	memcpy( &person_copy, &person, sizeof(person));

	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);

	return 0;
}

