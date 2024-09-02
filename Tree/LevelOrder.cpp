#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left,* right;
    node(int val){
        data =  val;
        left=NULL;
        right= NULL;
    }
};

vector<int> level(node* root){
    queue<node*> q;
    vector<int> ans;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }

    }
    return ans;
}

