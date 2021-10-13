#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <array>
#include <memory>
#include <functional>

using namespace std;

#define __SOLUTION_VERSION 0


#if __SOLUTION_VERSION == 0

// Title
// Short desc


class Solution {
public:

    void tryandsetPalin(string& s, string& palin, int& llen, int nlen, int index) {
        if (llen < nlen) {
            llen = nlen;
            palin = s.substr(
                index - (int)(((float)nlen-1)/2),
                nlen
            );
        }
    }

    void test(string& s, string& palin, int index, int slen, int& llen) {
        for (int j = 2; j <= ((index > slen/2) ? (slen - index) : index); j++)
        {
            char l = s[index - j], r = s[index + j];
            if (l == r) {
                int nlen = (2 * (j-1)) + 3;
                tryandsetPalin(s, palin, llen, nlen, index);
            }
        }
    }

    string longestPalindrome(string s) {
        int slen = (int)s.length();
        int llen = 0;
        string palin;

        for (int i = 0; i < slen; i++)
        {
            if (i < slen) {
                char c = s[i];
                char bef = s[i-1], aft = s[i+1];
                
                if (bef == aft) {
                    tryandsetPalin(s, palin, llen, 3, i);
                    test(s, palin, i, slen, llen);
                }
            }
        }
        return palin;        
    }
};




#elif __SOLUTION_VERSION == 1

// Title
// Short desc


class Solution {
public:


};


ostream& operator<<(ostream& stream, int a) {
    
    return stream;
}



#elif __SOLUTION_VERSION == 2

// Title
// Short desc


class Solution {
public:


};


ostream& operator<<(ostream& stream, filler) {
    
    return stream;
}



#endif;