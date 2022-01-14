/*8. Write a C program using structure to input rollno, name and percentage of several students and arrange
them in descending order by percentage*/
#include <stdio.h>
struct alphabetic{
    int rollno;
    char name[50];
    float percentage;
}s[100], temp;

int main(void){
    int i, j, num;
    printf("How many records you want to enter: ");
    scanf("%d", &num);

    for(i=0; i<num; i++){
        printf("\nEnter student Roll number: ");
        scanf("%i", &s[i].rollno);
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);
    }
    printf("Roll Number \t\t Name \t Percentage\n ");
    for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            if(s[j].percentage > s[i].percentage){
                temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
        printf("%i\t\t%s\t\t%f\n",s[i].rollno, s[i].name, s[i].percentage);
    }
}