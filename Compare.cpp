/* Linked list Node structure
struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};
*/

// Compare two strings represented as linked lists
class Solution {
  public:
    int compare(Node *head1, Node *head2) {
        while (head1 != NULL && head2 != NULL) {
            if (head1->data > head2->data) return 1;
            else if (head1->data < head2->data) return -1;
            head1 = head1->next;
            head2 = head2->next;
        }

        if (head1 == NULL && head2 == NULL) return 0;
        if (head1 != NULL) return 1;
        return -1;
    }
};