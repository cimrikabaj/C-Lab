#include<stdio.h>
#include<conio.h>
int gameover();
char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char n1[50][50],n2[50][50];
int row,column,draw=1;
char player='X';
void layout();
void turn();
void main()
{
	int i,j;
	    //printf("Player 1 Please Enter Your Name:");
	    //gets(n1);
	    //printf("Player 2 Please Enter Your Name:");
	    //gets(n2);
	    while(gameover())
	    {
	    layout();
	    turn();
	    gameover();
	    layout();
	}
	if (player=='O'&& draw==1)
	printf("congratulations!! player 1 wins");
	else if(player=='X'&& draw==1)
	printf("player 2 wins");
    else
	printf("GAME DRAW");
}
void layout()
{
	system("cls");
	printf("\t\t\t T I C  T A C  T O E\n");
     printf("PLAYER 1[X]\nPLAYER 2[O]\n");
		printf("\t\t\t      |      |      \n");
	    printf("\t\t\t      |      |      \n");
	    printf("\t\t\t   %c  |   %c  |   %c  \n",board[0][0],board[0][1],board[0][2]);
	    printf("\t\t\t      |      |      \n");
	    printf("\t\t\t______|______|______\n");
	    printf("\t\t\t      |      |      \n");
	    printf("\t\t\t  %c   |   %c  |   %c \n",board[1][0],board[1][1],board[1][2]);
	    printf("\t\t\t      |      |      \n");
	    printf("\t\t\t______|______|______\n");
		printf("\t\t\t      |      |      \n");
		printf("\t\t\t  %c   |   %c  |   %c \n",board[2][0],board[2][1],board[2][2]);
		printf("\t\t\t      |      |      \n");
		printf("\t\t\t      |      |      \n");
		printf("\t\t\t      |      |      \n");
	
}
void turn()
{
	int choice;
	if (player=='X')
	printf("It's your turn 1",n1);
	if(player=='O')
	printf("It's your turn 2",n2);
	scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				row=0;column=0;
				break;
			case 2:
				row=0;column=1;
				break;
			case 3:
				row=0;column=2;
				break;
			case 4:
				row=1;column=0;
				break;
			case 5:
				row=1;column=1;
				break;
			case 6:
				row=1;column=2;
				break;
			case 7:
				row=2;column=0;
				break;
			case 8:
				row=2;column=1;
				break;
			case 9:
				row=2;column=2;
				break;
			default:
				printf("\t\t\tINVALID INPUT\n");
				break;
			}
		if(player=='X'&& board[row][column]!='X' && board[row][column]!='O')
		{
			board[row][column]='X';
			player='O';
		}
		else if(player=='O'&& board[row][column]!='X' && board[row][column]!='O')
		{
			board[row][column]='O';
			player='X';
			
		}
		else
		{
			printf("\t\t\tBOX ALREADY TAKEN!!! PLEASE TRY AGAIN\n");
			turn(); 
		}
	}
		
int gameover()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][0]==board[i][2]||board[0][i]==board[1][i]&&board[0][i]==board[2][i])
		return 0;
	}
	if(board[0][0]==board[1][1]&& board[0][0]==board[2][2]||board[0][2]==board[1][1]&& board[0][2]==board[2][0])
	return 0;
	//check for filling of boxes
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		if(board[i][j]!='X'&&board[i][j]!='O')
		return 1;
}
	
	draw=0;
	return 1;
}
