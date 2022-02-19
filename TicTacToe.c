#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char array[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
int player;
int computer;
int boshkatak = 9 ;

void print()
{
    system("cls");
    
    printf("\n _______________________\n");

    printf("|1      |2      |3      |\n");
    printf("|   %c   |   %c   |   %c   |\n", array[0], array[1], array[2]);
    printf("|_______|_______|_______|\n");

    printf("|4      |5      |6      |\n");
    printf("|   %c   |   %c   |   %c   |\n", array[3], array[4], array[5]);
    printf("|_______|_______|_______|\n");

    printf("|7      |8      |9      |\n");
    printf("|   %c   |   %c   |   %c   |\n", array[6], array[7], array[8]);
    printf("|_______|_______|_______|\n");
}

void input()
{
    do
    {
        printf("\nQaysi biri: ");
        scanf("%d", &player);
        player--;

    } while (array[player] != ' ' );

    array[player] = 'O';
}

bool boshkatak3()
{
    for ( int i = 0 ; i < 3 ; i++)
    {
        if ( array[i] != ' ')
            boshkatak--;
    } 
    if ( boshkatak == 0 )
    return true;
    else false;
}

void computerchoise()
{
    if ( player == 0 )
    {
        if ( array[2] == ' ')
            array[2] = 'X';
        else if ( array[6] == ' ' )
            array[6] = 'X';
        else if ( array[8] == ' ')
            array[8] = 'X';
        else
        {
            do 
            {
                computer = rand() % 9; 
            } while(array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 1)
    {
        if ( array[2] == ' ')
            array[2] = 'X';
        else if ( array[7] == ' ')
            array[7] = 'X';
        else if ( array[3] == ' ')
            array[3] = 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 2)
    {
        if ( array[0] == ' ')
            array[0] = 'X';
        else if ( array[4] == ' ')
            array[4] = 'X';
        else if ( array[8] == ' ')
            array[8] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 3)
    {
        if ( array[6] == ' ')
            array[6] = 'X';
        else if ( array[5] == ' ')
            array[5] = 'X';
        else if ( array[1] == ' ')
            array[1] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 4 )
    {
        if ( array[5] == ' ')
            array[5] = 'X';
        else if ( array[7] == ' ')
            array[7] = 'X';
        else if ( array[0] == ' ')
            array[0] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 5)
    {
        if ( array[1] == ' ')
            array[1] = 'X';
        else if ( array[3] == ' ')
            array[3] = 'X';
        else if ( array[8] == ' ')
            array[8] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 6 )
    {
        if ( array[0] == ' ')
            array[0] = 'X';
        else if ( array[2] == ' ')
            array[2] = 'X';
        else if ( array[8] == ' ')
            array[8] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 7)
    {
        if ( array[4] == ' ')
            array[4] = 'X';
        else if ( array[6] == ' ')
            array[6] = 'X';
        else if ( array[2] == ' ')
            array[2] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

    else if ( player == 8)
    {
        if ( array[4] == ' ')
            array[4] = 'X';
        else if ( array[6] == ' ')
            array[6] = 'X';
        else if ( array[2] == ' ')
            array[2] == 'X';
        else 
        {
            do 
            {
                computer = rand() % 9;

            }   while( array[computer] == ' ');
            array[computer] = 'X';
        }
    }

}

int checkwinner()
{
    if (    array[0] == array[1] && array[0] == array[2] && array[0] == 'O' ||
            array[3] == array[4] && array[3] == array[5] && array[3] == 'O' ||
            array[6] == array[7] && array[6] == array[8] && array[6] == 'O' ||
            array[0] == array[3] && array[0] == array[6] && array[0] == 'O' ||
            array[1] == array[4] && array[1] == array[7] && array[1] == 'O' ||
            array[2] == array[5] && array[2] == array[8] && array[2] == 'O' ||
            array[0] == array[4] && array[0] == array[8] && array[0] == 'O' ||
            array[2] == array[4] && array[2] == array[6] && array[2] == 'O' )
            {
            return 1;
            
            }


    else if (
        array[0] == array[1] && array[0] == array[2] && array[0] == 'X' ||
            array[3] == array[4] && array[3] == array[5] && array[3] == 'X' ||
            array[6] == array[7] && array[6] == array[8] && array[6] == 'X' ||
            array[0] == array[3] && array[0] == array[6] && array[0] == 'X' ||
            array[1] == array[4] && array[1] == array[7] && array[1] == 'X' ||
            array[2] == array[5] && array[2] == array[8] && array[2] == 'X' ||
            array[0] == array[4] && array[0] == array[8] && array[0] == 'X' ||
            array[2] == array[4] && array[2] == array[6] && array[2] == 'X' )
            {
            return 2;
            
            }
}



int main()
{
    
    print();
    input();
    boshkatak3();
    computerchoise();
    print();

    input();
    boshkatak3();
    computerchoise();
    print();

    input();
    boshkatak3();
    computerchoise();
    print();

    if (checkwinner() == 1 )
    {
    printf("\nYUTDINGIZ\n\n");
    return 2;
    }
    else if (checkwinner() == 2)
    {
    printf("\nYUTQAZDINGIZ\n\n");
    return 2;
    }

    input();
    boshkatak3();
    computerchoise();
    print();

    if (checkwinner() == 1 )
    {
    printf("\nYUTDINGIZ\n\n");
    return 2;
    }
    else if (checkwinner() == 2)
    {
    printf("\nYUTQAZDINGIZ\n\n");
    return 2;
    }

    input();
    print();

    if (checkwinner() == 1 )
    {
    printf("\nYUTDINGIZ\n\n");
    return 2;
    }
    else if (checkwinner() == 2)
    {
    printf("\nYUTQAZDINGIZ\n\n");
    return 2;
    }
    else 
    printf("\nDURANG\n\n");

    getch();

}