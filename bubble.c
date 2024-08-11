#include<stdio.h>
void main()
{
    int n,i,j,a[10],temp;
    printf("Enter the no. of elements you want in array:");
    scanf("%d", &n);

    printf("Enter the array elements:");
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
   
    printf("Array elements are:");
    for(i=0; i<n; i++){
    printf("%d\n", a[i]);
 }


    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
     
    printf("Array after sorting:");
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
}