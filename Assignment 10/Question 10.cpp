/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        if(root==NULL){
            return -1;
        }
        else{
            int l_height=height(root->left);
            int r_height=height(root->right);
        if(l_height>=r_height){
            return l_height+1;
        }
        else return r_height+1;
        }
    }


#Question 
https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/submissions/code/309863209
