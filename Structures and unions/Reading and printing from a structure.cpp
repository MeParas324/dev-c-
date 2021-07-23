#include<stdio.h>
struct student_info
{
		int roll_num;
		char name[50];
		float height;
		char gender[5];
};



int main()
{


	struct student_info student;
    printf("enter student data\n");
    scanf("%d%s%f %s",&student.roll_num,student.name,&student.height,&student.gender);
    
    printf("student data is......\n");
    printf("Roll no is %d\n Name is %s\n Height is %f inch\n Gender is %s \n",student.roll_num,student.name,student.height,student.gender);
    
    return 0;
    
}
