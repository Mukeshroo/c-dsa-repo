#include<stdio.h>
#define max_size 5
int stack[max_size];
int top = -1;
int main(){
    int choise,value;
    while(1){
        printf("\n stack opearation \n");
        printf("1: push \n");
        printf("2: pop \n");
        printf("3: display \n");
        printf("4: exit \n");
        printf("choose the stack opearation \n");
        scanf("%d",&choise);
        switch (choise){
            case 1: 
            if(top == max_size-1){  
                printf("it is overflow\n");
            }
            else{
                printf("enter the element: \n");
                scanf("%d",&value);
                top++;
                stack[top] = value;
                printf("the push element is %d\n",value);
            }
            break;
            case 2:
            if(top == -1){
                printf("empty");
            }
            else{
                printf("popped from stack %d",stack[top]);
                top--;
            }
            break;
            case 3: 
            if(top == -1){ 
                printf("it is empty");
            }
            else{
                for(int i = top; i>=0; i--){
                    printf("%d \n",stack[i]);
                }
            }
            break;
            case 4: 
            printf("exit");
            return 0;
            break;

            default:
            printf("choose the right opration\n ");
            break;
            

        }
    
    }
}