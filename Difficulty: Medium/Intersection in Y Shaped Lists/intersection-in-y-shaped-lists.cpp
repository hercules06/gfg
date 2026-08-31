/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  code here
        Node* curr1=head1;
        Node* curr2=head2;
        int lena=0;
        int lenb=0;
        while(curr1!=NULL){
            lena++;
            curr1=curr1->next;
        }
        while(curr2!=NULL){
            lenb++;
            curr2=curr2->next;
        }
        curr1=head1;
        curr2=head2;
        while(lena>lenb){
            curr1=curr1->next;
            lena--;
        }
        while(lena<lenb){
            curr2=curr2->next;
            lenb--;
        }
        while(curr1!=curr2){
            curr1=curr1->next;
            curr2=curr2->next;
        }
        return curr1;
        
    }
};