// Test2.cpp: Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "math.h"
#include "gotoxy.h"
#include "wait.h"
#include <conio.h>




void map() {

	gotoxy(5, 10);
	printf("--------------------------\n");
	gotoxy(5, 11);
	printf("|     -----   -------  --|\n");
	gotoxy(5, 12);
	printf("|        |-   ----   ----|\n");
	gotoxy(5, 13);
	printf("|      |  |------|-   ----|\n");
	gotoxy(5, 14);
	printf("|     -| |-| |-------    |\n");
	gotoxy(5, 15);
	printf("|   ---| |--| |----------|\n");
	gotoxy(5, 16);
	printf("|  ----| |---   -------- |\n");
	gotoxy(5, 17);
	printf("|    --| |    -----      |\n");
	gotoxy(5, 18);
	printf("|     -| |---------------|\n");
	gotoxy(5, 19);
	printf("|            ----------- |\n");
	gotoxy(5, 20);
	printf("|--------|               |\n");
	gotoxy(5, 21);
	printf("--------------------------");
}
void spielerbewegung() {
	
	int x = 1;
	int y = 1;
	int x2 = 1;
	int x3 = 1;
	char c = _getch();
	
	_getch();
	while (1)
	{
		SetCursorPos(x, y);
		if (_kbhit())

		{
			c = _getch();

		}
		switch (c) {



		case'w':
			gotoxy(x, y);
			printf(" ");
			gotoxy(x,y= y - 1);
			printf("O");
			wait_milliseconds(200);
			break;

		case'a':
			gotoxy(x=x-1, y);
			printf("O");	
			gotoxy(x2 = x + 1, y);
			printf(" ");
			wait_milliseconds(200);
			break;

		case's':
			gotoxy(x, y);
			printf(" ");
			gotoxy(x, y=y + 1);
			printf("O");			
			wait_milliseconds(200);
			break;
		case'd':
			gotoxy(x = x+1, y);
			printf("O");	
			gotoxy(x3 = x - 1, y);
			printf(" ");
			wait_milliseconds(20);
			break;
		}
	}
}




int main()
{
	system("color 8");
	spielerbewegung();





    return 0;
}

