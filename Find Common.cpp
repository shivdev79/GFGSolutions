class Solution {
  public:
    // Function to find the nodes that are common in both BST.
    vector<int> findCommon(Node *r1, Node *r2) {
        vector <int> ans1;
        vector <int> ans2;
        vector <int> final;
        if(r1 == NULL && r2 == NULL){
            return final;
        }
        inorder1(r1, ans1);
        
        inorder2(r2 , ans2);
        int i = 0 ; int j = 0;
        while( i < ans1.size() && j < ans2.size()){
            if(ans1[i] == ans2[j]){
                final.push_back(ans1[i]);
                i++;
                j++;
            }
            else if( ans1[i] < ans2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return final;
    }
    void inorder1(Node *r1 , vector <int> &ans1){
        if(r1 == NULL){
            return ;
        }
        inorder1(r1 -> left , ans1);
        ans1.push_back(r1 -> data);
        inorder1(r1 -> right , ans1);
    }
    void inorder2(Node *r2 , vector <int> &ans2){
        if(r2 == NULL){
            return ;
        }
        inorder2(r2 -> left , ans2);
        ans2.push_back(r2 -> data);
        inorder2(r2 -> right , ans2);
    }
};