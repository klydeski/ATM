#include "ATM.H"
#include <stdio.h>
#include <conio.h>

float fast_cash(char *acc)
{
printf("\nyour current ballance is %.2f",bal);
printf("\nplease enter withdraw amount:");
scanf(" %f",&withd);

	if(withd <= bal && withd >= 0)
		{
			bal = bal - withd;
			printf("\nyou have withdrawn %.2f \nyour curent ballance is %d",withd,bal);
		}

	else
		{
			printf("\nerror: you have insuficient");
		}

printf("\npress any key to continue:");
break;
}
