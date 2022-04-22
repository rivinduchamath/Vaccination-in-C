//A campus has decided to collect the coved-19 vaccination details of their students. The campus wants to know the following information

//1. Total number of students who has not taken any vaccination
//
//2. Total number of students who has taken only one dose
// 3. Total number of students who has taken only two doses
//
//4. Total number of students who has taken all three doses
//
//Also campus wants to know
//
//1. Total number of students who has taken sinopharm
//
//2. Total number of students who has taken plizer
//
//3.Total number of suntents who has taken modema
//
//Write a program which reads the vaccine type (S- sinopharm, P-plier. M- mudemmat) and number of doses from the keyboard and find and display the above details. Assume that a student takes all the doses from a single vaccine type.
//
// The number of students to the campus should entered from the keyboard at the beginning of the program and program should allow to enter the details of all the students
//




 // Online C compiler to run C program online
 #include <stdio.h>

 struct student {
                 char itNumber[20];
                 char name[20];
                 char address[20];
                 int doseCount;
                 int vaccine;
                };
     int getdose();
     int getVaccineType();
 int main() {
            int i,n;
            int doseNone =0,doseOne=0,doseTwo=0,doseThree=0;
            int stdCount=0, sinopharm=0, plier=0,mudemmat=0;
              printf("Enter Number of Students: ");
              scanf("%d",&n);

         struct student arr[n];

         for(i=0; i<n; i++)
         {
         printf("Enter It Number of Student %d: ",(i+1));
         scanf("%s", arr[i].itNumber);
         printf("Enter Name of Student %d: ",(i+1));
         scanf("%s", arr[i].name);
         printf("Enter Address of Student %d: ",(i+1));
         scanf("%s", arr[i].address);
         printf("Enter Number of dose: (0,1,2,3) ");
                 int input = 0;
         input = getdose();

         while (!((input <= 3) && (input >= 0))) {
             printf("The Dose number Invalid. Please Enter 0,1,2 or 3 :");
             //input another number
             input = getdose();
         }
          arr[i].doseCount = input;

         if(input == 0 ){
             doseNone++;
         }else if(input == 1){
             doseOne++;
         } else if(input == 2){
             doseTwo++;
         } else {
             doseThree++;
         }


          if((input > 0)){
          int numb = 0;
         printf("Enter Vaccine Type (1 = S- sinopharm, 2 = P-plier, 3 = M- mudemmat) :");

         numb = getVaccineType();
         arr[i].vaccine =numb;
         if(numb == 1 ){
             sinopharm++;
         }
         if(numb == 2 ){
             plier++;
         }
         if(numb == 3 ){
             mudemmat++;
         }

          } else{
              arr[i].vaccine = 0;
          }

         }

             printf("\nDisplaying Students Information:\n\n");

    for (i = 0; i < n; i++) {
         printf("IT Number: %s ", arr[i].itNumber);
         printf("First name: %s ", arr[i].name);
         printf("Address: %s ", arr[i].address);
         printf("Dose: %d ", arr[i].doseCount);
         printf("Vaccine: %d ", arr[i].vaccine);
         printf("\n");
     }
     printf("\n");
     printf("\n");
     printf("Total Number Of Students Not taken any vaccination : %d \n", doseNone);
     printf("Total Number Of Students One Dose Only : %d \n", doseOne);
     printf("Total Number Of Students Two Dose Only: %d \n", doseTwo);
     printf("Total Number Of Students All Three Dose: %d \n", doseThree);

     printf("\n++++++++++++++++++++++++++++++++\n\n");

     printf("Total number of students  taken sinopharm %d \n",sinopharm);
     printf("Total number of students  taken  plizer  %d \n",plier);
     printf("Total number of students  taken modema %d \n",mudemmat);

     return 0;
 }
 int getdose() {
     int number;
     scanf("%d", &number);
     return (number);
 }
 int getVaccineType(){
     int num;
     char type;
     scanf("%s", &type);

     if(type == 'S' ){
            num =1;
         }
         if(type == 'P' ){
             num = 2;
         }
         if(type == 'M' ){
             num =3;
         }
     return (num);
}