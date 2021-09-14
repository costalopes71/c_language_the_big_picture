#include <stdio.h>
#include "orders.h"

int main(int argc, char const *argv[])
{

    printf("Starting to calculate grand total...\n");

    double order_subtotal = 50.0;

    double grand_total = calculate_order_total(order_subtotal);

    printf("Grand total: %lf\n", grand_total);
    
    return 0;
}
