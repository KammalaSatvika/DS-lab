#include<stdio.h>
int binary_search(int [],int , int);
int main()
{
    int a[30],n,i,x,p;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the element %d values",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&x);
    p = binary_search(a,n,x);
    if(p == -1)
        printf("element not found");
    else 
        printf("element found at position %d",p+1);
    return 0;
}
int binary_search(int a[],int n , int x)
{
    int beg = 0,end = n-1, mid;
    while(beg <= end)
    {
        mid = (beg + end)/2;
        if(x<a[mid])
            end = mid-1;
        else if(x>a[mid])
            beg = mid+1;
        else
            return mid;
    }
    return -1;
}

