#include<stdio.h>


struct student
{
    char name[50];
    int roll_no;
};

int main()
{
    struct student s[2];
    for(int i = 0; i < 2; i++ )
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Enter name:");
        scanf("%s", s[i].name);

        printf("Enter Roll No:");
        scanf("%d", &s[i].roll_no);

        printf("\n");
    }

    for(int i = 0; i < 2; i++ ) {
        printf("Name: %s\n", s[i].name);
        printf("Roll No: %d\n", s[i].roll_no);
    }


    return 0;
}
