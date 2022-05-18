#include <stdio.h>


float circleArea(float radious);  
float rectangleArea(float width, float length);
float gardenArea(float length, float width, float radiousPond);
float calcCost(int typeOfGrass, float area);

int main() {
           float radious,circleAreas,width, length, recArea, radiousPond, areaGardenWithoutPond, cost;
           int typeGrass;
          
             printf("Enter The Radious of Circle: ");
             scanf("%f",&radious);
             circleAreas = circleArea(radious);
             printf("The area of the circle is %f\n",circleAreas);
             
             printf("Enter The width of Rectangle: ");
             scanf("%f",&width);
             printf("Enter The length of Rectangle: ");
             scanf("%f",&length);
             recArea = rectangleArea(width,length);
             printf("The area of the Rectangle is %f\n",recArea);
             
             printf("Enter The Radious of Pond: ");
             scanf("%f",&radiousPond);
             
             areaGardenWithoutPond =  gardenArea(length, width, radiousPond);
             float totalGardernArea = areaGardenWithoutPond + circleAreas;
             printf("The Total area of the Grass Cover Area is %f\n",totalGardernArea);
             
             
     printf("The Type Of Grass\n");
     printf("Malayasian Grass = Rs.50 \n ");
     printf("Australian  Grass = Rs.60\n");
     printf("Green Carpet Grass = Rs.70\n");
             
             
             printf("Enter The Type Of Grass: ");
             scanf("%d",&typeGrass);
             
             cost = calcCost( typeGrass,  totalGardernArea);
              printf("The cost for Grass Cover Area is %f\n",cost);
             
       
}
float calcCost(int typeGrass, float area){

    
    float price, cost;
            if(typeGrass == 1){
                 price = 50;
                 
             }
            if(typeGrass == 2){
                 price = 60;
                 
             }
             if(typeGrass == 3){
                 price = 70;
                 
             } else{
                 price = 0;
             }
             cost = price * area;
             
       return cost;
}

float gardenArea(float length, float width, float radiousPond){
    float areaOfPond = circleArea(radiousPond);
    float recArea =  rectangleArea(width,length);
    
    float value = recArea - areaOfPond;
    
    return value;
    
    
}

float rectangleArea(float width, float length){
   int area = length * width;
    return (area);
}

float circleArea(float r) {    
    int area = 3.14*r*r;;
    return (area);
}
