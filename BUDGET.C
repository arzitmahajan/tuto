#include<stdio.h>
#include<conio.h>
int main(){
    int prevbal=4000,latbuy,totbill,topay,currbal;
    clrscr();
    printf("Your previous balance is %d\n",prevbal);
    printf("Enter your latest buy price\n");
    scanf("%d",&latbuy);
    totbill=prevbal+latbuy;
    printf("Your total bill amount is %d\n",totbill);
    printf("Enter the amount you want to pay\n");
    scanf("%d",&topay);
    currbal=totbill - topay;
    if(currbal>10000){
    printf("you are not eligible to buy any more as your current balance is %d\n",currbal);}
    else{
    printf("you can buy \n and your current balance is %d",currbal);}
    getch();
    return 0;
}