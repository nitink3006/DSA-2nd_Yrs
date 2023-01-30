/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        if(root == NULL)
            return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            for(int i=q.size();i>0;--i){
                Node* node = q.front();
                q.pop();
                cout<<(node->data)<<" ";
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }        
        }
    }

#Question 
https://www.hackerrank.com/challenges/tree-level-order-traversal/submissions/code/310581023
