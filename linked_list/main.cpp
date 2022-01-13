#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
      int data;
      Node* Next;
};

// void push(Node* head, int data){
//     Node* new_node = new Node;
//     new_node->data = data;
//     new_node->Next = head;
//     head = new_node;
// }

void printList (Node* n) {
  while (n != NULL){
      cout << n->data << " ";
      n = n->Next;
    }
}

int length(Node* n){
    if(n==NULL){
        return 0;
    }
    else{
        return 1+length(n->Next);
    }
}

// int length(Node* n){
//     int len = 0;
//     while(n!=NULL){
//         len++;
//         n = n->Next;
//     }
//     return len;
// }

bool search(Node* head, int key){
    while(head!=NULL){
        if(head->data == key){
                return true;
        }
        head = head->Next;
    }
    return false;
}

int NthNode(Node* head, int n){
    if(head == NULL){
        return -1;
    }
    if(n==0){
        return head->data;
    }
    return NthNode(head->Next, n-1);
}

void printMiddle(class Node *head){
        Node *slow_ptr = head;
        Node *fast_ptr = head;
 
        if (head!=NULL)
        {
            while (fast_ptr != NULL && fast_ptr->Next != NULL)
            {
                fast_ptr = fast_ptr->Next->Next;
                slow_ptr = slow_ptr->Next;
            }
        cout << "The middle element is [" << slow_ptr->data << "]" << endl;
    }
}


// int count(Node* head, int search_for)
// {
//     Node* current = head;
//     int count = 0;
//     while (current != NULL) {
//         if (current->data == search_for)
//             count++;
//         current = current->Next;
//     }
//     return count;
// }

int count(Node* head, int key)
{
    if (head == NULL)
        return 0;
    if (head->data == key)
        return 1 + count(head->Next, key);
    return count(head->Next, key);
}

bool hasCycle(Node *head) {
    unordered_set<ListNode *>s;
        while(head!=NULL){
            if(s.find(head)!=s.end()){
                return true;
            }
        s.insert(head);
        head = head->next;
    }
    return false;
}

int main (){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    Node* fifth = NULL;
    
    head = new Node;
    second = new Node;
    third = new Node;
    fourth = new Node;
    fifth = new Node;
    
    head->data = 1;
    head->Next = second;
    
    second->data = 2;
    second->Next = third;
    
    third->data = 3;
    third->Next = fourth;
    
    fourth->data = 5;
    fourth->Next = fifth;
    
    fifth->data = 5;
    fifth->Next = NULL;
    
    // push(head, 4);
    // printList(head);
    // cout<<length(head);
    // cout<<search(head, 3);
    // cout<<NthNode(head, 1);
    // printMiddle(head);
    cout<<count(head, 5);
    
}

