#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//int main()
//{
//	char c1 = 'A';
//	char c2 = 'B';
//	
//	printf("%d\n", c1 + c2);
//	printf("%d\n", c1 > c2);
//	printf("%d\n", c1 == 'A');
//	printf("%d\n", 'b' > c2);
//	printf("%d\n", 'a' - c1);
//	
//	return 0;
//}

//int main()
//{
//	char str1[] = "C3coding";
//	char str2[10] = "C3coding";
//	
//	printf("%d\n", str1 == str2);
//	printf("%d\n", str1 == "C3coding");
//	printf("%d\n", str2 == "C3coding");
//	printf("%d\n", "C3coding" == "C3coding"); 
//	printf("%d\n", str1 == "c3coding");
//	
//	return 0;
//}

//int main()
//{
//	char *sp = "C3coding";
//	char str[] = "C3coding";
//	int res;
//	
//	res = strcmp(sp, str);
//	printf("%d\n", res);
//	res = strcmp(sp, "C3coding");
//	printf("%d\n", res);
//	res = strcmp("C3coding", "C3coding");
//	printf("%d\n", res);
//	
//	res = strcmp("test", "text");
//	printf("%d\n", res);
//	res = strcmp("text", "test");
//	printf("%d\n", res);
//	
//	return 0;
//}

//int main()
//{
//	char name1[10];
//	char name2[10];
//	
//	strcpy(name1, "가");
//	strcpy(name2, "나");
//	
//	printf("%d\n", strcmp(name1, name2));
//	printf("%d\n", strcmp("나", "가"));
//	
//	return 0;
//}

//int main()
//{
//	char start[15] = "C3";
//	char end[15] = "coding";
//	int len;
//	
//	printf("start = %s %d\n", start, strlen(start));
//	printf("end = %s %d\n", end, strlen(end));
//	
//	strcat(start , end);
//	len = strlen(start);
//	printf("%s %d\n", start, len);
//	return 0;
//}

//int main()
//{
//	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	int i;
//	int *pr;
//	pr = (int *)malloc(sizeof(int)*20);
//	
//	printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
//	
//	for(i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
//	{
//		printf("%d ", ar[i]);
//	}
//	for(int i = 0; i<20; i++)
//	{
//		pr[i] = i+1;
//		printf("%d ",pr[i]);
//	}
//	
//	free(pr);
//	
//	
//	return 0;
//}

//int main()
//{
//	float *f;
//	char *c;
//	
//	f = (float *)malloc(sizeof(float));
//	c = (char *)malloc(sizeof(char));
//	
//	*f = 3.141592;
//	*c = 'A';
//	
//	printf("%f\n",*f);
//	printf("%c\n",*c);
//	free(f);
//	free(c);
//}

int main()
{
	srand(time(NULL));
	int *pr;
	int n;
	scanf("%d", &n);
	pr = (int *)malloc(sizeof(int)*n);
	
	for(int i = 0; i < n; i++)
	{
		pr[i] = rand()%99 + 1;
		printf("%d ", pr[i]);
	}
	free(pr);
	
	
}