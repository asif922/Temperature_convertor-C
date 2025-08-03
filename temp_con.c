#include<stdio.h>
int main(){
    float celcius,fahrenheit,kelvin;
    int choice;
    printf("Temperature convertor Program\n");
    printf("1.Celcius to Fahrenheit\n");
    printf("2.Celcius to Kelvin\n");
    printf("3.Fahrenheit to Celcius\n");
    printf("4.Fahrenheit to Kelvin\n");
    printf("5.Kelvin to Celcius\n");
    printf("6.Kelvin to Fahrenheit\n");
    printf("Enter yout choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter temperature in Celcius: ");
            scanf("%f",&celcius);
            fahrenheit=(celcius*9/5)+32;
            printf("Temperature in Fahrenheit:%2f\n",fahrenheit);
            break;
        case 2:
            printf("Enter temperature in Celcius: ");
            scanf("%f",&celcius);
            kelvin=celcius+273.15;
            printf("Temperature in Kelvin:%2f\n",kelvin);
            break;
        case 3:
            printf("Enter temperature in Fahrenheit:");
            scanf("%f",&fahrenheit);
            celcius=(fahrenheit-32)/1.8;
            printf("Temperature in Celcius:%2f\n",celcius);
            break;
        case 4:
            printf("Enter temperature in Fahrenheit:");
            scanf("%f",&fahrenheit);
            kelvin=(fahrenheit-32)/1.8+273.15;
            printf("Temperature in kelvin:%2f\n",kelvin);
            break;
        case 5:
            printf("Enter temperature in Kelvin:");
            scanf("%f",&kelvin);
            celcius=kelvin-273.15;
            printf("Temperature in Celcius:%2f\n",celcius);
            break;
        case 6:
            printf("Enter temperarture in Kelvin:");
            scanf("%f",&kelvin);
            fahrenheit=(kelvin-273.15)*1.8+32;
            printf("Temperature in fahrenheit:%2f\n",fahrenheit);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
            break;           
    }
    return 0;
}
