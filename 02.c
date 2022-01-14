/*2.Write a C program that takes name and marks of 10 students. Display data according to marks in
descending order. */
#include<stdio.h>
struct datas{
    int marks;
    char name[25];
}data[10],t;

int main(){

    int i,j;
    printf("Enter name and marks \n ");
    for(i=0;i<10;i++){
        scanf("%s %d",data[i].name,&data[i].marks);
    }

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(data[i].marks<data[j].marks){
                t=data[i];
                data[i]=data[j];
                data[j]=t;
            }
        }
    }
    printf("The sorted form: \n");
    for(j=0;j<10;j++){
        printf("%s got %d marks \n",data[j].name,data[j].marks);
    }
}