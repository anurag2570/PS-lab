#include<stdio.h>

int main(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        for (int j=8;j>2*(i-1);j--){
            printf(" ");
        }
        for (int j=i;j>=1;j--){
            printf("%d",j);
        }

        printf("\n");
    }
    return 0;
}