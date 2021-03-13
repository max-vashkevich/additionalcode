#if defined(__GNUC__)
#pragma GCC optimize("Ofast")
#pragma GCC target("avx")
#pragma GCC target("avx2")
#pragma GCC target("fma")
#pragma GCC target("sse")
#pragma GCC target("sse2")
#pragma GCC target("sse3")
#pragma GCC target("sse4")
#endif // __GNUC__

// #define DELIVERY

#define EOL 		        '\n'
#define EOW		      	' '
#define UNSYNC_CSTDIO_CPPSTDIO 	ios_base::sync_with_stdio(false)
#define UNTIE_STDIN_STDOUT 	cin.tie(NULL); 	                                                                                   \
				cout.tie(NULL)
#define ACCELERATE_STDIO        UNSYNC_CSTDIO_CPPSTDIO;                                                                            \
			        UNTIE_STDIN_STDOUT
#define elif 		      	else if
#define ALL(cont) 	      	(cont).begin(), (cont).end()
#if !defined(DELIVERY)
        #define OPEN_FILES	ifstream fin("/Users/maximvashkevich/Documents/CPlusPlusProjects/TestProjects/test3/input.txt");   \
			        ofstream fout("/Users/maximvashkevich/Documents/CPlusPlusProjects/TestProjects/test3/output.txt"); \
                                ofstream flog("/Users/maximvashkevich/Documents/CPlusPlusProjects/TestProjects/test3/log.txt")
#else
        #define OPEN_FILES      ifstream fin("input.txt");                                                                         \
                                ofstream fout("output.txt");
#endif // !DELIVERY
#define CLOSE_FILES		fin.close();	                                                                                   \
			        fout.close();

#define BEGIN_OF_THE_PROGRAM    ACCELERATE_STDIO;                                                                                  \
                                OPEN_FILES
#define END_OF_THE_PROGRAM      CLOSE_FILES;                                                                                       \
                                return EXIT_SUCCESS
#if !defined(DELIVERY)
        #define IOL_PARAMS              ifstream& fin, ofstream& fout, ofstream& flog
        #define IOL_PARAMS_TO_FUNC      fin, fout, flog
#else
        #define IOL_PARAMS              ifstream& in, ofstream& fout
        #define IOL_PARAMS_TO_FUNC      fin, fout
#endif // !DELIVERY

typedef long long llong;
typedef long double ldouble;

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <cstddef>
#include <cctype>
#include <cstring>
#include <vector>
#include <string>
#include <iterator>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <utility>
#include <numeric>
#include <iomanip>

using namespace std;

int main() {
        BEGIN_OF_THE_PROGRAM;

        // write code here
        
        END_OF_THE_PROGRAM;
}
