#include <stdio.h>
//function prototype 

float calculateBill(float units_consumed);

int main() {
    float units_consumed,bill;
    printf("Enter the number of units consumed: \t");
    scanf("%f",&units_consumed);
    bill=calculateBill(units_consumed);
    
    printf("\n");
    printf("Total electricity Bill \n");
    printf("======================== \n");
    printf("Initial unit consumed: %.2f \n", units_consumed);
    printf("Amount payable : ksh.%.2f \n", bill);
    printf("======================== \n");

    return 0;
}

//function definition 
float calculateBill(float units_consumed){
    float bill;

    if(units_consumed< 100){
        bill= 10 * units_consumed;
    }
    else if (units_consumed >= 100 && units_consumed <= 200){
        bill=(100*10) +(units_consumed-100) *15 ;
    }
    else if (units_consumed >= 200 >200){
        bill = (100*10) +(100*15) +(units_consumed-200) *20;
    }

    return bill;
}