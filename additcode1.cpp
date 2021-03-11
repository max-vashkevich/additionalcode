#ifdef __GNUC__
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#endif // __GNUC__

#ifdef DEBUG
#undef DEBUG
#endif // DEBUG

#define DEBUG

#define EOL '\n'
#define EOW ' '
#define MAKE_STDIO_FASTER ios_base::sync_with_stdio(false); 			\
			  cin.tie(NULL);
#define elif else if
// "fast for" is just a while XD
#define FAST_FOR(varName, startVal, cond) { llong varName = startVal;		\
					  while (cond)
#define BEGIN_FAST_FOR {
#define END_FAST_FOR(doAfter) doAfter;						\
			      } }
#define ALL(cont) (cont).begin(), (cont).end()

using llong = long long;
using ldouble = long double;

#include <iostream>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <numeric>
#include <climits>
#include <cctype>
#include <bitset>
#include <cmath>
#include <cstddef>
#include <cstdlib>
#include <functional>
#include <regex>
#include <tuple>

using namespace std;

int main() {
	MAKE_STDIO_FASTER;
	// write code here
	return 0;
}
