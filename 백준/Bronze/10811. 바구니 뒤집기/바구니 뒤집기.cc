#include <iostream>

using namespace std;


void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int N, M;
    int arr[101] = {};

    cin >> N >> M;

    for (int a = 0; a < N; a++)
    {
        arr[a] = a + 1;
    }

    int i, j;
    for (int a = 0; a < M; a++)
    {
        cin >> i >> j;
        for (int b = i-1; b < j; b++, j--)
        {
            swap(arr[b], arr[j-1]);
        }
    }

    for (int a = 0; a < N; a++)
    {
        cout << arr[a] << ' ';
    }

    return 0;
}