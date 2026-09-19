/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution {
  public:
  void collect(Node* root , vector <int> &v){
      if(root == NULL){
          return ;
      }
      v.push_back(root -> data);
      collect(root -> left , v);
      collect(root -> right , v);
      
  }
    int findMax(Node *root) {
        vector <int> v;
        collect(root,v);
        int size = v.size();
        sort(v.begin() , v.end());
        int rx = v[size -1];
        return rx;
        
    }

    int findMin(Node *root) {
        vector<int> v;
        collect(root , v);
        int size = v.size();
        sort(v.begin() , v.end());
        int kx = v[0];
        return kx;
    }
};