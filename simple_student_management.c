#include<stdio.h>
#include<string.h>
#define MAX_STUDENTS 3

enum Scores{A,B,C,D,F};
struct Student{
    char name[30];
    int age;
    enum Scores score;
};

void addStudent(struct Student a[],int j){
    char g;
    if(j>=MAX_STUDENTS){
        printf("Maximum number of students reached.\n");
    }
    else{
        scanf("%s",a[j].name);
        scanf("%d",&a[j].age);
        scanf(" %c",&g);
        if(g=='A'){
            a[j].score=0;
        }
        else if(g=='B'){
            a[j].score=1;
        }
        else if(g=='C'){
            a[j].score=2;
        }
        else if(g=='D'){
            a[j].score=3;
        }
        else{
            a[j].score=4;
        }
        printf("Student added successfully.\n");
    }
}

void displayStudents(struct Student d[MAX_STUDENTS],int k){
    if(k==0){
        printf("No students to Display");
    }
    else{
     printf("List of students:\n");
     for(int i=0;i<MAX_STUDENTS;i++){
         printf("Student %d\n",i+1);
         printf("Name: %s\n",d[i].name);
         printf("Age: %d\n",d[i].age);
         if(d[i].score==0){
             printf("Score: A \n");
         }
         else if(d[i].score==1){
             printf("Score: B \n");
         }
         else if(d[i].score==2){
             printf("Score: C \n");
         }
         else if(d[i].score==3){
             printf("Score: D \n");
         }
         else{
             printf("Score: F \n");
         }
         printf("\n");
     }   
    }
}

void findHighestScoringStudent(struct Student h[MAX_STUDENTS],int l){
    if (l==0){
        printf("No students to Display");
    }
    else{
        printf("Highest-scoring student:\n");
        int f=0;
        for(int i=0;i<MAX_STUDENTS;i++){
            if(h[i].score<h[f].score){
                f=i;
            }
        }
        printf("Name: %s\n",h[f].name);
        printf("Age: %d\n",h[f].age);
        if(h[f].score==0){
                printf("Score: A \n");
            }
            else if(h[f].score==1){
                printf("Score: B \n");
            }
            else if(h[f].score==2){
                printf("Score: C \n");
            }
            else if(h[f].score==3){
                printf("Score: D \n");
            }
            else{
                printf("Score: F \n");
            }
        }
    
}

int main(){
    int choice;
    int i=0;
    struct Student s[MAX_STUDENTS];
    do{
        scanf("%d",&choice);
        switch(choice){
            case 1:
                addStudent(s,i);
                i++;
                break;
            case 2:
                displayStudents(s,i);
                break;
            case 3:
                findHighestScoringStudent(s,i);
                break;
            case 4:
                printf("Exiting the program. Thank you for using our system!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
       }
    } while (choice!=4);
    return 0;
}