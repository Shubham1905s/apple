#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d",&a,&b,&c);
    
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c)printf("Equilateral Triangle");
        else if(a==b || b==c || c==a)printf("Isosceles Triangle");
        else printf("Scalen Triangle");
    }else{
        printf("Not a Triangle\n");
    }
    return 0;
}
