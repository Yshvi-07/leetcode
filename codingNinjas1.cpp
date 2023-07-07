/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
void inorder(BinaryTreeNode<int> *root,int &c){
         // int c=0;
          if(root==NULL){
              return;
          }
          inorder(root->left,c);
          if(root->left==NULL && root->right==NULL){
              c++;
          }
          inorder(root->right,c);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    int c=0;
    inorder(root,c);
    return c;
}
