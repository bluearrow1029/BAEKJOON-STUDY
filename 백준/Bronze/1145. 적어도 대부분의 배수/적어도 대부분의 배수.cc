#include <iostream>
using namespace std;

int a[5] = { 0 };
int num = 1;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    while (1) {
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            if (num % a[i] == 0)
            {
                count++;
            }
        }

        if (count >= 3)
        {
            cout << num;
            break;
        }
        else
        {
            num++;
        }
    }
    return 0;
}