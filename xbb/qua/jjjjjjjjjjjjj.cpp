#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N;
int a[12], b[12];
int ans = 1e9;
int main()
{
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; ++i)
    {
        cin >> b[i];
    }
    int permutation[12];
    for (int i = 0; i < N; i++)
        permutation[i] = N-1-i;

    do
    {
        int curr_len = N;
        for (int i = 1; i < N; ++i)
        {
            curr_len += max(b[permutation[i - 1]], a[permutation[i]]);
        }
        ans = min(ans, curr_len);
    } while (prev_permutation(permutation, permutation+N));

    cout << ans << endl;
    return 0;
}