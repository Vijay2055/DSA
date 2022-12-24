//Find the binary of the given number using array
#include <bits/stdc++.h>
using namespace std;

void findBinary(int x)
{
    vector<int> bin;
    while (x > 0)
    {
        int r = x % 2;
        x = x / 2;
        bin.push_back(r);
    }

    reverse(bin.begin(), bin.end());
    for (int i = 0; i < bin.size(); i++)
    {
        cout << bin[i] << " ";
    }
}

int main()
{
    int x = 1234;
    findBinary(x);
}
