#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define X_END 79
#define Y_END 24
//
//int main()
//{
//	int ch1, ch2;
//	
//	ch1 = getch();
//	ch2 = getch();
//	printf("%d %d\n",ch1, ch2);
//	printf("%X %X\n", ch1, ch2);
//	
//	return 0;
//}

//int main()
//{
//	unsigned char ch;
//	
//	do
//	{
//		ch = getch();
//		printf("%d %x : %c\n", ch, ch, ch);
//		
//	} while (ch != 13);
//	
//	return 0;
//}

//void GotoXY(int x, int y);
//void Move_LeftRight_Key(char chr, int *x, int *y);
//
//int main()
//{
//	char key;
//	int x = 0, y = 0;
//	
//	do
//	{
//		GotoXY(x, y);
//		printf("@");
//		key = getch();
//		key = getch();
//		Move_LeftRight_Key(key, &x, &y);
//	} while (key != 27);
//}
//
//void GotoXY(int x, int y)
//{
//	system("cls");
//	COORD Pos = {x,y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//	
//}
//
//void Move_LeftRight_Key(char key, int *x1, int *y1)
//{
//	switch(key)
//	{
//	case 75:
//		*x1 = *x1 - 1;
//		if(*x1 < 0) *x1 = X_END;
//		break;
//	case 77 :
//		*x1 = *x1 + 1;
//		if(*x1 > X_END) *x1 = 1;
//		break;
//		
//	case 72 :
//		*y1 = *y1 - 1;
//		if(*y1 < 0) *y1  = Y_END;
//		break;
//	case 80 :
//		*y1 = *y1 + 1;
//		if(*y1 > Y_END) *y1 = 0;
//		break;
//	}
//}
int main()
{
	int i=0;
	printf("%d", i%3);
}
