#include<stdio.h>
    int main()
    {
        int i=0,a[]={10,20,30,40,50},item;
           printf("Input Searching item :");
           scanf("%d",&item);
           for(i=0;i<5;i++){
            if(a[i]== item){
                printf("Item found in location %d",i);
                break;
            }
           }
          if(i>=5){
            printf("Item not found");
          } 
          return 0;
    }