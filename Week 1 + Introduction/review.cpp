#include <iostream>

/*
 Linked Lists:

 A way to store a collection of items, like an array. However, instead of one block of memory in the heap each item sits somewhere in memory on its own 
 and has a pointer to the next item.

 - Better to insert or remove.
 - Slower to access specific elements.

 Compromised of nodes = [data | next --> ]
*/

// syntax for a node

struct Node {
    int data; // container for values
    Node* next; // pointer to the next node
};

// To create a node and put it in memory

int main(){
    Node* head = new Node(); // Creates pointer called head, creates a new node in heap memory and returns its address
    head-> data = 10; // sets the data field to 10 node_name-> data = 
    head-> next = nullptr; // marks this as the last node  node_name-> next = 

    return 0;
}


// How to traverse a linkedlist

int main(){

    Node* head = new Node();
    
    Node* current = head; // Create a temp pointer that points to the head

    while (current != nullptr){ // while we are not pointing at nullptr then we keep going next and printing the data
        std::cout << current->data << " ";
        current = current->next;

    }
}

// Adding to the front is O(1)
// Adding to the back is O(n) | traverse and add when nullptr
// Insert is O(n)
// Remove is O(n)

/*
 Doubly Linked List:
 
 - Deletion is easier since u already have previous pointer (good)
 - Easier insert too

 - More memory (bad)
 - More complex
 - have to update more stuff


*/

// Syntax:

struct Node {
    int data;
    Node* prev;   // points to previous node
    Node* next;   // points to next node
};