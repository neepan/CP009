// Neepan Biswas
// neepanb ~ codeforces
#include <bits/stdc++.h>
using namespace std;

#define fr(i, n) for (lli i = 0; i < n; i++)
#define fr1(i, n) for (lli i = 1; i < n; i++)
#define fr3(i, n) for (lli i = 0; i <= n; i++)
#define pb push_back
#define eb emplace_back
#define sz(x) (lli) x.size()
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define cd(condition, value_if_true, value_if_false) ((condition) ? (value_if_true) : (value_if_false))

using lli = long long int;
using ld = long double;
using pi = pair<lli, lli>;
using vp = vector<pi>;
using vi = vector<lli>;
using bl = bool;
using mp = map<lli, lli>;
using ump = unordered_map<lli, lli>;
using str = string;
using ch = char;

#pragma GCC optimize("unroll-loops,O3,Ofast")
#pragma GCC target("avx2,avx,fma,bmi,bmi2,lzcnt,popcnt")

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    lli n, m;
    cin >> n >> m;

        cout<<(m? min(m,n-m) : 1)<<endl;//if m is not zero print min() else print 1
  
    return 0;
}

/* APPROACH
The problem involves finding the maximum possible number of groups of cats sitting in a circle after some of the cats have left. Here's a step-by-step explanation of the solution:

### Problem Breakdown
- **Initial Setup:** There are `n` cats sitting in a circle, and `m` of them have left.
- **Goal:** Find the maximum number of groups of cats sitting together, with the circle divided into continuous sections of seated cats (i.e., between empty spaces where cats have left).

### Key Observations
1. **When no cats have left (`m = 0`)**, the entire circle is one continuous group, so the answer is 1.
2. **If all cats have left (`m = n`)**, there are no groups left, so the answer is 0.
3. **If some cats have left (`0 < m < n`)**, the goal is to maximize the number of continuous groups of cats. The more breaks (i.e., cats leaving between seated cats), the more groups you will have.

### Strategy
- When the first cat leaves, it creates one "break" in the circle. This doesn't change the number of groups much since the circle remains mostly intact.
- **If more cats leave, they should ideally be seated between other cats** to create the maximum number of separate groups. This way, each break (vacant seat) divides a group into two.
  
### Formula for Maximum Groups
The number of groups can be determined as follows:
- If removing cats can break the circle into many groups (i.e., if \( m - 1 \) is less than half of the total cats), then the number of groups grows with each cat that leaves. Hence, the answer will simply be \( m \).
- However, if too many cats leave (so that most of the circle is empty), then the number of groups starts shrinking because we have fewer seated cats left. In that case, the answer becomes \( n - m \).

Thus, the formula is:
\[
\text{Max groups} = \min(m, n - m)
\]
This formula ensures that we either count how many groups can form from the cats leaving, or how many seated cats remain after most leave.

### Edge Cases
1. **When no cats leave (`m = 0`)**, the answer is clearly 1 because there's only one group.
2. **When all cats leave (`m = n`)**, the answer is 0 because there are no cats left.

### Example Walkthroughs
1. **Example 1:**
   - Input: `7 4`
   - After 4 cats leave, the maximum possible number of groups is 3 (since each vacant seat can break the circle into groups). Hence, the answer is 3.
   
2. **Example 2:**
   - Input: `6 2`
   - Here, after 2 cats leave, there can be a maximum of 2 groups. Hence, the answer is 2.
   
3. **Example 3:**
   - Input: `3 0`
   - No cats leave, so there's just one group. The answer is 1.
   
4. **Example 4:**
   - Input: `2 2`
   - All cats leave, so there are no groups left. The answer is 0.

### Time Complexity
The time complexity of this approach is \( O(1) \), as we only need to calculate the result using the formula \( \min(m, n - m) \).

I hope this clarifies the approach! Let me know if you have further questions.*/