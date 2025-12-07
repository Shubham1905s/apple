
// Experiment no. 3
// data flow testing for commission problem
// #include<stdio.h>
// int main()
// {
// int locks, stocks, barrels, tlocks, tstocks, tbarrels;
// float lprice,sprice,bprice,lsales,ssales,bsales,sales,comm;
// lprice=45.0;
// sprice=30.0;
// bprice=25.0;
// tlocks=0;
// tstocks=0;
// tbarrels=0;
// printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
// scanf("%d", &locks);
// while(locks!=-1)  {
// printf("enter the number of stocks and barrels\n");
// scanf("%d%d",&stocks,&barrels);
// tlocks=tlocks+locks;
// tstocks=tstocks+stocks;
// tbarrels=tbarrels+barrels;
// printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
// scanf("%d",&locks);
// }
// printf("\n total locks = %d\n",tlocks);
// printf("total stocks =%d\n",tstocks);
// printf("total barrels =%d\n",tbarrels);
// lsales = lprice*tlocks;
// ssales=sprice*tstocks;
// bsales=bprice*tbarrels;
// sales=lsales+ssales+bsales;
// printf("\nthe total sales=%f\n",sales);
// if(sales > 1800.0)
// {
// comm=0.10*1000.0;
// comm=comm+0.15*800;
// comm=comm+0.20*(sales-1800.0);
// }
// else if(sales > 1000)
// {
// comm =0.10*1000;
// comm=comm+0.15*(sales-1000);
// }
// else
// comm=0.10*sales;
// printf("the commission is=%f\n",comm);
// return 0;
// }

// Experiment no. 4
// Boundary value testing and equivalence decision for commission problem

// #include <stdio.h>
// int main()
// {
//     int locks, stocks, barrels, tlocks, tstocks, tbarrels;
//     float lprice, sprice, bprice, sales, comm;
//     int c1, c2, c3, temp;
//     lprice = 45.0;
//     sprice = 30.0;
//     bprice = 25.0;
//     tlocks = 0;
//     tstocks = 0;
//     tbarrels = 0;
//     printf("\n Enter the number of locks and to exit the loop enter -1 for locks\n");
//     scanf("%d", &locks);
//     while (locks != -1)
//     {
//         c1 = (locks <= 0 || locks > 70);
//         printf("enter the number of stocks and barrels\n");
//         scanf("%d%d", &stocks, &barrels);
//         c2 = (stocks <= 0 || stocks > 80);
//         c3 = (barrels <= 0 || barrels > 90);
//         if (c1)
//             printf("value of locks not in the range 1..70 ");
//         else
//         {
//             temp = tlocks + locks;
//             if (temp > 70)
//                 printf("new total locks =%d not in the range 1..70 so old ", temp);
//             else
//                 tlocks = temp;
//         }
//         printf("total locks = %d\n", tlocks);
//         if (c2)
//             printf("value of stocks not in the range 1..80 ");
//         else
//         {
//             temp = tstocks + stocks;
//             if (temp > 80)
//                 printf("new total stocks =%d not in the range 1..80 so old  ", temp);
//             else
//                 tstocks = temp;
//         }
//         printf("total stocks=%d\n", tstocks);
//         if (c3)
//             printf("value of barrels not in the range 1..90 ");
//         else
//         {
//             temp = tbarrels + barrels;
//             if (temp > 90)
//                 printf("new total barrels =%d not in the range 1..90 so old ", temp);
//             else
//                 tbarrels = temp;
//         }
//         printf("total barrel=%d", tbarrels);
//         printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
//         scanf("%d", &locks);
//     }
//     printf("\ntotal locks = %d\ntotal stocks =%d\ntotal barrels =%d\n", tlocks, tstocks, tbarrels);
//     sales = lprice * tlocks + sprice * tstocks + bprice * tbarrels;
//     printf("\nthe total sales=%f\n", sales);
//     if (tlocks > 0 && tstocks > 0 && tbarrels > 0)
//     {
//         if (sales > 1800.0)
//         {
//             comm = 0.10 * 1000.0;
//             comm = comm + 0.15 * 800;
//             comm = comm + 0.20 * (sales - 1800.0);
//         }
//         else if (sales > 1000)
//         {
//             comm = 0.10 * 1000;
//             comm = comm + 0.15 * (sales - 1000);
//         }
//         else
//             comm = 0.10 * sales;
//         printf("the commission is=%f\n", comm);
//     }
//     else
//         printf(" Commission cannot be calculated \n");
//     return 0;
// }

