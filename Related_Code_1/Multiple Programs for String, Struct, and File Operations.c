#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


typedef struct company
{
    char name[50];
    int id;
    float salary;
}employee;

typedef struct bank {
    int account_no;
    char name[50];
    float balance;
}Customer;


// program 1
int program_1 ();
// program 2 
int program_2 ();
//program 3
int program_3 ();
// program 4
int program_4 ();
// program 5
int program_5 ();
void print_customer(Customer *customer);
// program 6
int program_6 ();


// main
int main ()
{
    program_1 ();
    program_2 ();
    program_3 ();
    program_4 ();
    program_5 ();
    program_6 ();
}


// program 1
int program_1 ()
{
    printf ("program 1 : \n");
    printf ("This program finds the number of times a given word 'the' appears in a given input string \n");
    char arr[200];
    char arr_lower [200];
    int counter = 0;
    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] ;i++)
    {
        arr_lower[i] = tolower(arr[i]);
    }

    for (int i = 0; i < strlen(arr_lower); i++)
    {
        if (arr_lower[i] == 't' && arr_lower[i + 1] == 'h' && arr_lower[i + 2] == 'e')
        {
            counter++;
        }
    }

    printf("The word \"the\" repeated %d times", counter);

    return 0;
}

// program 2
int program_2 ()
{
    printf ("program 2 : \n");
    printf ("It eliminates/removes the first character of each word in a string of words\n");
    char arr[200];
    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; i < strlen(arr); i++)
    {
        if (i == 0 || arr[i - 1] == ' ')
        {
            continue;
        }
        else
        {
            printf("%c", arr[i]);
        }
    }

    return 0;
}
// program 3
int program_3 ()
{
    printf ("program 3 : \n");
    printf ("It counts the vowel (a,i,o,u,e) characters in an input string\n");

    char arr[200];
    char arr_lower [200];
    int counter = 0;
    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] ;i++)
    {
        arr_lower[i] = tolower(arr[i]);
    }

    for (int i = 0; i < strlen(arr_lower); i++)
    {
        if (arr_lower[i] == 'a' || arr_lower[i] == 'i' || arr_lower[i] == 'o'|| arr_lower[i] == 'e'||arr_lower[i] == 'u')
        {
            counter++;
        }
    }

    printf("The word \"the\" repeated %d times", counter);

    return 0;
}
// program 4
int program_4 ()
{
    printf ("program 4 : \n");
    printf ("Input details of two employees at least Then, update the first employee's name to “Aya” and second employee salary to 5000\n");

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
// program 5
int program_5 () 
{
    printf ("program 5 : \n");
    printf ("It accepts customer details then  print the account number and each customer's name whose balance is less than 10,000 pounds\n");
    Customer *customers[5];
    for (int i = 0; i < 5; i++) 
    {
        customers[i] = (Customer *) malloc(sizeof(Customer));
        printf("Enter details of the customer %d:\n", (i + 1));
        printf("Account Number: ");
        scanf("%d", &customers[i]->account_no);
        getchar ();
        printf("Name: ");
        scanf("%s", customers[i]->name);
        printf("Balance: ");
        scanf("%f", &customers[i]->balance);
    }

    printf("\nCustomers with balance less than 10000 :\n");
    for (int i = 0; i < 5; i++) 
    {
        if (customers[i]->balance < 10000) 
        {
            print_customer(customers[i]);
        }
    }

    return 0;
}
void print_customer(Customer *customer) 
{
    printf("Account Number: %d\n", customer->account_no);
    printf("Name: %s\n", customer->name);
}
// program 6
int program_6 () 
{
    printf ("program 6 : \n");
    printf ("It reads a file and counts the number of words in it \n");

    FILE *file;
    char *filepath;
    char ch;
    int counter = 0;
    filepath = "C:\\Users\\user\\assignment 2\\hazem.txt";
    file = fopen( filepath , "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == ".") {
            counter++;
        }
    }

    fclose(file);

    printf("Number of words in this file : %d\n", counter);

    return 0;
}