#include <stdio.h>
#include <string.h>

typedef struct company
{
    char name[50];
    int id;
    float salary;
}employee;

int main()
{
    employee emp1, emp2;

    printf("Enter details of employee 1:\n");
    printf("Name: ");
    fgets(emp1.name, sizeof(emp1.name), stdin);
    printf("ID: ");
    scanf("%d", &emp1.id);
    printf("Salary: ");
    scanf("%f", &emp1.salary);
    getchar();
    
    printf("\nEnter details of employee 2:\n");
    printf("Name: ");
    fgets(emp2.name, sizeof(emp2.name), stdin);
    printf("\nID: ");
    scanf("%d", &emp2.id);
    printf("Salary: ");
    scanf("%f", &emp2.salary);

    printf("\n");
    printf ("Before modification :");
    printf("\nEmployee 1:\n");
    printf("Name: %s", emp1.name);
    printf("ID: %d \n", emp1.id);
    printf("Salary: %.2f \n", emp1.salary);

    printf("\nEmployee 2:\n");
    printf("Name: %s", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n", emp2.salary);
    
    
    strcpy(emp1.name, "Aya");
    emp2.salary = 5000;
    printf("\n");
    printf ("After modification :");

    printf("\nEmployee 1:\n");
    printf("Name: %s \n", emp1.name);
    printf("ID: %d \n", emp1.id);
    printf("Salary: %.2f \n", emp1.salary);

    printf("\nEmployee 2:\n");
    printf("Name: %s", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n", emp2.salary);

    return 0;
}
