#include<stdio.h>
#include<math.h>
main()
{
	int choice;
	do
	{
		printf("\n\n\n\n\t\t\t\t\t\t********************************************************************************\n");
		printf("\t\t\t\t\t\t:::::::::::::::::::::::::::::::::::CALCULATOR:::::::::::::::::::::::::::::::::::\n");
		printf("\t\t\t\t\t\t::::::::::::::::::::::::::DEVELOPED BY TIYASH CHOUDHURY:::::::::::::::::::::::::\n");
		printf("\t\t\t\t\t\t********************************************************************************\n\n");
		printf("\t\t\t\t\t\t  Please Enter 1 From your Keyboard for Addition and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 2 From your Keyboard for Substraction and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 3 From your Keyboard for Multiplication and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 4 From your Keyboard for Division and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 5 From your Keyboard for Exponents and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 6 From your Keyboard for Square Root and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 7 From your Keyboard for Percentage and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 8 From your Keyboard for Factorial and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t  Please Enter 0 From your Keyboard to Exit Calculator and then Press Enter Key\n\n");
		printf("\t\t\t\t\t\t********************************************************************************\n\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
			{
				float num1, num2, num3;
				printf("\t\t\t\t\t\tPlease Enter 1st Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num1);
				printf("\t\t\t\t\t\tPlease Enter 2nd Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num2);
				num3=num1+num2;
				printf("\t\t\t\t\t\tThe Result of Addition is : %f\n", num3);
				printf("\t\t\t\t\t\t-------------------------------------------------------------------------\n\n");
				break;
			}
			case 2:
			{
				float num1, num2, num3;
				printf("\t\t\t\t\t\tPlease Enter 1st Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num1);
				printf("\t\t\t\t\t\tPlease Enter 2nd Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num2);
				num3=num1-num2;
				printf("\t\t\t\t\t\tThe Result of Substraction is : %f\n", num3);
				printf("\t\t\t\t\t\t-------------------------------------------------------------------------\n\n");
				break;
			}
		    case 3:
			{
				float num1, num2, num3;
				printf("\t\t\t\t\t\tPlease Enter 1st Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num1);
				printf("\t\t\t\t\t\tPlease enter 2nd Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num2);
				num3=num1*num2;
				printf("\t\t\t\t\t\tThe Result of Multiplication is : %f\n", num3);
				printf("\t\t\t\t\t\t--------------------------------------------------------------------------\n\n");
				break;
			}
			case 4:
			{
				float num1, num2, num3;
				printf("\t\t\t\t\t\tPlease Enter 1st Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &num1);
				printf("\t\t\t\t\t\tPlease Enter 2nd Number From your keyboard and then Press Enter Key : ");
				scanf("%f", &num2);
				num3=num1/num2;
				printf("\t\t\t\t\t\tThe Result of Division is : %f\n", num3);
				printf("\t\t\t\t\t\t--------------------------------------------------------------------------\n\n");
				break;
			}
			case 5:
			{
				double num1, num2, num3;
				printf("\t\t\t\t\t\tPlease Enter Base From your Keyboard and then Press Enter Key : ");
				scanf("%lf", &num1);
				printf("\t\t\t\t\t\tPlease Enter Power From your Keyboard and then Press Enter Key : ");
				scanf("%lf", &num2);
				num3 = pow(num1,num2);
				printf("\t\t\t\t\t\tThe Result of Exponents is : %f\n", num3);
				printf("\t\t\t\t\t\t--------------------------------------------------------------------------\n\n");
				break;
			}
			case 6:
			{
				double num, root;
				printf("\t\t\t\t\t\tPlease Enter the Number From your Keyboard and then Press Enter Key : ");
				scanf("%lf", &num);
				root= sqrt(num);
				printf("\t\t\t\t\t\tThe Result of Square Root is : %f\n", root);
				printf("\t\t\t\t\t\t--------------------------------------------------------------------------\n\n");
				break;
			}
			case 7:
			{
				float p, n, t;
				printf("\t\t\t\t\t\tPlease Enter your Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &n);
				printf("\t\t\t\t\t\tPlease Enter Total Number From your Keyboard and then Press Enter Key : ");
				scanf("%f", &t);
				p=(n/t)*100;
				printf("\t\t\t\t\t\tThe Percentage is : %0.2f%%\n", p);
				printf("\t\t\t\t\t\t--------------------------------------------------------------------------\n\n");
				break;
			}
			case 8:
			{
				int i, n, f=1;
				printf("\t\t\t\t\t\tPlease Enter Number From your Keyboard and then Press Enter Key : ");
				scanf("%d", &n);
				for(i=1; i<=n; i++)
				{
					f*=i;
				}
				printf("\t\t\t\t\t\tThe Factorial is : %d\n", f);
				printf("\t\t\t\t\t\t--------------------------------------------------------------------------\n\n");
				break;
			}
			case 0:
			{
				printf("\t\t\t\t\t\t\t\t\t Thank You for using our Calculator\n");
				printf("\t\t\t\t\t\t\t\t\t\t Please visit again\n");
				printf("\t\t\t\t\t\t\t\t\t\t---------------------\n");
				printf("\t\t\t\t\t\t\t\t Press Enter Key from your Keyboard to Exit Screen");
			}
						
		}
	}
	while(choice!=0);
	return 0;
}
