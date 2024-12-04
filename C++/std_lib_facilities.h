/*
   std_lib_facilities.h
*/

/*
   simple "Programming: Principles and Practice using C++ (second edition)" course header to
   be used for the first few weeks.
   It provides the most common standard headers (in the global namespace)
   and minimal exception/error support.

   Students: please don't try to understand the details of headers just yet.
   All will be explained. This header is primarily used so that you don't have
   to understand every concept all at once.

   By Chapter 10, you don't need this file and after Chapter 21, you'll understand it

   Revised April 25, 2010: simple_error() added

   Revised November 25 2013: remove support for pre-C++11 compilers, use C++11: <chrono>
   Revised November 28 2013: add a few container algorithms
   Revised June 8 2014: added #ifndef to workaround Microsoft C++11 weakness
   Revised Febrary 2 2015: randint() can now be seeded (see exercise 5.13).
   Revised June 15 for defaultfloat hack for older GCCs
*/

#ifndef H112
#define H112 020215L

#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <list>
#include <forward_list>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <array>
#include <regex>
#include <random>
#include <stdexcept>

//------------------------------------------------------------------------------ 
#if __GNUC__ && __GNUC__ < 5
inline std::ios_base& defaultfloat(std::ios_base& b) // to augment fixed and scientific as in C++11
{
    b.setf(std::ios_base::fmtflags(0), std::ios_base::floatfield);
    return b;
}
#endif
//------------------------------------------------------------------------------

using Unicode = long;

//------------------------------------------------------------------------------

using namespace std;

template<class T> string to_string(const T& t)
{
    ostringstream os;
    os << t;
    return os.str();
}

struct Range_error : out_of_range {
    // enhanced vector range error reporting
    int index;
    Range_error(int i) : out_of_range("Range error: " + to_string(i)), index(i) {}
};

// trivially range-checked vector (no iterator checking):
template<class T> class Vector {
public:
    // Constructor, destructor, and other member functions would be defined here
    // ...
};

#endif // H112