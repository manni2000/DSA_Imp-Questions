 #include<bits/stdc++.h>
 using namespace std;

 struct Node{
    Node* next;
    int data;
 };
 
 Node* sortList(Node* head)
    {
        // Your Code Here
        if(head == NULL) return head;
        
        Node *prev = head;
        Node *current= prev->next;
        Node *front = head;
        
        while(current){
            if((current->data)<0){
                while(current && (current->data)<0){
                    prev->next = current->next;
                    current->next = front;
                    front = current;
                    current = prev->next;
                }
            }
            if(current){
                current = current->next;
                prev= prev->next;
            }
        }
        return front;
    }

//Example 1:
// Input: 
// List: 1, -2, -3, 4, -5
// Output: 
// List: -5, -3, -2, 1, 4
// Explanation: 
// Actual sorted order of {1, -2, -3, 4, -5}
// is {-5, -3, -2, 1, 4}