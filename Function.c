#include<stdio.h>
int celsiusTofahren(int num){
    int F;
    F=(9*num)/5+32;
    return F;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("Tem is %d\n" , celsiusTofahren(num));
    return 0;
}

#include<stdio.h>
int power(int base, int b ){
    int p,i;
    p=1;
    for(i=1; i<=b; i++){
        p=p*base;
    }
    return p;
}
int main(){
    int i,base;
    scanf("%d ,%d" &base,&b);
    for(i=0; i<base; i++){
        printf("%d %d\n " i ,base, power(base,3) );
    }
}