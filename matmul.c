#include<stdio.h>
int main(){
    int mat1[25][25],mat2[25][25];
    int res[25][25];
    int r1,c1;
    printf("enter no of rows and columns for matrix 1:");
    scanf("%d %d",&r1,&c1);
    int r2,c2;
    printf("enter no of rows and columns for matrix 2:");
    scanf("%d %d",&r2,&c2);
    if(c1==r2){
        printf("enter matrix 1 elements:");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("\n");
        printf("enter matrix 2 elements:");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                scanf("%d",&mat2[i][j]);
            }
        }
        printf("\n");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                res[i][j]=0;
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                    res[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
            
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                printf("%d  ",res[i][j]);
            }
            printf("\n");
        }
    }else{
        printf("no matrix multiplication");
    }
}