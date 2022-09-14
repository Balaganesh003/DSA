#include <stdio.h>
#include <stdlib.h>

struct person {
    int age;
    char name[30];
};

int main()
{
    struct person person1, *ptr;
    ptr = &person1;
    int i, n;

    printf("Enter the number of persons:");
    scanf("%d", &n);

    // allocating memory for n numbers of struct person
    ptr = (struct person*) malloc(n * sizeof(struct person));

    for(i = 0; i < n; ++i)
    {
        printf("Enter first name and age respectively:");
        scanf("%s %d", (ptr+i)->name, &(ptr+i)->age);
    }

    printf("Displaying Information:\n");
    for(i = 0; i < n; ++i)
        printf("Name: %s \nAge: %d", (ptr+i)->name, (ptr+i)->age);

    return 0;
}
