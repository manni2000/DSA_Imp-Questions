#include<bits/stdc++.h>
using namespace std;

int main()
{
    ListNode* reverseList(ListNode* head) {
        
        struct ListNode *prev, *curr, *next;
        prev=NULL;
        curr=head;
    
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        head = prev;
        return head;
    }
}