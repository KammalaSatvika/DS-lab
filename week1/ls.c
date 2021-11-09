#include<stdio.h>
int linear_search(int [], int , int);
int main()
{
    int a[30],n,i,x,p;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
     }
     printf("enter the element to be searched");
     scanf("%d",&x);
     p = linear_search(a,n,x);
     if (p == -1)
         printf("element not found");
     else
         printf("element is found at position %d",p+1);
     return 0;
}
int linear_search(int a[],int n , int x)
{
    int i=0;
    if(a[i] == x){
        return i;
    }
    if(i<n){
        i++;
        linear_search(a,n,x);
    }
    if(i>=n){
        return -1;
    }
}


