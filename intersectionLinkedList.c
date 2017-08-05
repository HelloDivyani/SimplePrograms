/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/

int getNodes(struct node* head)
{
    if(head==NULL)
    {
        return 0;
    }
int c=0;
    struct node* temp=head;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
        
    }
    return c;
}

struct node* sort(struct node* head)
{
    if(head==NULL){
        return head;
    }
    int t;
    struct node* temp1=head;
    struct node* temp2=temp1->next;
    while(temp1!=NULL)
    {
        temp2=temp1->next;
        while(temp2!=NULL)
        {
            if(temp1->data>temp2->data)
            {
                // swap data of temp1&2
                t=temp1->data;
                temp1->data=temp2->data;
                temp2->data=t;
            }
            temp2=temp2->next;
            
        }
        temp1=temp1->next;
    }
    return head;
}
struct node* insert(struct node* head,int data)
{
    struct node* n=(struct node*)malloc(sizeof(struct node*));
    n->data=data;
     n->next=NULL;
    if(head==NULL)
    {
        head=n;
    }
    else
    {
        struct node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
       
    }
    return head;
}

int check(struct node* head,struct node* add,int data)
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            break;
        }
        temp=temp->next;
    }
    
    if(temp==add)
    {
        return 1;
    }
    return 0;
}
int search(struct node* head,int data)
{
    if(head==NULL)
    {
        return 0;
    }
    struct node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==data)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
struct node* findIntersection(struct node* head1, struct node* head2)
{
    struct node* head=NULL;
    //struct node* in=(struct node*)malloc(sizeof(struct node*));
    struct node* temp1;
    int a=getNodes(head1);
    int b=getNodes(head2);
    // code here
    temp1=head1;
  int k;
    struct node* temp2=head2;
   // int s[b];
    while(temp1!=NULL)
    {
        
        temp2=head2;
        while(temp2!=NULL)
        {
           
            if( temp1->data!=-1 && temp2->data!=-1 && temp1->data==temp2->data)
            {
            //    k=check(head2,temp2,temp2->data);
             //  k=search(head,temp1->data);
                 //if(k==1)
                 //{
                    head=insert(head,temp2->data);
                    temp1->data=-1;
                    temp2->data=-1;
                 //}
                 
                 break;
                // Check the data occured first time
               // z=temp1->data;
               // 
               
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
    
    // Before returing sort it
    head=sort(head);
    return head;
}
