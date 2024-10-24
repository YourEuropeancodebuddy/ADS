#include<iostream>
#include"linkedlist.h"
class BinaryTree{
private:
    class Node{
        public:
        int data;
        Node *right;
        Node *left;
        Node(int data){
            this->data = data;
            this->right = NULL;
            this->left = NULL;
        }
    };
    Node *root;
    void helperinsert(Node* root, int data){
        if(data<=root->data){
            if(root->left == NULL){
                Node * newel = new Node(data);
                root->left = newel;
            }
            else{
                helperinsert(root->left, data);
            }
        }
        if ( data > root->data){
            if(root->right == NULL){
                Node * newel = new Node(data);
                root->right = newel;
            }
            else{
                helperinsert(root->right, data);
            }
        }
    }
    void helperconvert(Linkedlist &list, Node *root){
        if(root-> left!= NULL){
            helperconvert(list, root->left);
        }
        list.push(root->data);
        if (root->right != NULL){
            helperconvert(list, root->right);
        }
    }

    public:
    BinaryTree(){
         this->root = NULL;
         }
         void insert (int data){
            Node * newel = new Node(data); // when there is no element in the list 
            this->root = newel;
            return;
            helperinsert(this->root, data);
         }
        void convertinglist(Linkedlist&list){
            helperconvert(list, this->root);
        }



};