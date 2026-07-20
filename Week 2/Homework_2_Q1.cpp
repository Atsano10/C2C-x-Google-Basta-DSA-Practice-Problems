/*
Remove the first element matching a given key from a linked list.

Example:
Input:
linkedList: [1,5,3,2,1]
key: 3
Output: [1,5,2,1]
*/

// Time start 11:15pm - paused at 11:37.
// Thought process just iterate through the linkedlist until next == null and 
// remove if we find the key. 

// Just setting up the function and we can test it somehow else.

#include <iostream>

struct Node{
    int data;
    Node* next;
};

Node* remove(Node* head, int key){
    Node* temp = head;
    while(head->next != nullptr){
        if(head->data == key){

        }
        head = head->next;
    }

    return head;
}

int main() {

}