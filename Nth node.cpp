int getNthFromLast(Node *head, int n)
{
       // Your code here
       int count = 0; // Initialize count
    Node* current = head; // Initialize current
    while (current != NULL) {
        count++;
        current = current->next;
    }
    // return count;
    
    int k=count-n;
    if(k<0)
    {
        return -1;
    }
    Node* p=head;
    while(k)
    {
        p=p->next;
        k--;
    }
    return p->data;
}
