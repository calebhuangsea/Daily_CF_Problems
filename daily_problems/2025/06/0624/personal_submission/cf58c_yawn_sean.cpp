#include <bits/stdc++.h>
#pragma GCC optimize("O3,Ofast,unroll-loops")
// #include "atcoder/all"

using namespace std;
auto rng = mt19937(random_device()());
auto rngl = mt19937_64(random_device()());

// Let's set a bit and flow!
// I came, I divided, I conquered!
// using namespace __gnu_cxx;
// using namespace __gnu_pbds;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n);
    for (auto &v: nums) cin >> v;

    vector<int> cnt(100005, 0);
    for (int i = 0; i < n; i ++) {
        int x = nums[i] - min(i, n - 1 - i);
        if (x > 0) cnt[x] ++;
    }

    cout << n - *max_element(cnt.begin(), cnt.end());

    return 0;
}