#include<stdio.h>
int main(){
    printf("Enter a the number of rows \n");
    int rows;
    scanf("%d",&rows);
    printf("*\n*");
    for(int i=1;i<=rows;i++){
        for(int c=1;c<i;c++){
            if(c==1){
                printf("*%d",c);
            }
            else{
                printf("%d",c);
            }
            
        }
        
        for(int s=i;s>=1;s--){
            if(r==1){
                printf("%d*",s);
            }
            else{
                printf("%d",s);
            }
            
        }
        
       printf("\n");
    }

    for(int j=inp1-1;j>=1;j--){
        for(int c=1;c<=j;c++){
            if(c==1){
                printf("*%d",c);
            }
            else{
                printf("%d",c);
            }
        }
        
        for(int s=j-1;s>=1;s--){
            if(s==1){
                printf("%d*",s);
            }
            else{
                printf("%d",s);
            }
            
        }
        if (j!=1){
             printf("\n");
        }
       
       
    }
     printf("*\n*");
}
