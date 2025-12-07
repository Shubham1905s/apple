// Data flow testing for commission problem

#include<stdio.h>
int main() {
    int locks, stocks, barrels;
    int tlocks = 0, tstocks = 0, tbarrels = 0;
    float sales, comm;

    printf("Enter locks (-1 to stop): ");
    scanf("%d", &locks);

    while (locks != -1) {
        printf("Enter stocks and barrels: ");
        scanf("%d %d", &stocks, &barrels);

        tlocks += locks;
        tstocks += stocks;
        tbarrels += barrels;

        printf("Enter locks (-1 to stop): ");
        scanf("%d", &locks);
    }

    sales = (tlocks * 45.0) + (tstocks * 30.0) + (tbarrels * 25.0);

    printf("\nTotal Locks   = %d", tlocks);
    printf("\nTotal Stocks  = %d", tstocks);
    printf("\nTotal Barrels = %d", tbarrels);
    printf("\nTotal Sales   = %.2f\n", sales);

    if (sales > 1800)comm = 100 + 120 + 0.20 * (sales - 1800);   
    else if (sales > 1000)comm = 100 + 0.15 * (sales - 1000);
    else comm = 0.10 * sales;
    // printf("commisiion cannot be calculated\n");

    printf("Commission = %.2f\n", comm);
    return 0;
}
