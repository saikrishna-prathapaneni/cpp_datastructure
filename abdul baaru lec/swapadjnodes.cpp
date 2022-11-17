/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* newNode(int value){
    struct ListNode *temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=value;
    temp->next =NULL;
        return temp;
}

struct ListNode* swapPairs(struct ListNode* head){

   
    if( head ==NULL)
    return head;
    else if(head->next==NULL)
        return head;
        
    struct ListNode *temp,*t=head,*p=head->next; 
    
    while(p!=NULL&&t!=NULL){
        
           
    
    int temp1=p->val;
    int temp2=t->val;
    t->val= temp1;
    p->val= temp2;
    
        if (p->next==NULL){
        return head;
    }else{  
    t=p->next;
            p=p->next->next;
   
    }
        
    }
    return head;
    


}