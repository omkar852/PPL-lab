#include <stdio.h>
int main()
{
	int i,j;
	for(i=2;i<101;i++)
	{
		j=2;
		while(j<i)
		{
			if(i%j!=0)
			{
				j=j+1;
			}
		}
		if (i==j)
		{
			printf("%d",i);
		}
		return 0;
	}
}

