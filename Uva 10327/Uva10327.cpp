//Uva10327 - flip sort
#include<cstdio>

int main()
{
    int Data_Quantity = 0;
    while(scanf("%d",&Data_Quantity) != EOF)
    {
        int Numbers[Data_Quantity];
        for(int i = 0; i < Data_Quantity; ++i)
        {
            scanf("%d",&Numbers[i]);
        }

        int temp = 0;
        int count = 0;
        for(int i = Data_Quantity; i; --i)
        {
            for(int j = 1; j < Data_Quantity; ++j)
            {
                if(Numbers[j-1] > Numbers[j])
                {
                    temp = Numbers[j];
                    Numbers[j] = Numbers[j-1];
                    Numbers[j-1] = temp;
                    ++count;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",count);
    }

    return 0;
}
