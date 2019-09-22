#include <stdio.h>
void setMinus(int*,int*,int,int);

// @return length of array
int len(int* array)
{
	return (int)(sizeof(array)/sizeof(int));
}
// set all element of array into 1
void setToOne(int* array,int len)
{
	for(int i = 0; i < len; i++)
	{
		array[i] = 1; 
	}
}
// scaing perpose of for all array
void scan(int* array,int len)
{
	//int len = (int)(sizeof(array)/sizeof(int));
	for(int i = 0; i < len; i++)
	{
		scanf("%d",&array[i]);
	}
}
// print whole array
void print(int* array,int len)
{
	for(int i = 0; i < len; i++)
		printf("%d,",array[i]);
}

void main()
{	
	
	int n = 0;
	printf("how many element you want to add in set ( A ): ");
	scanf("%d",&n);
	
	int a[n]; // array size
	scan(a,n); // get all element
	
	int m = 0;
	printf("how many element you want to add in set ( B ): ");
	scanf("%d",&m);
	
	int b[m]; // array size 
	scan(b,m); // get all element 
	
	setMinus(a,b,n,m); // main function for program 
	// complete minus and print 
}

void setMinus(int* setA,int* setB,int lenA,int lenB)
{
	int Sa[lenA]; // set A string represent

	setToOne(Sa,lenA); // assume all are not in B
	
	int flag = 0; // flag value
	int find_index = 0; // storing temp index
	

	/*process of removing element*/
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


	/*print last output A-B*/
	printf("A - B = {");

	for(int j = 0;j < lenA;j++)
	{
		if(Sa[j] != 0)
		{
			printf("%d,",setA[j]);
		}
	}

	printf("}");

	printf("\n\n");
}
