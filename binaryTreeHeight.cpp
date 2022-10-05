#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int data){
        this -> data = data; 
        this -> left = this -> right = NULL;
    }
};

node* buildTree(node* root){

    cout << " ENTER THE DATA "<<endl;
    int data;
    cin >> data ;
    root = new node(data);

    if(data == -1){
        return NULL ;
    }

    cout << " ENTER THE LEFT OF DATA "<<data<<" ";
    root -> left = buildTree(root -> left );

    cout << " ENTER THE RIGHT OF DATA "<<data<<" ";
    root -> right = buildTree(root -> right );

    return root;
};

int height(node* root){
    if (root == NULL)
    {
        return 0;
    }

    int goLeft = height(root -> left );
    int goRight = height(root -> right );

    int ans = max(goLeft , goRight ) + 1;
    return ans ;
};

int main(){

    node* root = NULL;
    root = buildTree(root);

    cout << height(root);


    return 0;
}