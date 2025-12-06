#include <stdio.h>

int isLeap(int y){
    return (y%400==0) || (y%4==0 && y%100!=0);
}

int daysInMonth(int m, int y){
    if(m == 2) return isLeap(y) ? 29 : 28;
    if(m==4 || m==6 || m==9 || m==11) return 30;
    return 31;
}

int main(){
    int d, m, y;
    printf("Enter day month year: ");
    scanf("%d %d %d", &d, &m, &y);

    if(m<1 || m>12 || y<1900 || y>2100){
        printf("Invalid date");
        return 0;
    }

    int dim = daysInMonth(m, y);
    if(d<1 || d>dim){
        printf("Invalid date");
        return 0;
    }

    if(d < dim) d++;
    else{
        d = 1;
        if(m == 12){ m = 1; y++; }
        else m++;
    }

    printf("Next Date: %02d-%02d-%04d", d, m, y);
    return 0;
}
