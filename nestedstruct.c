#include<stdio.h>
#include<string.h>
//nested structure
struct student{
    int num;
    char name[20];
    float cgpa;
    struct address {
        char vname[20];
        int pincode;
    }addr;
};
int main(){
    struct student s1;
    s1.num=99;
    strcpy(s1.name,"siri");
    s1.cgpa=9.9889;
    s1.addr.pincode=516330;
    strcpy(s1.addr.vname,"vempalli");
    printf("roll no:%d\n",s1.num);
    printf("name:%s\n",s1.name);
    printf("cgpa:%.2f\n",s1.cgpa);
    printf("pincode:%d\n",s1.addr.pincode);
    printf("village name:%s\n",s1.addr.vname);

    struct student s2={1,"likki",9.999,{"kadapa",522409}};
    printf("roll no:%d\n",s2.num);
    printf("name:%s\n",s2.name);
    printf("cgpa:%.2f\n",s2.cgpa);
    printf("pincode:%d\n",s2.addr.pincode);
    printf("village name:%s\n",s2.addr.vname);
}