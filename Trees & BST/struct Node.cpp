/*struct Node
{
    int data;
    Node *left, *right;
};*/
Node* createbst(int post[] ,int size ,int &index ,int lower , int upper);
Node *constructTree(int post[], int size) {
    int lower = INT_MIN;
    int upper = INT_MAX;
    int index = size - 1;
    return createbst(post , size , index, lower , upper);
}
Node* createbst(int post[] ,int size ,int &index ,int lower , int upper){
    if(index < 0 || post[index] < lower || post[index] > upper){
        return NULL;
    }
    Node* root = new Node(post[index--]);
    root -> right = createbst(post , size , index , root -> data , upper);
    root -> left = createbst(post , size , index , lower , root -> data);
    return root;
    
}