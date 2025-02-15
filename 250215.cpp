#include <stdio.h>
#include <conio.h>
#include <windows.h>

//int main()
//{
//	int x,y;
//	COORD pos = {40, 12};
//	
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("Hello C3coding");
//	getch();
//	
//	return 0;
//}

//int main()
//{
//	int x,y;
//	COORD pos = {1,0};
//	
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 10;
//	pos.Y = 2;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 20;
//	pos.Y = 5;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 40;
//	pos.Y = 12;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	pos.X = 40;
//	pos.Y = 24;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//	printf("←: 커서 시작위치(%d %d)", pos.X, pos.Y);
//	getch();
//	
//	return 0;
//	
//} 

//void GotoXY(int x, int y);

//int main()
//{
//	COORD pos;
//	
//	do
//	{
//		pos.X = 30;
//		pos.Y = 24;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//		
//		printf("좌표 : ");
//		scanf("%d %d", &pos.X, &pos.Y);
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//		printf("%s", "♡");
//		
//		pos.X = 30;
//		pos.Y = 24;
//		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//		printf("                     ");
//		 
//	} while (1);
//	
//	return 0;
// } 
 
// void GotoXY(int x, int y);
// void MyDelay(int d);
// 
// int main()
// {
// 	int i;
// 	int s;
// 	
// 	printf("출력 속도 : ");
// 	scanf("%d", &s);
// 	for (i = 1; i <= 10; i ++)
// 	{
// 		GotoXY(40, i+1);
// 		printf("%d", i);
// 		Sleep(s*100); 		
//	}
//	 
//	return 0;
// }
// 
// void GotoXY(int x, int y)
// {
// 	COORD pos = {x,y};
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
// 	
// }

//void GotoXY(int x, int y);
//void MyDelay(int d);
//
//int main()
//{
//int s;
//int g=0;
//for (int i = 10; i<= 100; i+=10)
//{
//	GotoXY(20+g,4);
//	printf("%d", i);
//	g+=3;
//	Sleep(1000);
//}
//return 0;
//}
// void GotoXY(int x, int y)
// {
// 	COORD pos = {x,y};
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}

//void GotoXY(int x, int y);
//void MyDelay(int d);
//
//int main()
//{
//	int a=0;
//	for(int i = 10; i<= 100; i+=10)
//	{
//		GotoXY(40,0+a);
//		printf("%d",i);
//		a+=1;
//		Sleep(1000);
//	}
//	return 0;
//}
//
// void GotoXY(int x, int y)
// {
// 	COORD pos = {x,y};
// 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}

//void GotoXY(int x, int y);
//void MyDelay(int d);
//
//int main()
//{
//	int a=0;
//	int i = 999;
//	while(i>=111)
//	{
//		GotoXY(40,10-a);
//		printf("%d",i );
//		a+=1;
//		Sleep(1000);
//		i-=111;
//		
//		
//	}
//	return 0;
//	
//}
//
//void GotoXY(int x, int y)
//{
//	COORD pos = {x, y};
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}

//void GotoXY(int x, int y);
//void MyDelay(int d);
//
//int main()
//{
//	int a=0;
//	int b;
//	scanf("%c", &b);
//	if(b=='R')
//	{
//		for(int i = 65; i<= 73; i++)
//		{
//			GotoXY(40+a,12);
//		    printf("%c",i);
//		    a+=2;
//		    Sleep(100);
//		}
//	}
//	else if(b=='L')
//	{
//		for(int i = 65; i<= 73; i++)
//		{
//			GotoXY(40-a,12);
//		    printf("%c",i);
//		    a+=2;
//		    Sleep(100);
//		}
//	}
//	else if(b=='U')
//	{
//		for(int i = 65; i<= 73; i++)
//		{
//			GotoXY(40,12-a);
//		    printf("%c",i);
//		    a+=1;
//		    Sleep(100);
//		}
//	}
//	else if(b=='D')
//	{
//		for(int i = 65; i<= 73; i++)
//		{
//			GotoXY(40,12+a);
//		    printf("%c",i);
//		    a+=1;
//		    Sleep(100);
//		}
//	}
//}
//

void GotoXY(int x, int y);
void MyDelay(int d);

int main()
{
	int a,b,c,d;
	int g = 0;
	scanf("%d %d",&a, &b);
	scanf("%s",&c);
	scanf("%d", &d);
	
	for(int i = 0; i<=d; i++)
	{
		GotoXY(a+g,b);
		printf("%s",c);
		g+=2;
		Sleep(1000);
	}
	return 0;
	
}

void GotoXY(int x, int y)
{
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


