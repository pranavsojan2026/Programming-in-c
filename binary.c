#include<stdio.h>
int search(int array[],int n,int m);
int search(int array[],int n,int m)
{
  int right,left,middle;
  right=n-1;
  left=0;
  while(left<=right){
    middle=(left+right)/2;
    if(array[middle]==m)
    {
      return 1;  
    }
    else if(array[middle]<m)
    {
      left=middle+1;
    }
    else{
        right=middle-1;
    }
  }
  return 0;
}

void main(){
    int n,i,m;
    printf("Enter the no of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&m);
    int result=search(a,n,m);
    if(result==1)
    {
    printf("The element found");
    }
    else{
        printf("The element not found");
    }
}
