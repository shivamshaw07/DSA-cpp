#include<stdio.h>
int main(){
    float bee,phy,maths,total;
    printf("Enter marks of Basic electrical engineering : ");
    scanf("%f",&bee);
    printf("Enter marks of Physics : ");
    scanf("%f",&phy);
    printf("Enter marks of Maths : ");
    scanf("%f",&maths);
    total = bee + phy + maths;
    float avg = total/3;
    printf("Total marks is : %0.2f\n",total);
    printf("Percentage obtained : %0.2f\n",avg);
    if(avg > 90){
        printf("You have secured Grade \"A+\"");
    }
    else if(avg < 90 && avg>80){
        printf("You have secured Grade \"A\"");
    }
    else if(avg > 70 && avg <80){
        printf("You have secured Grade \"B\"");
    }
    else if(avg > 60 && avg <70){
        printf("You have secured Grade \"C\"");
    }
    else if(avg >50 && avg<60){
        printf("You have secured Grade \"D\"");
    }
    else{
        printf("FAIL");
    }
    return 0;
}