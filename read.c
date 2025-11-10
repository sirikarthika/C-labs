#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("file1.txt","r");
    printf("file contains:");
    char name[50];
    fgets(name,sizeof(name),fp);
    printf("%s\n",name);
    fclose(fp);
    fp=fopen("file1.txt","a");
    fprintf(fp,"AIML");
    fclose(fp);
   
    printf("updated content:");
    fp=fopen("file1.txt","r");
    while(fgets(name,sizeof(name),fp)){
        printf("%s",name);
        fclose(fp);
    }
}