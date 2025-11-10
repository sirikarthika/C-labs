#include<stdio.h>
int main(){
    int m;
    printf("enter no of rows:");
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        for(int space=m;space>=i;space--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%2d",j);
        }
        printf("\n");
    }
}