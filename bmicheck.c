#include <stdio.h>

int main(){
    float weight, height, bmi;
    int underweight=0 , normal=0, overweight=0, obese=0;
    printf("Enter your weight in kg: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("Your BMI is %lf\n", bmi);
    if(bmi < 18.5){
        printf("You are underweight\n");
        underweight++;
    }else if(bmi < 25){
        printf("You are normal\n");
        normal++;
    }else if(bmi < 30){
        printf("You are overweight\n");
        overweight++;
    }else{
        printf("You are obese\n");
        obese++;
    }
    printf("Underweight people: %d\n", underweight);
    printf("Normal people: %d\n", normal);
    printf("Overweight people: %d\n", overweight);
    printf("Obese people: %d\n", obese);
    system("pause");
    return 0;
}