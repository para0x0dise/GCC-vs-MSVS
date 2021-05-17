#include <stdio.h>



int main(int argc, char const* argv[])
{
	int age = 25;
	char name[15];

	printf("Name:");
	scanf("%[^\n]", name);


	printf("\n%s\t\t%d", name, age);

	return 0;
}