#include <stdio.h>
int main()
{
float unit,total,charge;
char name[20];
// Accept Customer's name
printf("Enter the name : ");
gets(name);
// Accept No. of units consumed
printf("Enter the units : ");
scanf("%f",&unit);
charge=0;
if(unit>=1&&unit<=200) // Charge 80 paise per unit for the first 200 units
{
charge=0.8 * unit;
}
else if(unit>=201&&unit<=300) // Charge 80 paise per unit for the first 200 units and
{ // 90 paise per unit for the next 100 units
charge = 0.8*(200) + 0.9*(unit-200);
}
else if (unit > 300) //Charge 80 paise per unit for the first 200 units,
{ // 90 paise per unit for the next 100 units and
// one rupee per unit for all units above 300
charge = 0.8*(200) + 0.9*(100) + 1*(unit-300);

}
total=charge+100; // Add Meter charge of Rs. 100
if(total>400)
{
total = total + (0.15*total); // Add additional surcharge of 15 percent of total amount
}
// Display the electricity bill
printf("\n\nELECTRICITY BILL\n");
printf("----------------\n");
printf("\nName : %s\n",name);
printf("No. of units: %.2f\n",unit);
printf("Total Bill Amount: Rs. %.2f\n",total);
  printf("----------------\n");
return 0;
}
