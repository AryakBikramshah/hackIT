#include<stdio.h>
struct student 
{
	char name[20];
	int roll;
	float marks;
	char remarks;
};
int main()
{
	struct student s[15];
	int i;
	printf("%d\n",sizeof(struct student));
	float temp;
	for( i=0;i<5;i++)
	{
		printf("enter information about student%d",i+1);
		printf("Name : \t");
		scanf("%s", s[i].name);
		printf("roll:\t");
		scanf("%d", &s[i].roll);
		printf("\nmarks:\t");
		scanf("%f",&s[i].marks);
		printf("\nremarks(p/f):\t");
		s[i].remarks=getche();
	}
	printf("\n");
	printf("\nstudent name\troll\tmarks\t\tremarks");
	for(i=0;i<5;i++)
	{
		printf("\n%s\t\t %d\t%f\t%c\n",s[i].name, s[i].roll, s[i].marks, s[i].remarks);
		
	}
	
	return 0;
}
