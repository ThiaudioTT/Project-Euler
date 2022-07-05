#include <iostream>
using namespace std;

int searchMultiple(int a, int b, int limit)
{
    int sum = 0;
    for (int i = 1; i <= limit; i++)
        if (i % a == 0 || i % b == 0)
            sum += i;

    return sum;
}

int main()
{
    cout << searchMultiple(5, 3, 999);
}
