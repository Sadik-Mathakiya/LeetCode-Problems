/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* save=head;
    struct ListNode* prev=NULL;
    int c=0;
    while(save->next!=NULL){
        save=save->next;
        c++;
    }
    c++;
    save=head;
  if(c==n){
    head=save->next;
    free(save);
    return head;
  }
    for(int i=1 ;i<=c-n&&save!=NULL;i++){
        prev=save;
        save=save->next;
    }
    

    prev->next=save->next;
    free(save);
    return head;
}