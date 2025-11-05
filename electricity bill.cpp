/*write a c program to generate electricity bill based on the following information
if units are 1-50 unit cost is rs.2.5 and charge is rs.30
if units are 51-100 unit charge is rs.3 and charge is rs.50
if units are 101-200 unit charge is rs.3.5 and charge is rs.75
if units are 201-300 unit charge is rs.4 and charge is rs.100
if units are more than 300 unit cost is rs.5 and charge is rs.125*/
#include <stdio.h>
int main()
{
	int units;
	float uc,charge,total;
	printf("enter no.of units consumed");
	scanf("%d",&units);
	if(units<=50)
	{
		uc = units * 2.50;
		charge = 30;
	}
	else if(units>=51 && units<=100)
	{
		uc = units *3.00;
		charge = 50;
	}
	else if(units>=101 && units<=200)
	{
		uc = units * 3.50;
		charge = 75;
	}
	else if(units>=201 && units<=300)
	{
		uc = units * 4.0;
		charge = 100;
	}
	else 
	{
		uc = units * 5.0;
		charge = 125;
	}
	total = uc + charge;
	printf("The total electricity bill amount is %f",total);
}
