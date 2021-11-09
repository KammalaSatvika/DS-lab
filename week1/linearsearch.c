#include<stdio.h>

int linear_search(int[] , int , int);
int main()
{
    int a[30],n,i,x,p;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the %d element values:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    scanf("%d",&x);
    p = linear_search(a,x,n);
    if(p == -1)
        printf("element not found");
    else
        printf("element found at position %d",p+1);

    return 0;
}
int linear_search(int a[],int n ,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(x == a[i])
            return i;
    }
    return i;
}
