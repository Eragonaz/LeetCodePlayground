#include <iostream>
#include "add-two-numbers.h"

int main(int argc, char *argv[])
{
	Solution h;

	ListNode* l1 = new ListNode(
		2,
		new ListNode(
			4, 
			new ListNode(3)
		)
	);

	ListNode* l2 = new ListNode(
		5,
		new ListNode(
			6,
			new ListNode(4)
		)
	);

	cout << h.addTwoNumbers(l1, l2) << endl;
}