#include <stdio.h>
//int main()
//{
//	int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0},
//	               {0, 0, 0, 0, 0, 0, 0, 2, 0},
//	               {0, 0, 0, 0, 1, 0, 0, 0, 0},
//	               {0, 2, 0, 1, 0, 0, 1, 0, 0},
//	               {0, 0, 0, 1, 0, 0, 0, 0, 0},
//	               {0, 0, 1, 0, 0, 0, 1, 0, 0}
//	               };
// 1번	
//	int count = 0;	
//	for(int i=0; i<6; i++)
//	{
//		for(int q=0; q<9; q++)
//		{
//			if(ar[i][q]==1)
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d",count);

// 2번
//for(int i=0; i<6; i++)
//{
//	for(int q=0; q<9; q++)
//	{
//		if(ar[i][q]==2)
//		{
//			printf("%d %d\n",i , q);
//		}
//	}
//}

// 3번
//for(int i=0; i<6; i++)
//{
//	for(int q=0; q<9; q++)
//	{
//		if(ar[i][q]==2)
//		{
//			ar[i][q-1] = 5;
//			ar[i][q+1] = 5;
//			ar[i+1][q] = 5;
//			ar[i-1][q] = 5;			
//		}
//	}
//}
//
//for(int z=0; z<6; z++)
//{
//	for(int p = 0; p<9; p++)
//	{
//		printf("%d ",ar[z][p]);
//	}
//	printf("\n");
//}

//4번(pass)
//for(int i=0; i<6; i++)
//{
//	for(int q=0; q<9; q++)
//	{
//		if(ar[i][q] == 0)
//		{
//			ar[i][q] = 1;
//		}
//		if(ar[i][q] != 0)
//		{
//			ar[i][q] = 0;
//		}
//	}
//}
//
//for(int z=0; z<6; z++)
//{
//	for(int p = 0; p<9; p++)
//	{
//		printf("%d ",ar[z][p]);
//	}
//	printf("\n");		    
//}
//
//}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    
    int ar[n][m] = {0, };
    int br[n][m] = {0, };
    
    for(int i=0; i<n; i++)
    {
    	for(int j = 0; j<m; j++)
    	{
    		scanf("%d",&ar[i][j]);
		}
	}
	
	
	for(int i=0; i<n; i++)
    {
    	for(int j = 0; j<m; j++)
    	{
    		scanf("%d",&br[i][j]);
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			printf("%d ",ar[i][j]+br[i][j]);
		}
		printf("\n");
	}
}
