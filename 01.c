/*1.Write a C program in C that reads roll no, f_name, l_name and prints the records on the screen. */
#include <stdio.h>
struct datas{
    int roll_no;
    char f_name[50];
    char l_name[50];
};

int main(){
    struct datas data;
    printf("Enter the roll no: ");
    scanf("%d",&data.roll_no);
    printf("Enter the first name: ");
    scanf("%s",data.f_name);
    printf("Enter the last name: ");
    scanf("%s",data.l_name);
    printf("\n\n First Name = %s \n Last Name = %s\n roll no. = %d",data.f_name,data.l_name,data.roll_no);
}