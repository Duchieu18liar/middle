#include "functions.h"
#include <stdio.h>
int insole(int n)
{

    for (int i = 1; i <= n; i += 2)
    {
        printf("%d", i);
        printf(" ");
    } return 0;
}
void nhaphaisoduong(int *a, int *b)
{
    do{
        printf("Nhap lan luot 2 so a va b: ");
        scanf("%d %d",a,b);
    }while(*a<=0 || *b<=0);
}

void Doivitri(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int ktrsonguyenduong (int n) {
    return n > 0;
}
int giaithua(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return n * giaithua(n - 1); 
    }
}
int ucln(int a, int b){
    if (a==0||b==0)
    return a+b;
    else{
        if(a>b)
        return ucln(b,a%b);
        else
        return ucln(a,b%a);
    }
}
