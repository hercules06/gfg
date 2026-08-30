/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==0){
            return NULL;
        }
        Node* newnode=new Node(arr[0]);
        Node* curr=newnode;
        
        for(int i=1;i<n;i++){
            curr->next=new Node(arr[i]);
            curr=curr->next;
            
        }
        return newnode;
    }
};