// Experiment no. 5
//  Equivalence class testing for commission problem

// #include <stdio.h>
// int main()
// {
//     int locks, stocks, barrels, tlocks, tstocks, tbarrels;
//     float lprice, sprice, bprice, sales, comm;
//     int c1, c2, c3, temp;
//     lprice = 45.0;
//     sprice = 30.0;
//     bprice = 25.0;
//     tlocks = 0;
//     tstocks = 0;
//     tbarrels = 0;
//     printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
//     scanf("%d", &locks);
//     while (locks != -1)
//     {
//         c1 = (locks <= 0 || locks > 70);
//         printf("enter the number of stocks and barrels\n");
//         scanf("%d%d", &stocks, &barrels);
//         c2 = (stocks <= 0 || stocks > 80);
//         c3 = (barrels <= 0 || barrels > 90);
//         if (c1)
//             printf("value of locks not in the range 1..70 ");
//         else
//         {
//             temp = tlocks + locks;
//             if (temp > 70)
//                 printf("new total locks =%d not in the range 1..70 so old ", temp);
//             else
//                 tlocks = temp;
//         }
//         printf("total locks = %d\n", tlocks);
//         if (c2)
//             printf("value of stocks not in the range 1..80 ");
//         else
//         {
//             temp = tstocks + stocks;
//             if (temp > 80)
//                 printf("new total stocks =%d not in the range 1..80 so old  ", temp);
//             else
//                 tstocks = temp;
//         }
//         printf("total stocks=%d\n", tstocks);
//         if (c3)
//             printf("value of barrels not in the range 1..90 ");
//         else
//         {
//             temp = tbarrels + barrels;
//             if (temp > 90)
//                 printf("new total barrels =%d not in the range 1..90 so old ", temp);
//             else
//                 tbarrels = temp;
//         }
//         printf("total barrel=%d", tbarrels);
//         printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
//         scanf("%d", &locks);
//     }
//     printf("\ntotal locks = %d\ntotal stocks =%d\ntotal barrels =%d\n", tlocks, tstocks, tbarrels);
//     sales = lprice * tlocks + sprice * tstocks + bprice * tbarrels;
//     printf("\nthe total sales=%f\n", sales);
//     if (tlocks > 0 && tstocks > 0 && tbarrels > 0)
//     {
//         if (sales > 1800.0)
//         {
//             comm = 0.10 * 1000.0;
//             comm = comm + 0.15 * 800;
//             comm = comm + 0.20 * (sales - 1800.0);
//         }
//         else if (sales > 1000)
//         {
//             comm = 0.10 * 1000;
//             comm = comm + 0.15 * (sales - 1000);
//         }
//         else
//             comm = 0.10 * sales;
//         printf("the commission is=%f\n", comm);
//     }
//     else
//         printf(" Commission cannot be calculated \n");
//     return 0;
// }

// Experiment no. 6
// decision test case for Comission problem

