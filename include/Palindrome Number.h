#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <array>
#include <memory>
#include <functional>
#include <cmath>

using namespace std;

#define __SOLUTION_VERSION 0

#if __SOLUTION_VERSION == 0

// Title
// Short desc

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x<0||(x%10==0&&x!=0))
            return false;
        if (x==0)
            return true;
        int len=log10(abs(x)) + 1;
        for (int i=1;i<=len/2;i++)
        {
            int rs=(x/pow(10,len-i));
            int ls=(x/pow(10,i-1));
            if (rs%10!=ls%10)
                return false;
        }
        return true;
    }
};


/*
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        if (x == 0)
            return true;

        size_t len = log10(abs(x)) + 1;

        for (size_t i = 1; i <= len / 2; i++)
        {
            int rs = (x / pow(10, len - i));
            int ls = (x / pow(10, i - 1));

            if (rs % 10 != ls % 10)
                return false;
        }

        return true;
    }
};
*/

#elif __SOLUTION_VERSION == 1

// Title
// Short desc

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x<0||(x%10==0&&x!=0))
            return false;

        int revertedHalf=0;
        while (x>revertedHalf)
        {
            revertedHalf=revertedHalf*10+x%10;
            x/=10;
        }

        return x==revertedHalf||x==revertedHalf/10;
    }
};

/*
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }

        int revertedHalf = 0;
        while (x > revertedHalf)
        {
            revertedHalf = revertedHalf * 10 + x % 10;
            x /= 10;
        }

        return x == revertedHalf || x == revertedHalf / 10;
    }
};
*/

ostream &operator<<(ostream &stream, int a)
{

    return stream;
}

#elif __SOLUTION_VERSION == 2

// Title
// Short desc

class Solution
{
public:
};

ostream &operator<<(ostream &stream, filler)
{

    return stream;
}

#endif;