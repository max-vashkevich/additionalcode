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

#if defined(DEBUG)
#undef DEBUG
#endif // DEBUG

#define DEBUG
//#undef DEBUG
#define DELIVERY
#undef DELIVERY

#define EOL 		        '\n'
#define EOW		      	' '
#define UNSYNC_CSTDIO_CPPSTDIO 	ios_base::sync_with_stdio(false)
#define UNTIE_STDIN_STDOUT 	cin.tie(NULL); 	                                                                                  \
				cout.tie(NULL)
#define ACCELERATE_STDIO        UNSYNC_CSTDIO_CPPSTDIO;                                                                           \
			        UNTIE_STDIN_STDOUT
#define elif 		      	else if
#define ALL(cont) 	      	(cont).begin(), (cont).end()
#if !defined(DELIVERY)
        #define OPEN_FILES	ifstream fin("/Users/maximvashkevich/Documents/CPlusPlusProjects/TestProjects/test3/input.txt");  \
			        ofstream fout("/Users/maximvashkevich/Documents/CPlusPlusProjects/TestProjects/test3/output.txt")
#else
        #define OPEN_FILES      ifstream fin("input.txt");                                                                        \
                                ofstream fout("output.txt");
#endif // !DELIVERY
#define CLOSE_FILES		fin.close();	                                                                                  \
			        fout.close();

typedef long long llong;
typedef long double ldouble;

#include <iostream>
#include <fstream>

using namespace std;

int main() {
        ACCELERATE_STDIO;
        OPEN_FILES;
        
        // write code here

        CLOSE_FILES;
	return EXIT_SUCCESS;
}
