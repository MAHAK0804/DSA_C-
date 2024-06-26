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

int main (){
    node* head=NULL;
    inserAtTail(head,1);
    inserAtTail(head,2);
    inserAtTail(head,3);
    inserAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
}