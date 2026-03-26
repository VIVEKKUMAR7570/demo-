/* write a function strlen(char s[]) that returns length of strin s*/
#include<stdio.h>
int mystrlen(char s[]);

int main()
{   char s[]= "helo";
    printf("%d" ,mystrlen(s) );
    return  0;

}




 int mystrlen(char s[]){
    
    int count =0;

    while (s[count]!='\0'){
           count++;
    }
           
           
    return count;
    
 }
int mystrlen(char *s){
    char *ptr=s;
    while(*ptr!='\0'){
        ptr++;
    }
    return ptr-s;
}
int main (){
    char s[]="hellow world";
    printf("length of strign :%d\n", mystrlen(s));
    return 0;
}



int reverse(int *a){
    int *p=a;
    for ( i=a.length; i>0; i--){
        printf("%d", (a+1))
    }
}
 