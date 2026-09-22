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
        int lena=0;
        int lenb=0;
        Node* temp1=head1;
        while(temp1!=NULL){
            
            lena++;
            temp1=temp1->next;
        }
        Node* temp2=head2;
        while(temp2!=NULL){
            lenb++;
            temp2=temp2->next;
        }
        temp1=head1;
        temp2=head2;
        while(lena>lenb){
            temp1=temp1->next;
            lena--;
        }
        while(lenb>lena){
            temp2=temp2->next;
            lenb--;
        }
        while(temp1!=temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
        
        }
};