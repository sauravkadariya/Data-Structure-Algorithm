#include<stdio.h>
 int main(int argc, char const *argv[])
 {
    int a[]={10,20,30,40,50},lr=0,upr=4,f=0,mid,item;
    printf("Input item to search:");
    scanf("%d",&item);
    while (lr<=upr)
    {
        mid=(lr+upr)/2;
        if (a[mid]==item)
        {
            f=1;
            break;
        }
        if (a[mid]<item)
        {
            lr=mid+1;
        }
        else{
            upr=mid-1;
        }
        
        
    }
    if(f==1){
        printf("Item found in location %d",mid);
    }
    else{
        printf("Item not found.");
    }
    
    return 0;
 }
 