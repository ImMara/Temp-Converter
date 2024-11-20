#include <stdio.h>

int main(){
    float value;
    int choice;
    float converted;

    printf("Press 0 to exit,1 to convert celsius to fahrenheit,2 to convert fahrenheit to celsius\n");
    scanf("%d",&choice);
    if( choice == 0){
        getchar();
    } else if (choice == 1){
        printf("Enter celsius value:");
        scanf("%f", &value);
        converted =( (9*value ) / 5)+32;
        printf("celsius:%.2f,fahrenheit:%.2f",value,converted);
    }else{
        printf("Enter farenheit value:");
        scanf("%f", &value);
        converted = (value - 32) / 1.8;
        printf("fahrenheit:%.2f,celsius:%.2f",value,converted);
    }


    return 0;
}