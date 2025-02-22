#include <stdio.h>
#include <string.h>

void calculateAndPrintDetails(double amount_to_pay) {
    double tax_rate = 0.05;
    double min_tax = 5.0;
    double max_tax = 100.0;
    double tax = amount_to_pay * tax_rate;
    if (tax < min_tax) {
        tax = min_tax;
    }
    if (tax > max_tax) {
        tax = max_tax;
    }
    double total_profit = amount_to_pay - tax;
    double t_amount_to_pay = amount_to_pay + tax;
    printf("Calculate tax: %lf\n", tax);
    printf("Total profit after tax: %lf\n", total_profit);
    printf("Total amount paid by the customer: %.2f\n", t_amount_to_pay);
}

int main ()
{
    double amountPaid;
    printf("Enter the amount to pay: ");
    scanf("%lf", &amountPaid);

    calculateAndPrintDetails(amountPaid);

    return 0;
}



