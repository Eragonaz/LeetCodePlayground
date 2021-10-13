#include <iostream>
#include "Solution.h"

int main(int argc, char *argv[])
{
	Solution h;

	string palin = h.longestPalindrome("babad");
	cout << palin << endl;

	return 0;
}