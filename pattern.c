#include <stdio.h>

int main(){
int i,j,k;

    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1 || j==5 || i==3)
                printf("* ");
            else 
                printf("  ");    
        }
        for (k=i; k<=4;k++)
            printf(" ");
            for (j=1;j<=i; j++){
                if(i!=5){
                    if(i==3 && j==2)
                        printf("  ");
                     else 
                        printf("* ");
                    
                    }else if(i==5 && (j==1 || j==i)) 
                        printf("* ");
                     else 
                        printf("  ");
                }
            for (k=i; k<=4; k++)
                printf(" ");
                for(j=1;j<=5;j++){
                    if(i==1 || j==1 || i==3 || (j==5 &&i<=3)){
                        printf("* ");
                    } else {
                        printf("  ");
                    }
                    
                }
                for(j=1;j<=5;j++){
                    if(i==1 || j==1 || i==3 || (j==5 && i<=3))
                    printf("* ");
                    else 
                    printf("  ");
                }

                for(j=1;j<=5;j++){
                    if(i==1 && (j==1 || j==5 ) || (i==2 && (j==2|| j==4 ))|| (i>=3 && j==3))
                    printf("* ");
                    else 
                    printf ("  ");
                } 

            printf("\n");
            }
            printf("\n\n");
            for(i=1;i<=5;i++){
                for(k=1;k<=5;k++)
                    printf("  ");
                for(j=1;j<=5;j++){
                    if(j==1 || j==5 || i==j)
                    printf("* ");
                    else 
                    printf("  ");
                } 
               for(k=1;k<=2;k++)
               printf("  "); 
               for(j=1;j<=5;j++){
                    if(i==1 || i==3 || i==5 || j==1)
                    printf("* ");
                    else
                    printf("  ");
               }

               for (k = 1; k <= 2; k++)
                   printf(" ");
                for(j=1;j<=5;j++){
                    if(j==1 || j==5 ||(i>=3 && i==j) || (i==4 && j==2))
                    printf("* ");
                    else 
                    printf("  ");
                }   
               printf("\n");
            }
            printf("\n\n");
            for(i=1;i<=5;i++){

            for (j = 1; j <= 5; j++)
            {
                if (i == 1 && (j == 1 || j == 5) || (i == 2 && (j == 2 || j == 4)) || (i >= 3 && j == 3))
                    printf("* ");
                else
                    printf("  ");
            }
            for (k = 1; k <= 2; k++)
                printf("  ");
            for (j = 1; j <= 5; j++)
            {
                if (i == 1 || i == 3 || i == 5 || j == 1)
                    printf("* ");
                else
                    printf("  ");
            }
            for (k = i; k <= 4; k++)
                printf(" ");
            for (j = 1; j <= i; j++)
            {
                if (i != 5)
                {
                    if (i == 3 && j == 2)
                        printf("  ");
                    else
                        printf("* ");
                }
                else if (i == 5 && (j == 1 || j == i))
                    printf("* ");
                else
                    printf("  ");
            }
            for (k = i; k <= 4; k++)
                printf(" ");
            for (j = 1; j <= 5; j++)
            {
                if (i == 1 || j == 1 || i == 3 || (j == 5 && i <= 3)|| (i==j && j>3))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
            }
    return 0;
    }

