/*6. Write a C program to input salary,emp_name, emp_salary of 10 employees using structure and display
the emp id, emp_name and emp_salary of the employee receiving a highest salary. */
#include<stdio.h>
struct employee{
    int salary;
    char emp_name[25];
    int id;
}data[10],t;

int main(){

    int i,j;
    printf("Enter employee name,id and salary \n ");
    for(i=0;i<10;i++){
        scanf("%s %d %d",data[i].emp_name,&data[i].id,&data[i].salary);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(data[i].salary<data[j].salary){
                t=data[i];
                data[i]=data[j];
                data[j]=t;
            }
        }
    }
    printf("Employee Id \t Employee Name \t Salary\n ");
    printf("%d\t\t%s\t\t%d\n",data[0].id, data[0].emp_name,data[0].salary);
    
}