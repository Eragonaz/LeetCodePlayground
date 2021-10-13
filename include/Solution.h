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


#if __SOLUTION_VERSION == 0:

// Hashed map of char to int 
// Short desc

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map;

        size_t startHead = 0;
        int len = 0, diff, cpos;
        char currChar;

        for (size_t index = 0; index < s.length(); index++)
        {
            currChar = s[index];
            cpos = map[currChar];

            if (cpos && cpos > startHead) {
                startHead = cpos;
            }

            map[currChar] = index + 1;


            diff = index - startHead + 1;
            len = len > diff ? len : diff;
        }
        return len;
    }
};



#elif __SOLUTION_VERSION == 1:


// Uses a dictionary with for every possible char (256)
// Short desc


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256,-1);
        int maxSize=0,start=-1;
        for (int i=0;i<s.length();i++)
        {
            char c=s[i];
            if (dict[c]>start)
                start=dict[c];
            dict[c]=i;
            maxSize=max(maxSize,i-start);
        }
       return maxSize;
    }
};



ostream& operator<<(ostream& stream, int a) {
    
    return stream;
}



#elif __SOLUTION_VERSION == 2:

// Title
// Short desc


class Solution {
public:


};


ostream& operator<<(ostream& stream, filler) {
    
    return stream;
}



#endif;