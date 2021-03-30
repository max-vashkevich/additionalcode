#define ERR1
#undef  ERR1

#if defined(__GNUC__) && !defined(ERR1)
#pragma GCC optimize ("Ofast")
#pragma GCC target   ("avx2")
#pragma GCC target   ("fma")
#pragma GCC target   ("sse4")
#else
#pragma GCC optimize ("Ofast")
#pragma GCC target   ("sse4")
#endif // __GNUC__ && !ERR1

#define FILE_IO
#undef  FILE_IO

#define EOL 		                '\n'
#define FEOL                            endl
#define EOW		      	        ' '
#define UNSYNC_CSTDIO_CPPSTDIO 	        ios_base::sync_with_stdio(false)
#define UNTIE_STDIN_STDOUT 	        cin.tie(NULL); 	                                                                                   \
					cout.tie(NULL)
#ifndef FILE_IO
#define ACCELERATE_STDIO                UNSYNC_CSTDIO_CPPSTDIO;                                                                            \
					UNTIE_STDIN_STDOUT
#else
#define ACCELERATE_STDIO
#endif // !FILE_IO
#define elif 		      	        else if
#define ALL(cont) 	      	        (cont).begin(), (cont).end()
#define unless(cond)			if (!(cond))
#ifdef FILE_IO
#define OPEN_FILES                      ifstream fin("input.txt");                                                                         \
					ofstream fout("output.txt");                                                                       \
					ofstream flog("log.txt")
#define CLOSE_FILES		        fin.close();	                                                                                   \
					fout.close();                                                                                      \
					flog.close()
#else
#define OPEN_FILES  			char _ = 0
#define CLOSE_FILES
#endif // FILE_IO
#define BEGINNING_OF_THE_PROGRAM        ACCELERATE_STDIO;                                                                                  \
					OPEN_FILES
#define ENDING_OF_THE_PROGRAM           CLOSE_FILES;                                                                                       \
					return EXIT_SUCCESS
#ifdef FILE_IO
#define IOL_PARAMS                      ifstream& fin, ofstream& fout, ofstream& flog
#define IOL_PARAMS_TO_FUNC              fin, fout, flog
#else
#define IOL_PARAMS 			char _
#define IOL_PARAMS_TO_FUNC 		_
#endif // FILE_IO

typedef long long llong;
typedef long double ldouble;

#ifndef FILE_IO
#include <iostream>
#else
#include <fstream>
#endif // !FILE_IO
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cstddef>
#include <cctype>
#include <cstring>
#include <climits>
#include <cassert>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <bitset>
#include <iterator>
#include <algorithm>
#include <utility>
#include <numeric>

using namespace std;

int
main() {
	BEGINNING_OF_THE_PROGRAM;

        // write code here
	
	ENDING_OF_THE_PROGRAM;
}
