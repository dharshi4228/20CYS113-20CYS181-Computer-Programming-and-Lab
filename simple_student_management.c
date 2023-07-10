#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 3
enum score{A,B,C,D,F};

struct student{
    char name[30];
    int age;
    enum score grade;
};

void displayStudents(struct student stud[],int count){
    if (count==0) {
        printf("No students to display.\n");
        return;
    }

    printf("List of students:\n");
    int i;
    for (i=0;i<count;i++) {
        printf("Student %d\n",i + 1);
        printf("Name: %s\n",stud[i].name);
        printf("Age: %d\n",stud[i].age);

        if (stud[i].grade==A) {
            printf("Score: A\n");
        }
        else if (stud[i].grade==B) {
            printf("Score: B\n");
        }
        else if (stud[i].grade==C) {
            printf("Score: C\n");
        }
        else if (stud[i].grade==D) {
            printf("Score: D\n");
        }
        else if (stud[i].grade==F) {
            printf("Score: F\n");
        }

        printf("\n");
    }
}

int findHighestScoringStudent(struct student stud[], int count){
    if (count==0) {
        return 0;
    }

    int highestScore=0;
    int i;
    for (i=0;i<count;i++) {
        if(stud[i].grade<stud[highestScore].grade){
            highestScore=i;
        }
    }

    return highestScore;
}

int addStudent(struct student stud[],int count){
    char grade[2];
    if (count>=MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return count;
    }

    scanf("%s",stud[count].name);
    scanf("%d",&stud[count].age);
    scanf("%s",grade);

    if(strcmp(grade,"A")==0) {
        stud[count].grade=A;
    }
    else if(strcmp(grade,"B")==0) {
        stud[count].grade=B;
    }
    else if(strcmp(grade,"C")==0) {
        stud[count].grade=C;
    }
    else if(strcmp(grade,"D")==0) {
        stud[count].grade=D;
    }
    else if(strcmp(grade,"F")==0) {
        stud[count].grade=F;
    }
    else{
        stud[count].grade=F;
    }
    //break;
    count++;
    printf("Student added successfully.\n");
    return count;
}

int main() {
    int count=0;
    struct student stud[MAX_STUDENTS];
    int choice;

    do {
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                count=addStudent(stud,count);
                break;
            case 2:
                displayStudents(stud,count);
                break;
            case 3:{
                int val=findHighestScoringStudent(stud,count);
                if(count!=0){
                    printf("\nHighest-scoring student:\n");
                    printf("Name: %s\n", stud[val].name);
                    printf("Age: %d\n", stud[val].age);
                    if (stud[val].grade==A) {
                        printf("Score: A\n");
                    }
                    else if (stud[val].grade==B) {
                        printf("Score: B\n");
                    }
                    else if (stud[val].grade==C) {
                        printf("Score: C\n");
                    }
                    else if (stud[val].grade==D) {
                        printf("Score: D\n");
                    }
                    else if (stud[val].grade==F) {
                        printf("Score: F\n");
                    }
        //printf("\n");
                }
                else {
                    printf("\nNo students to display.\n");
                }
                break;
            }
            case 4:
                printf("\nExiting the program. Thank you for using our system!\n");
                break;
        }
    } while(choice!= 4);

    return 0;
}
