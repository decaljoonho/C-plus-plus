#include <stdio.h>
//int main()
//{
//	char ch1, ch2;
//	
//	ch1 = 'A';
//	ch2 = 'a';
//	printf("%c %c\n", ch1, ch2);
//	printf("%d %d\n", ch1, ch2);
//	
//	printf("%c %c\n", 66, 98);
//	printf("%d %d\n", 66, 98);
//	return 0;
//}

//int main()
//
//{
//	char ch1, ch2;
//	
//	ch1 = 'A';
//	ch2 = 'a';
//	
//	printf("%d", ch1  ch2);
//}

//int main()
//{
//	char ch;
//	
//	printf("���ڸ� �Է��ϼ��� : ");
//	scanf("%c", &ch);
//	printf("%c %d\n", ch, ch);
//	return 0; 
//}

//int main()
//{
//	char ch;
//	
//	printf("���ڸ� �Է��ϼ��� : ");
//	ch = getchar();
//	putchar(ch);
//	printf("%c %d\n", ch, ch);
//	return 0;
//}

//int main()
//{
//	char str1[ ] = {'H','i',' ','C','3',' ','C','o','d','i','n','g'};
//	char str2[ ] = {'H','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//	
//}

//int main()
//{
//	char str1[15] = {'H','i',' ','C','3',' ','C','o','d','i','n','g'};
//	char str2[15] = {'H','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}

//int main()
//{
//	char str1[15] = "Coding is fun";
//	char str2[  ] = "Coding is fun";
//	
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	return 0;
//}

//int main()
//{
//	char str1[25] = "C language is powerful";
//	char str2[  ] = "Coding is computer programming";
//	
//	for(int i = 0; i<= 25; i++)
//	{
//		printf("%c",str1[i]);
//	}
//	return 0;
//	
//}

//int main()
//{
//	char str1[25] = "C language is powerful";
//	char str2[  ] = "Coding is computer proramming";
//	
//	int i = 0;
//	while(i <= 30)
//	{
//		printf("%c", str2[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char word[20];
//	printf("�ܾ �Է��ϼ��� : ");
//	scanf("%s", word);
//	printf("�Է��Ͻ� �ܾ�� %s �Դϴ�", word);
//	return 0;
//}

int main()
{
	char sentence[80];
	
	puts("������ �Է��ϼ��� : ");
	gets(sentence);
	puts(sentence);
	printf("%s", sentence);
	return 0;
}


