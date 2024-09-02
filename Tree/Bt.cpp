#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data= val;
        left=NULL;
        right=NULL;
    }
};

node* Binarytree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    else{
        node* root = new node(x);
        cout<<"Enter left node of "<<x<<":- ";
        root->left=Binarytree();
        cout<<"Enter right node of "<<x<<":- ";
        root->right = Binarytree();
        return root;
    }
}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void total(node*root, int & count){
    if(root==NULL){
        return;
    }
    count++;
    total(root->left,count);
    total(root->right,count);
}

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int getsize(node* root){
    if(!root){
        return 0;
    }
    return (1+getsize(root->left)+getsize(root->right));
}
// sum of binary tree
int sum(node* root){
      if(!root){
        return 0;
    }
    return (root->data+sum(root->left)+sum(root->right));
}
//  leaves nodes
void leaves(node* root, int &cnt){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        cnt++;
        return;
    }
    leaves(root->left,cnt);
    leaves(root->right,cnt);

}
void nonleaves(node* root, int &ct){
    if(root==NULL){
        return;
    }
    if(root->left!=NULL && root->right!=NULL){
        ct++;
        return;
    }
    leaves(root->left,ct);
    leaves(root->right,ct);

}

int height(node* root){
    if (root==NULL){
        return 0;
    }
    return (1+max(height(root->left),height(root->right)));
}

bool isIdentical(node*r1,node*r2){
    if(r1==NULL && r2==NULL){
        return 1;
    }
    if((!r1&&r2)||(r1&&!r2)){
        return 0;
    }
    if(r1->data!=r2->data){
        return 0;
    }
    return (isIdentical(r1->left,r2->left)&& isIdentical(r1->right,r2->right));
}

void mirror(node* root){
    if(!root){
        return;
    }
    node*temp=root->right;
    root->right=root->left;
    root->left=temp;
    mirror(root->left);
    mirror(root->right);
}


int main(){
    cout<<"Enter root node:- ";
    int count =0,cnt=0,ct=0;
    node* temp;
    node*temp2;
    temp=Binarytree();
    temp2=Binarytree();
    cout<<"preorder ";
    preorder(temp);
    cout<<endl;
    cout<<"inorder ";
    inorder(temp);
    cout<<endl;
   cout<<"postorder ";
    postorder(temp);
    cout<<endl;
   cout<<"size "; 
    total(temp,count);
    cout<<count;
    cout<<endl;
    cout<<"other method ";
    cout<<getsize(temp);
    cout<<endl;
   cout<<"leaves ";
    leaves(temp,cnt);
      cout<<endl;
     cout<<"nonleaves ";
    nonleaves(temp,ct);
    cout<<cnt;
     cout<<endl;
   cout<<" sum ";
    cout<<sum(temp);
    cout<<endl;
    cout<<"height";
    cout<<height(temp);
    cout<<endl;
    cout<<"isIdentical";
    cout<<isIdentical(temp,temp2);
    cout<<endl;
    cout<<"mirro";
 mirror(temp);
    
    
    

}