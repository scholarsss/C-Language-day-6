#include<stdio.h>
struct stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct stu s1={"ÕÅÈı",10,"20220703"};
	struct stu *pa=&s1;
	printf("%s\n",(*pa).name);
	int a=5;
	int *pb=&a;
	printf("%d\n",*pb);
	return 0;
}
