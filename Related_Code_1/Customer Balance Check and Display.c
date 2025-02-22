#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct bank {
    int account_no;
    char name[50];
    float balance;
}Customer;
void print_customer(Customer *customer);
int main() {
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
void print_customer(Customer *customer) {
    printf("Account Number: %d\n", customer->account_no);
    printf("Name: %s\n", customer->name);
}
