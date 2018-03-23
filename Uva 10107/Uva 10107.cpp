//Uva 10107 what is the median
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int input = 0;
    int data[10001] = {0};
    int data_count = 0;
    while(scanf("%d", &input) != EOF)
    {
        if(input == -1) break;
        data_count += 1;
        if(data_count == 1)
        {
            data[0] = input;
            printf("%d\n", data[0]);
        }
        else
        {
            for(int i = 0; i < data_count; ++i)
            {
                if(i == data_count - 1) data[i] = input;
                if(data[i] < input)
                {
                    continue;
                }
                else
                {
                    for(int j = data_count; j > i; --j)
                    {
                        swap(data[j-1], data[j]);
                    }
                    data[i] = input;
                    break;
                }
            }

            if(data_count % 2 == 1)
            {
                printf("%d\n", data[data_count / 2]);
            }
            if(data_count % 2 == 0)
            {
                printf("%d\n", (data[data_count / 2 - 1] + data[data_count / 2]) / 2);
            }
        }
    }
    return 0;
}
