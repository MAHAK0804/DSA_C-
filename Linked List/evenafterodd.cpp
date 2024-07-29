#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next=NULL;
    }
};

void insert(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void evenafterodd(node* head){
    node* odd = head;
    node* even = head->next;
    node* evenstart = even;
    while(odd->next!=NULL && even->next!=NULL){
        odd->next = even->next;
        odd= odd->next;
        even->next = odd->next;
        even = even->next;
    }
    odd->next = evenstart;
    if(odd->next==NULL){
        even->next=NULL;
    }
}

void display(node * head){
    node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    evenafterodd(head);
    display(head);

}
