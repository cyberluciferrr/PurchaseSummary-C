#include<stdio.h>
int main()
{

char customer;
int choice; 
float length,width;
float totalprice=0;
int condition1;
int condition2;
int condition3;
int a,b,y;

printf("*****Andy's Flooring*****\n\nHere we provide the best of the best flooring materials\nLet's start with your order!\n\n");
printf("Woods we provide along with their price per square meter are as following\n\n");
printf("1.Laminate    $29.99\n2.Pine        $39.99\n3.Oak         $54.99\n\n");

printf("Please enter your initial: ");
scanf("%c", &customer);
printf("\n");

printf("Please enter the number of purchase you have to make (only one summary is generated for an item at a time): ");
scanf("%d", &a);
printf("\n");
b=a-1;
float quotations[b][4];

for(int x=0; x<=b; x++)
{    
do
{
condition1=0;    
printf("Please enter the length of room in meters: ");
scanf("%f", &length);
printf("\n");
if(length>=1.5 && length<=10)
{
condition1=1;
quotations[x][1]=length;
}
else{printf("Enter value in between 1.5m and 10m inclusively!\n");}
}
while(condition1==0);

do
{
condition2=0;    
printf("Please enter the width of room in meters: ");
scanf("%f", &width);
printf("\n");
if(width>=1.5 && width<=10)
{
condition2=1;
quotations[x][2]=width;
}
else{printf("Enter value in between 1.5m and 10m inclusively!\n");}
}
while(condition2==0);

do
{
condition3=0;    
printf("Enter the assigned number of the type of wood you wish to buy: ");
scanf("%d", &y);
printf("\n");
if(y>=1 && y<=3)
{
condition3=1;
choice=y;
}
else{printf("Choose from the given choices!\n");}
}
while(condition3==0);

quotations[x][3]=quotations[x][1]*quotations[x][2];

switch (choice)
{
case 1:
quotations[x][4]=quotations[x][3]*29.99;
break;
case 2:
quotations[x][4]=quotations[x][3]*39.99;
break;
case 3:
quotations[x][4]=quotations[x][3]*54.99;
break;
}

printf("Mr/Mrs %c, Summary of your order is as follows:\n\n", customer);
switch (choice)
{
case 1:
printf("Choice of wood: Laminate\n");
break;
case 2:
printf("Choice of wood: Pine\n");
break;
case 3:
printf("Choice of wood: Oak\n");
break;
}
printf("Total area of your floor: %f meter square\n", quotations[x][3]);
printf("Price: $%f\n\n\n", quotations[x][4]);

totalprice=quotations[x][4]+totalprice;
}

printf("Mr/Mrs %c, total amount to be paid of your order is: $%f\n\n", customer, totalprice);
printf("***Thank You For Shopping With Us!***\n\n");
return 0;
}
