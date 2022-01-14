/*5.Write a C program to store name and mark of 20 students. Sort these data according to mark in
descending order (highest to lowest) and display them. */
#include<stdio.h>
struct datas{
    int marks;
    char name[25];
}data[20],t;

int main(){

    int i,j;
    printf("Enter name and marks \n ");
    for(i=0;i<20;i++){
        scanf("%s %d",data[i].name,&data[i].marks);
    }

    for(i=0;i<20;i++){
        for(j=i+1;j<20;j++){
            if(data[i].marks<data[j].marks){
                t=data[i];
                data[i]=data[j];
                data[j]=t;
            }
        }
    }
    printf("The sorted form: \n");
    for(j=0;j<20;j++){
        printf("%s got %d marks \n",data[j].name,data[j].marks);
    }
}