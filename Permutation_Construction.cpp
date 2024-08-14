#include <iostream>
#include <vector>
using namespace std;

vector<int> permutation_construction(int n) {
    vector<int> P;
    for (int i = n; i > 0; i -= 2) {
        P.push_back(i);
    }
    for (int i = 1; i <= n; i += 2) {
        P.push_back(i);
    }
    return P;
}

int main() {
    int T;
    cin >> T;
    vector<vector<int>> results;

    for (int t = 0; t < T; ++t) {
        int N;
        cin >> N;
        results.push_back(permutation_construction(N));
    }

    for (const auto& result : results) {
        for (size_t i = 0; i < result.size(); ++i) {
            if (i > 0) cout << " ";
            cout << result[i];
        }
        cout << endl;
    }

    return 0;
}

