#include <stdio.h>
#include<stdlib.h>
int stack[5], top = -1;
void push();
void pop();
void show();

int main()
{
    int ch;
    printf("1. PUSH \n");
    printf("2. POP \n");
    printf("3. SHOW \n");
    printf("4. EXIT \n");

    while (1)
    {
        printf("\nEnter Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            show();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid Option\n");
            break;
        }
    }
    return 0;
}
void push(){
    int item;
    if(top==5-1){
        printf("\nStack is Full.\n");
    }
    else{
        printf("Push element in stack:");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
    }
}
void pop(){
    if(top==-1){
        printf("\nStack is empty\n");
    }
    else{
        printf("Popped %d",stack[top]);
        top=top-1;
    }
}
void show(){
    int i;
    if(top>=0){
        printf("Stack elements:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
    else{
        printf("\nStack is Empty\n");
    }
}