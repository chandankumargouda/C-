class Node{
    public:
    int val;
    Node* next;
    Node* random;
};
class solution{
    public:
    Node* copyRandomList(Node* head){
        //step-1:creat the deep copy without random pointer
        Node* dummy=new Node(0);
        Node* tempc=dummy;
        Node* temp=head;
        while(temp!=NULL){
            Node* a=new Node(temp->val);
            tempc->next=a;
            tempc=tempc->next;
            temp=temp->next;
        }
        Node* duplicate=dummy->next;
        //step-2:alternate connection
        Node* a=head;
        Node* b=duplicate;
        dummy=new Node(-1);
        Node* tempd=dummy;
        while(a!=NULL){
            tempd->next=a;
            a=a->next;
            tempd=tempd->next;
            tempd->next=b;
            b=b->next;
            tempd=tempd->next;
        }
        dummy=dummy->next;
        //step-3: Assigning random pointer
        Node* t1=dummy;//t1 will traverse in the originat list
        while(t1!=NULL){
            Node* t2=t1->next;//2 is duplicate
            if(t1->random!=NULL){
                t2->random=t1->random->next;
            }
            t1=t1->next->next;
        }
        //step-4:removing the connections(separate)
        Node* d1=new Node(-1);
        Node* d2=new Node(-1);
         t1=d1;
        Node* d2=t2;
        Node* t=dummy;
        while(t!=NULL){
            t1->next=t;
            t=t->next;
            t1=t1->next;
            t2->next=t;
            t=t->next;
            t2=t2->next;
        }
        t1->next=NULL;
        t2->next=NULL;
        d1=d1->next;//original with random
        d2=d2->next;//duplicate with random
        return d2;
    }
};