// #include <stdio.h>
// int main()
// {
//     int locks, stocks, barrels, tlocks, tstocks, tbarrels;
//     float lprice,
//         sprice, bprice, sales, comm;
//     int c1, c2, c3, temp;
//     lprice = 45.0;
//     sprice = 30.0;
//     bprice = 25.0;
//     tlocks = 0;
//     tstocks = 0;
//     tbarrels = 0;
//     printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
//     scanf("%d", &locks);
//     while (locks != -1)
//     {
//         c1 = (locks <= 0 || locks > 70);
//         printf("enter the number of stocks and barrels\n");
//         scanf("%d%d", &stocks, &barrels);
//         c2 = (stocks <= 0 || stocks > 80);
//         c3 = (barrels <= 0 || barrels > 90);
//         if (c1)
//             printf("value of locks not in the range 1..70 ");
//         else
//         {
//             temp = tlocks + locks;
//             if (temp > 70)
//                 printf("new total locks =%d not in the range 1..70 so old ", temp);
//             else
//                 tlocks = temp;
//         }
//         printf("total locks = %d\n", tlocks);
//         if (c2)
//             printf("value of stocks not in the range 1..80 ");
//         else
//         {
//             temp = tstocks + stocks;
//             if (temp > 80)
//                 printf("new total stocks =%d not in the range 1..80 so old  ", temp);
//             else
//                 tstocks = temp;
//         }
//         printf("total stocks=%d\n", tstocks);
//         if (c3)
//             printf("value of barrels not in the range 1..90 ");
//         else
//         {
//             temp = tbarrels + barrels;
//             if (temp > 90)
//                 printf("new total barrels =%d not in the range 1..90 so old ", temp);
//             else
//                 tbarrels = temp;
//         }
//         printf("total barrel=%d", tbarrels);
//         printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
//         scanf("%d", &locks);
//     }
//     printf("\ntotal locks = %d\ntotal stocks =%d\ntotal barrels =%d\n", tlocks, tstocks, tbarrels);
//     sales = lprice * tlocks + sprice * tstocks + bprice * tbarrels;
//     printf("\nthe total sales=%f\n", sales);
//     if (tlocks > 0 && tstocks > 0 && tbarrels > 0)
//     {
//         if (sales > 1800.0)
//         {
//             comm = 0.10 * 1000.0;
//             comm = comm + 0.15 * 800;
//             comm = comm + 0.20 * (sales - 1800.0);
//         }
//         else if (sales > 1000)
//         {
//             comm = 0.10 * 1000;
//             comm = comm + 0.15 * (sales - 1000);
//         }
//         else
//             comm = 0.10 * sales;
//         printf("the commission is=%f\n", comm);
//     }
//     else
//         printf(" Commission cannot be calculated \n");
//     return 0;
// }

// Experiment no. 7
// path testing
//  #include<stdio.h>
//  #include<stdlib.h>

// int search(int arr[],int n,int k){
//     int high = n-1, low = 0,mid = 0;

//     while(low <= high){
//         mid = (high+low)/2;
//         if(arr[mid] == k)return mid;
//         else if(k < arr[mid])high = mid-1;
//         else low = mid+1;
//     }
//     return -1;
// }
// int main(){
//     int n,k;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int *arr = (int*)malloc(n * sizeof(int));
//     printf("Enter array elements: \n");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter element to find: ");
//     scanf("%d",&k);
//     int i = search(arr,n,k);
//     if(i!=-1)printf("Element found at: %d",i+1);
//     else printf("Element not found");
//     free(arr);
//     return 0;
// }

// Experiment no. 8
//  quick sort algorithm and its path testing
//  #include <stdio.h>
//  #include <stdlib.h>

// void quick(int a[], int low, int high) {
//     if (low < high) {
//         int pivot = a[high], i = low - 1, j, temp;
//         for (j = low; j < high; j++)
//             if (a[j] < pivot) {
//                 temp = a[++i]; a[i] = a[j]; a[j] = temp;
//             }
//         temp = a[i+1]; a[i+1] = a[high]; a[high] = temp;
//         int pi = i + 1;

//         quick(a, low, pi - 1);
//         quick(a, pi + 1, high);
//     }
// }

// int main() {
//     int n, i;
//     printf("Enter size: ");
//     scanf("%d", &n);
//     int *a = (int *)malloc(n * sizeof(int));
//     printf("Enter elements:\n");
//     for(i = 0; i < n; i++) scanf("%d", &a[i]);

//     quick(a, 0, n - 1);

//     printf("Sorted: ");
//     for(i = 0; i < n; i++) printf("%d ", a[i]);
//     free(a);
// }

// Experiment no. 9
//  next date problem with boundary value analysis and path testing
#include <stdio.h>
int isLeap(int y)
{
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}
int daysInMonth(int m, int y)
{
    if (m == 2)
        return isLeap(y) ? 29 : 28;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    return 31;
}
int main()
{
    int d, m, y;
    printf("Enter day month year: ");
    scanf("%d %d %d", &d, &m, &y);
    if (m < 1 || m > 12 || y < 1811 || y > 2012)
    {
        printf("Invalid date");
        return 0;
    }
    int dim = daysInMonth(m, y);
    if (d < 1 || d > dim)
    {
        printf("Invalid date");
        return 0;
    }
    if (d < dim)
        d++;
    else
    {
        d = 1;
        if (m == 12)
        {
            m = 1;
            y++;
        }
        else
            m++;
    }
    printf("Next Date: %02d-%02d-%04d", d, m, y);
    return 0;
}