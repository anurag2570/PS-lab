#include<stdio.h>

int main(){
    int n;
    
    printf("enter the size");
    scanf("%d ",&n);
    int a[n][n];
    printf("enter the element");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            printf("%d",&a[i][j]);
        }
    }

    
    
  

    return 0;
}