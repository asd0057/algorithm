#include <iostream>

using namespace std;

int N, M;
char a[50][50], b[50][50];
int result;

void change(int x, int y)
{
    for (int i = x; i < x + 3; i++)
    {
        for (int j = y; j < y + 3; j++)
        {
            if (a[i][j] == '1') a[i][j] = '0';
            else a[i][j] = '1';
        }
    }
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    cin >> N >> M;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> a[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> b[i][j];

    for (int i = 0; i < N - 2; i++)
    {
        for (int j = 0; j < M - 2; j++)
        {
            if (a[i][j] != b[i][j])
            {
                change(i, j);
                result++;
            }
        }
    }

    bool isDifferent = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i][j] != b[i][j])
            {
                isDifferent = true;
            }
        }
    }

    if (isDifferent) cout << -1;
    else cout << result;

    return 0;
}