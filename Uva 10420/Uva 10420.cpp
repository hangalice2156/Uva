//Uva 10420
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int number = 0;
    scanf("%d", &number);
    string country[number];
    for(int i = 0; i < number; ++i)
    {
        string name;
        cin >> country[i];
        getline(cin, name);
    }

    sort(country, country + number);

    for(int i = 0; i < number; ++i)
    {
        int counter = 0;
        int j;
        cout << country[i];
        for(j = i; j < number; ++j)
        {
            if(country[i] != country[j])
            {
                break;
            }
            counter++;
        }
        printf(" %d\n", counter);
        i = j-1;
    }

    return 0;
}
