#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    vector<int> A = { };
    int temp;
    int v;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        A.push_back(temp);
    }
    cin >> v;
    cout << count(A.begin(), A.end(), v);

    return 0;
}