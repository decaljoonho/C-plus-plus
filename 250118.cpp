#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct Person {
//	char name[10]; 
//	int age;
//	double height;
//};

//int main()
//{
//	struct Person list[5] = {{"김유신", 15, 178.3}, {"김춘추",13, 173.3},{"사다함", 17, 183.2},{"원효",19,168.9},{"장보고",13, 187.3}};
//	for(int i = 0; i<5; i++)
//	{
//		printf("이름 : %s\n", list[i].name);
//		printf("나이 : %d\n", list[i].age);
//		printf("키 : %lf\n",  list[i].height);
//	}
//	return 0;
//}




//int main()
//{
//struct Person fr[3];
//for(int i=0; i<3; i++)
//{
//	printf("이름 : ");
//	scanf("%s",&fr[i].name);
//	printf("나이 : ");
//	scanf("%d",&fr[i].age);
//	printf("키 : ");		
//	scanf("%lf",&fr[i].height);
//}
//
//for(int i = 0; i<3; i++)
//{
//	printf("이름 : %s\n", fr[i].name);
//	printf("나이 : %d\n", fr[i].age);
//	printf("키 : %lf\n", fr[i].height);
//}
//}

//int main()
//{
//	FILE *fp;
//	
//	fp = fopen ("CharOut.txt","w");
//	if (fp == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	
//	fputc('A',fp);
//	fputc('B',fp);
//	fputc('\n',fp);
//	fputc(97 , fp);
//	fputc(98,fp);
//	
//	fclose(fp);
//	return 0;
//	
//}

//int main()
//{
//	FILE *fp;
//	char ch;
//	
//	fp=fopen("CharOut.txt", "r");
//	
//	if (fp == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	
//	ch = fgetc(fp);
//	printf("%c",ch);
//	ch = fgetc(fp);
//	putchar(ch);
//	
//	fclose(fp);
//	
//	return 0;
//}

//int main()
//{
//	FILE *out = fopen("StringFile.txt","w");
//	char str1[] = "Hello C3Coding";
//	char str2[] = "안녕하세요 씨큐브코딩입니다.\n";
//	
//	if(out == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//		
//	}
//	
//	fputs("문자열을 출력합니다\n",out);
//	fputs(str1,out);
//	fputs("\n",out);
//	fputs(str2,out);
//	
//	fclose(out);
//	
//	return 0;
//}

//int main()
//{
//	FILE *in = fopen("StringFile.txt", "r");
//	char str1[30];
//	char str2[30];
//	char str3[30];
//	
//	if (in == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	
//	fgets(str1, sizeof(str1), in);
//	fgets(str2, sizeof(str2), in);
//	fgets(str3, sizeof(str3), in);
//	
//	puts(str1);
//	printf("%s", str2);
//	
//	fputs(str3, stdout);
//	fclose(in);
//	
//	return 0;
//}

int main()
{
	char str[100];
	scanf("%s",str);
	for(int i = 0; str[i]; i++)
	{
		if('A' <= str[i] && str[i] <= 'Z' )
		{
			str[i] += 32;
		}
	}
	printf("%s",str);
}