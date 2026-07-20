/*
Remove the first element matching a given key from a linked list.

Example:
Input:
linkedList: [1,5,3,2,1]
key: 3
Output: [1,5,2,1]
*/

// Time start 11:15pm - paused at 11:37. Current time: 22minutes
// Time resumed 12:15- 12:31 
// Total Time: 16 + 22 = 38
// Initial thought process just iterate through the linkedlist until next == null and remove if we find the key. 

// account for removal at the head. change loop to stop after the last node and not before.

#include <iostream>

struct Node{
    int data;
    Node* next;
};

Node* remove(Node* head, int key){
    Node* temp = head;
    Node* start = head;

    if(head->data == key){
        return head->next;
    }
    head = head->next;
    while(head != nullptr){
        if(head->data == key){
            temp->next = head->next;
            break;
        }else{
            temp = temp->next;
        }
        head = head->next;
    }

    return start;
}

int main() {

}