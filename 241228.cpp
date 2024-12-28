#include <stdio.h>
//int main()
//{
//	int grade4[10];
//	
//	for(int i=0; i<=9; i++)
//	{
//		scanf("%d",&grade4[i]);
//	}
//}

//int main()
//{
//	int arr[4][5];
//	int ar[7][5];
//	float avg[4][5];
//	char str[9][12];
//	return 0;
//}

int main()
{
	int ar[3][4] = {0,};
	int i, j;
	scanf("%d",&ar[0][0]);
	scanf("%d",&ar[2][3]);
	scanf("%d",&ar[0][1]);
	scanf("%d",&ar[2][0]);
	
	for(int i=0; i<3; i++)
	{
		for(int q=0; q<4; q++)
		{
			printf("%d",ar[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}