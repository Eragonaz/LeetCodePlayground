#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ostream& operator << (ostream& stream, ListNode* root) {
    while (root) {
        stream << root->val << ",";

        root = root->next;
    }
    stream << "\n";
    return stream;
}


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* origin = nullptr;
        ListNode** currentHead = &origin;
        int sum = 0;

        while (l1 || l2 || sum > 0) {
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            (*currentHead) = new ListNode(sum%10);
            currentHead = &((*currentHead)->next);
            sum /= 10;
        }
        return origin;        
    }
};