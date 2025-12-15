#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n % 6 == 0){
        printf("it is devil number");
    }
    else{
        printf("it is not the devil number");
    }
}