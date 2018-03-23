//Uva 441
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> number_set;
bool visit[14] = {0};
int answer[14] = {0};
void back_tracking(int, int);
int main()
{
    bool first = 0;
    int input;
    cin >> input;
    number_set.clear();
    while(input != 0)
    {
        if(!first)
            first = true;
        else
            printf("\n");
        for(int i = 0; i < input; ++i)
        {
            int number_in = 0;
            cin >> number_in;
            number_set.push_back(number_in);
        }

        sort(number_set.begin(),number_set.end());
        /*for(int i = 0; i < number_set.size(); ++i)
        {
            printf("%d ", number_set.at(i));
        }*/
        for(int i = 0; i < number_set.size(); ++i)
        {
            back_tracking(0,i);
        }
        number_set.clear();
        cin >> input;
    }

    return 0;
}

void back_tracking(int digit, int index)
{
    visit[index] = true;
    answer[digit] = number_set.at(index);

    for(int i = index + 1; i < number_set.size(); ++i)
    {
        if(visit[i] == false)
        {
            back_tracking(digit + 1, i);
        }
    }

    if(digit == 5)
    {
        printf("%d",answer[0]);
        for(int i = 1; i < digit + 1; ++i)
        {
            printf(" %d", answer[i]);
        }
        printf("\n");
    }

    visit[index] = false;
}
