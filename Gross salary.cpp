#include<stdio.h>
int main()
{   
    float salary,Dearnessallowance,HouserentAllowance,grosssalary;
    printf("Enter the basic salary\n");
    scanf("%f",&salary);
    Dearnessallowance=(salary*0.4);
    HouserentAllowance=(salary*0.2);
    grosssalary=salary+Dearnessallowance+HouserentAllowance;
    printf("Your gross salary is = %.2f",grosssalary);
    return 0;
    
}