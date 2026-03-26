#include<stdio.h>
int main(){
    int a, b;
    int result;
    printf("substract b from a");
    scanf("%d %d", &a, &b);
    result = a+(~b+1);
    printf (" substraction is %d ",result);
    return 0;
}



