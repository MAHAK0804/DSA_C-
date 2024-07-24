// Reverse doubly linked list at kth value
#include<iostream>
using namespace std;

class node{
    public:
     int data;
     node* next;
     node* prev;
     node(int val){
        data = val;
        next = NULL;
        prev = NULL;
     }

};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    // head->prev = n;
    // head = n;
    if(head!=NULL){
        head->prev = n;
    }
    // head->prev = n;

    head = n;
}

void inserAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head,val);
        return ;
    }
   node* n = new node(val); 
   node* temp = head;
   while(temp->next != NULL){
    temp = temp->next;
   }
   temp->next = n;
   n->prev = temp;

}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int length(node* head){
    int l=0;
    node* temp =head;
    while(temp!=NULL){
        l++;
        temp = temp->next;

    }
    return l;
     

}

node* kappend(node* &head, int k){
    node* newhead;
    node* newTail;
    node* tail = head;

    int l = length(head);
    k = k%l;
    int count = 1;
    while(tail->next!=NULL){
        if(count == l-k)
        {
            newTail = tail;
        }
        if(count==l-k+1){
            newhead=tail;
        }
        tail=tail->next;
        count++;
    }

    newTail->next=NULL;
    tail->next=head;
    return newhead;

}

int main(){
    node* head = NULL;
    int arr[]={1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        inserAtTail(head,arr[i]);
    }
    display(head);
    node* newhead = kappend(head,3);
    display(newhead);
}