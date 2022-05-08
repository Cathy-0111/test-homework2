#include <stdio.h>

int sum,tr = 0;     //tr=可否拆解
void a(int i){          //i=輸入的數
    for(int x=1 ; x<i ; x++)      //x=起始值，假如sum=15：連續加總的第一個數x=1、4、7
    {
        sum = 0;
        for(int y=x ; y<i ; y++)    //從某數一直加，//y=從x後連續加總的數
        {
            sum += y;
            if (sum == i)
        {
            for(int print=x ; print<y ; print++)    //連續加總x除外的數加到y為止
            {
                tr = 1;
                printf("%d+",print);
            }
            printf("%d\n",y);      //加上最後一個y。完成!!!!
        }
        }
        
    }
    if (tr == 0)     //tr==0：代表sum!=i
    {
        printf("No\n");
    }
}
int main(){
  int min,max;
  scanf("%d %d",&min,&max);
  
  if (min > max)           //交換，小的在前面，大的在面
  {
	  int tmp;
      tmp = max;     
      max = min;     
      min = tmp;     
  }
  for (int i=min ; i<=max ; i++)
  {
    printf("%d-----\n",i);
    a(i);
  }

}



/*
#include <stdio.h>

int main()
{
	int iInput1, iInput2, iIndex1, iIndex2, iIndex3, iEnd, iCount, iFlag;

	scanf("%d %d", &iInput1, &iInput2);
	for (iIndex1 = iInput1; iIndex1 <= iInput2; iIndex1++)
	{
		iFlag = 0;
		for (iIndex2 = 1; iIndex2 <= iIndex1 / 2; iIndex2++)
		{
			iEnd = 0;
			iCount = iIndex2;

			for (iIndex3 = iIndex2 + 1; iIndex3 <= iIndex1 / 2 + 1; iIndex3++)
			{
				iCount += iIndex3;
				if (iCount == iIndex1)
				{
					iEnd = iIndex3;
					iFlag = 1;

					break;
				}

				if (iCount > iIndex1)
				{
					break;
				}
			}

			if (0 < iEnd)
			{
				printf("%d-----\n", iIndex1);
				for (iIndex3 = iIndex2; iIndex3 <= iEnd; iIndex3++)
				{
					printf("%d", iIndex3);
					if (iIndex3 != iEnd)
					{
						printf("+");
					}
				}
				printf("\n");
			}
		}

		if (!iFlag)
		{
			printf("No\n");
		}
	}

	return 0;
}

*/