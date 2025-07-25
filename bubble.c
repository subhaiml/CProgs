#include <stdio.h>
int main()
{
    int n;
    printf("Enter the array limit: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: \n");
    for(int i=0;i<n;i++){
        printf("Enter array element %d \n",i+1);
        scanf("%d",&a[i]);
        printf("\n");
    }
    printf("Array Elements: ");
    for(int i=0;i<n;i++){
        if(i<n-1){
            printf("%d, ",a[i]);
        }
        else{
            printf("%d ",a[i]);
        }
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n Sorted Elements: ");
    for(int i=0;i<n;i++){
        if(i<n-1){
            printf("%d, ",a[i]);
        }
        else{
            printf("%d ",a[i]);
        }
    }
}