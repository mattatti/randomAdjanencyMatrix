#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int verticesNumber,**adjMatrix;
	printf("Please enter the desired number of vertices: ");
	scanf_s("%d", &verticesNumber);
	adjMatrix = (int **)malloc(verticesNumber * sizeof(int*));
	for (int i = 0; i<verticesNumber; i++)
	adjMatrix[i] = (int *)malloc(verticesNumber * sizeof(int));
	srand(time(NULL));

	for(int i=0;i<verticesNumber;i++)
	{
		for(int j = 0; j<verticesNumber; j++)
		{
			if (i <= j)
				adjMatrix[i][j] = 0;
			else
			{
				double r = ((double)rand() / (RAND_MAX)) +0.5 ;
				adjMatrix[i][j] = r;
			}
			
		}
		
	}
	for(int i=0;i<verticesNumber;i++)
	{
		for(int j = 0; j<verticesNumber; j++)
		{
			if (i < j)
				adjMatrix[i][j] = adjMatrix[j][i];
			
			printf("%d,", adjMatrix[i][j]);
		}
		printf("\n");
	}



	return 0;

}