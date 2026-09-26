#include<iostream>
using namespace std;

struct Node
{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* nest1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1
        next = nullptr;
    }
};

int main(){
    vector<int> arr = {2, 5, 8, 7};
    Node* y = new Node(arr[0], nullptr);
    cout<<y->data;
return 0;
}

#include <iostream>
#include <vector> // Required for std::vector

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int data1, Node* next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};
    
    // Assigning values to the nodes
    Node* y1 = new Node(arr[0], nullptr);
    Node* y2 = new Node(arr[1], nullptr);
    Node* y3 = new Node(arr[2], nullptr);
    Node* y4 = new Node(arr[3], nullptr);

    // Linking of Nodes
    y1->next = y2;
    y2->next = y3;
    y3->next = y4;

    // Printing Nodes with their data and next pointer addresses
    cout << y1->data << " " << y1->next << "\n";
    cout << y2->data << " " << y2->next << "\n";
    cout << y3->data << " " << y3->next << "\n";
    cout << y4->data << " " << y4->next << "\n";

    // Freeing dynamically allocated memory
    delete y1;
    delete y2;
    delete y3;
    delete y4;

    return 0;
}