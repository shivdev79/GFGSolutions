/*
struct LNode { //Linked List
    int data;
    struct LNode* next;
    LNode(int x){
        data = x;
        next = NULL; }
};
struct TNode {   //Tree
    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x){
        data=x;
        left=right=NULL; }
}; */
class Solution {
  public:
    TNode *sortedListToBST(LNode *head) {
        vector <int> tree;
        while(head){
            tree.push_back(head -> data);
            head = head -> next;
        }
        return createbst(tree , 0 , tree.size() - 1);
    }
    TNode *createbst(vector <int> &tree , int start , int end){
        if(start > end){
            return NULL;
        }
        int mid = (start + end + 1)/2;
        TNode * root = new TNode(tree[mid]);
        root -> left = createbst(tree , start , mid - 1);
        root -> right = createbst(tree , mid + 1 , end);
        return root;
    }
};