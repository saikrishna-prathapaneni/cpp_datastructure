/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int num(int *ar,int n){
   int sum=0;
    for(int i=0;i<n;i++){
      sum= sum+ pow(10,i)*ar[i];
    }
    return sum;
}


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *new,*t,*last;
    new =  (struct ListNode *)malloc(sizeof(struct ListNode))
    
        int len1=0,len2=0;
while(l1!=0){
    l1=l1->next;
    len1++;
}
while (l2!=0){
    l2=l2->next;
    len2++;
}

if len1==len2==0{
    return new;
}
else if (len1==0 && len2!=0){
    return l1;
}
else if (len2==0 && len1!=0){
    return l1
}
else
{
    if (len1>len2)
       {
            int carry=0,data=0;
            new->next=NULL;
            last=new
            while(l1!=0)
            {  
               t=(struct ListNode*)malloc(sizeof(struct ListNode))
               if(l2!=0){
                data=l1->val+l2->val+carry;
                    
               }
                else{
                    data=l2->val+carry
                }
               
               
            }   
        }     
}

        
}