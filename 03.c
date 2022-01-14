/*3. Write a C program that reads different names and addresses into the computer and rearranges the names
into alphabetical order using the structure variables. */
#include<string.h>
#include <stdio.h>
struct datas{
    char name[50];
    char address[100];
}s[100], temp;

int main(){
    int i, j,num;
    printf("How many records you want to store? ");
    scanf("%d", &num);
    for(i=0; i<num; i++){
        printf("\nEnter name: ");
        scanf("%s", s[i].name);
        printf("Enter address: ");
        scanf("%s", s[i].address);
    }
    printf("\nName\tAddress\n");
    for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            if(strcmp(s[j].name, s[i].name)<0){
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
        printf("%s\t%s\n", s[i].name, s[i].address);
    }
    return 0;
}