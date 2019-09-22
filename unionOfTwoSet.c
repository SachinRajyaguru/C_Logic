void unionOfTwoSet(int* setA,int* setB,int lenA,int lenB)
{
	int result[lenA+lenB];
	int index = 0;
	 // flag value

	for (int i = 0; i < lenA; ++i)
	{
		result[index] = setA[i];
		index++;
	}
	int size = index;
	for (int i = 0; i < size; ++i)
	{
		for (int j = i+1; j < size; j++)
		
			if(result[i] == result[j])
			{
				for(int k=j; k<size; k++)
					result[k] = result[k + 1];
				size--;
				j--;
				index--;
			}
		
	}
	for (int i = 0; i < lenB; ++i)
	{
		int flag = 1;
		for (int j = 0; j < lenA; j++)
		{
			if (setB[i] == setA[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			result[index] = setB[i];    
			index++;
		}
	}
	print(result,index);
}
