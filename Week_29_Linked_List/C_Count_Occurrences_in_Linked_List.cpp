#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;

    Node(int v) : val(v), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void build(int n) {
        Node* tail = nullptr;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            Node* node = new Node(x);

            if (!head) {
                head = tail = node;
            } 
            else {
                tail->next = node;
                tail = node;
            }
        }
    }

    ~LinkedList() {
        Node* cur = head;

        while (cur) {
            Node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
    }
};

/*
    Count how many times key occurs in linked list.
*/
int countOccurrence(Node* head, int key) {
    int count = 0;
    Node* cur = head;

    while (cur != nullptr) {

        if (cur->val == key) {
            count++;
        }

        cur = cur->next;
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    LinkedList ll;
    ll.build(n);

    int key;
    cin >> key;

    cout << countOccurrence(ll.head, key) << "\n";

    return 0;
}