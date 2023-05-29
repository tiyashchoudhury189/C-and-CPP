#include<stdio.h>
#include<conio.h>
void printboard();
int checkwin();
void system();
char b[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
void main()
{
	int player=1, input, status=-1;
	printboard();
	printf("\n\t\t\t\t\t=======================================GAME RULES========================================\n");
	printf("\t\t\t\t\t1) Players take turns putting their marks in empty squares\n");
	printf("\t\t\t\t\t2) The first player to get 3 of her marks in a row (up, down or diagonally) is the winner\n"); 
	printf("\t\t\t\t\t3) When all 9 squares are full, the game is over\n");
	printf("\t\t\t\t\t4) If no player has 3 marks in a row, the game ends in a tie\n");
	printf("\t\t\t\t\t======================================GAME SETTINGS======================================\n");
	printf("\t\t\t\t\t1) The Default Move for Player 1 is = 'X'\n");
	printf("\t\t\t\t\t2) The Default Move for Player 2 is = 'O'\n");
	printf("\t\t\t\t\t3) If Any Player Gives Invalid Input, then that Player will lose that move\n");
	printf("\t\t\t\t\t=========================================================================================\n");
	while(status==-1)
	{
		player=(player%2==0)?2:1;
		char mark=(player==1)?'X':'O';
		printf("\n\t\t\t\t\tPlease Enter Number for Player %d From your Keyboard : ", player);
		scanf("%d", &input);
		if(input<1 || input>9)
		{
			printf("\n\t\t\t\t\tInvalid Input! Please enter any Number Between 1 to 9 from your keyboard.\n\n");
		}
		b[input]=mark;
		printboard();
		int result=checkwin();
		if(result==1)
		{
			printf("\t\t\t\t\t\t\tCongratulations Player %d! You Won this Match!\n", player);
			printf("\t\t\t\t\tThank You for Playing! Please Visit Again! Press Enter to exit system!\n");
			printf("\t\t\t\t\t----------------------------------------------------------------------\n");
			return;
		}
		else if(result==0)
		{
			printf("\t\t\t\t\t\t   This is a Draw Match! Both Players Played Well!\n");
			printf("\t\t\t\t\tThank You for Playing! Please Visit Again! Press Enter to exit system!\n");
			printf("\t\t\t\t\t----------------------------------------------------------------------\n");
			return;
		}
		player++;
	}
}
void printboard()
{
	printf("\n\n\t\t\t\t\t\t\t\t\t======TIC-TAC-TOE=====\n");
	printf("\t\t\t\t\t\t\t\t\t {BY-TIYASH-CHOUDHURY}\n");
	printf("\t\t\t\t\t\t\t\t\t======================\n");
	printf("\t\t\t\t\t\t\t\t\t       |       |     \n");
	printf("\t\t\t\t\t\t\t\t\t   %c   |   %c   |   %c \n", b[1], b[2], b[3]);
	printf("\t\t\t\t\t\t\t\t\t_______|_______|______\n");
	printf("\t\t\t\t\t\t\t\t\t       |       |     \n");
	printf("\t\t\t\t\t\t\t\t\t   %c   |   %c   |   %c \n", b[4], b[5], b[6]);
	printf("\t\t\t\t\t\t\t\t\t_______|_______|______\n");
	printf("\t\t\t\t\t\t\t\t\t       |       |     \n");
	printf("\t\t\t\t\t\t\t\t\t   %c   |   %c   |   %c \n", b[7], b[8], b[9]);
	printf("\t\t\t\t\t\t\t\t\t       |       |     \n");
}
int checkwin()
{
	if(b[1]==b[2] && b[2]==b[3])
	{
		return 1;
	}
	if(b[1]==b[4] && b[4]==b[7])
	{
		return 1;
	}
	if(b[7]==b[8] && b[8]==b[9])
	{
		return 1;
	}	
	if(b[3]==b[6] && b[6]==b[9])
	{
		return 1;
	}	
	if(b[1]==b[5] && b[5]==b[9])
	{
		return 1;
	}
	if(b[3]==b[5] && b[5]==b[7])
	{
		return 1;
	}
	if(b[2]==b[5] && b[5]==b[8])
	{
		return 1;
	}
	if(b[4]==b[5] && b[5]==b[6])
	{
		return 1;
	}
	int count=0, i;
	for(i; i<=9; i++)
	{
		if(b[i]=='X' || b[i]=='O')
		{
			count++;
		}
	}
	if(count==9)
	{
		return 0;
	}
	return -1;
}
