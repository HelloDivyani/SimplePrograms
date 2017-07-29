/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   if(head == NULL)
   {
       //printf("1");
       return true;
       
   }
   
   struct Node *temp=head->next;
   while(temp!=head && temp!=NULL)
   {
       temp=temp->next;
     
   }
   if(temp==NULL)
   {
       return false;
   }
   if(temp==head)
   {
       return true;
   }
   return true;
   
   
}
