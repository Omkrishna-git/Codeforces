
#include "bits/stdc++.h"
using namespace std;

#define int long long
#define uint unsigned long long
#define no cout << "No" << endl
#define yes cout << "YES" << endl

int MOD = 1e9 + 7;

int omkrishna(int precision)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(precision);
    return 0;
}

bool checkRightAngled(int X1, int Y1, int X2, int Y2, int X3, int Y3)
{
    int A = (int)pow((X2 - X1), 2) + (int)pow((Y2 - Y1), 2);
    int B = (int)pow((X3 - X2), 2) + (int)pow((Y3 - Y2), 2);
    int C = (int)pow((X3 - X1), 2) + (int)pow((Y3 - Y1), 2);

    return (A > 0 && B > 0 && C > 0) && (A == (B + C) || B == (A + C) || C == (A + B));
}

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> points;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        points.push_back({x, y});
    }

    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if (checkRightAngled(
                    points[i].first, points[i].second,
                    points[j].first, points[j].second,
                    points[k].first, points[k].second))
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}


void solve1() {
    int n;
    cin >> n;

    set<pair<int, int>> points;

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        points.insert({x, y});
    }

    int ans = 0, ans2 = 0;

    for (const auto& p : points) {
        int x = p.first;
        int y = p.second;

        if (points.count({x, y ^ 1})) {
            ans += n - 2;
        }

        if (points.count({x - 1, y ^ 1}) && points.count({x + 1, y ^ 1})) {
            ++ans2;
        }
    }

    cout << ans / 2 + ans2 << '\n';
}


int32_t main()
{
    omkrishna(10);

    int T = 1;
    cin >> T;

    while (T--)
    {
        solve1();
    }

    return 0;
}
