#include <stdio.h>
void setMinus(int*,int*,int,int);


int len(int* array)
{
	return (int)(sizeof(array)/sizeof(int));
}
void setZero(int* array,int len)
{
	//int len = (int)(sizeof(array)/sizeof(int));
	for(int i = 0; i < len; i++)
	{
		array[i] = 1;
	}
}
void scan(int* array,int len)
{
	//int len = (int)(sizeof(array)/sizeof(int));
	for(int i = 0; i < len; i++)
	{
		scanf("%d",&array[i]);
	}
}
void print(int* array,int len)
{
	//int len = (int)(sizeof(array)/sizeof(int));
	for(int i = 0; i < len; i++)
	{
		printf("%d , ",array[i]);
	}
}



void main()
{	
	
	int n = 0;
	printf("how many element you want to add in set ( A ): ");
	scanf("%d",&n);
	
	int a[n];
	scan(a,n);
	
	int m = 0;
	printf("how many element you want to add in set ( B ): ");
	scanf("%d",&m);
	
	int b[m];
	scan(b,m);
	
	setMinus(a,b,n,m);
}

void setMinus(int* setA,int* setB,int lenA,int lenB)
{
	int Sa[lenA];
	int Sb[lenB];
	setZero(Sa,lenA);
	setZero(Sb,lenB);
	_Bool flag = 0;
	int find_index = 0;
	
	for(int i = 0;i < lenB;i++)
	{
		for(int j = 0;j < lenA;j++)
		{
			if(setB[i] == setA[j])
			{
				flag = 1;
				find_index = j;
				break;
			}
		}
		if(flag)
		{
			Sa[find_index] = 0;
			flag = 0;
		}
	}
	print(Sa,lenA);
	/*
	for(int j = 0;j < lenA;j++)
	{
		if(Sa[j] != 0)
		{
			printf("%d,",Sa[j]);
		}			
	}*/
}
