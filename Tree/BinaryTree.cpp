#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int main(){
    int val,first,second;
    cin>>val;
    queue<node*>q;
    node* root = new node(val);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<":-";
        cin>>first;
        if(first!=-1){
            temp->left = new node(first);
            q.push(temp->left);
        }
         cout<<"Enter the right child of "<<temp->data<<":-";
        cin>>second;
        if(second!=-1){
            temp->right = new node(second);
            q.push(temp->right);
        }
    }

}