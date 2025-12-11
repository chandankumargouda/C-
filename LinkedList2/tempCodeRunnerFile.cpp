bool reverse(Node* head){
    int n=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;
        n++;
    }
    int i=0;
    int j=n-1;
    while(i<j){
        Node* left=getNodeAt(head,i);
        Node* right=getNodeAt(head,j);
        if(left->val!=right->val) return false;
        i++;
        j--;
    }
    temp=head;
    while(te