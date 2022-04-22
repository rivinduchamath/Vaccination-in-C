#include <stdio.h>
#include <stdbool.h>

int main() {
     int value =3 ,depositAmount = 0,anualRate = 0;
     bool con = true;
    while(con){
    printf("\n######################################\n");
    printf("1. Simple Interest Calculator\n");
    printf("2. Compound Interest Calculator\n");
    printf("3. Exit\n");
    printf("Input Your Choise\n");
    printf("######################################\n");
    scanf("%d",&value);
            if(value == 3){
                  printf("Thank You for usding interest Calculator\n");
                  con = false;
            }

           if(value == 1 || value == 2){
               printf("Enter Deposit Amount : ");
               scanf("%d",&depositAmount);
               printf("Enter Anuval Interest Rate : ");
               scanf("%d",&anualRate);
                if(value == 1 ){

                    float simpleInterest = 0;
                    simpleInterest = depositAmount * anualRate *2;
                    printf("Your interest at end of 2 years : %f\n",simpleInterest );
                }
                               if(value == 2 ){

                    float compoundInterest = 0;
                    compoundInterest = depositAmount * (1+anualRate) *(1+anualRate)  - compoundInterest;
                    printf("Your compound Interest at end of 2 years : %f\n",compoundInterest );
                }
           }



    }


    return 0;
}