#include<stdio.h>
int binary_search(int [],int , int,int);
int main()
{
    int num,i,key,position,a[30];
    int low,high;
    printf("enter the number of elements");
    scanf("%d",&num);
    printf("enter the element %d values",num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    low = 0;
    high = num-1;
    printf("enter the element to be searched");
    scanf("%d",&key);
    position = binary_search(a,key,low,high);
    if(position == -1)
        printf("element not found");
    else 
        printf("element found at position %d",position+1);
    return 0;
}
int binary_search(int a[],int x, int low,int high)
{
    int mid;
    if(low>high)
        return -1;
    mid = (low + high)/2;
    if(x == a[mid])
        return mid;
    else if(x < a[mid])
        binary_search(a,x,low,mid-1);
    else 
        binary_search(a,x,mid+1,high);
    
}

