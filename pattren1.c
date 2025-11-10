#include<stdio.h>
int main(){
    int rows;
    printf("enter no of rows:");
    scanf("%d",&rows);
    int count=1;
    for(int i=1;i<=rows;i++){
        for(int space=rows;space>=i;space--){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
            printf("%4d",count++);
        }
        printf("\n");
    }

}