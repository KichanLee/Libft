#include <stdio.h>

int main(int n)
{
    int ans = 0;
    int times = 0;
    int times_n = n;
    int square = 1;
    
    for(int i = 0; times_n /= 3 >0; ++i)
    {
        times_n = times_n / 3;
        times++; 
    }

    for(int j = 0; n > 0; j++)
    {
        for(int i = 0; i < times - 1; ++i)
            square += 3;
        n/=3;
        ans += (n % 3) * square;
        times--;

        square = 1;
    }
    return ans;
}