#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next = nullptr;
    }  
};
Node* convertarr2lld(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp  = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* mergenodes(Node* head){
    Node* temp = head->next;
    int sum = 0;
    Node* current = head;
    while (temp!=nullptr)
    {
        if(temp->data!=0){
            sum+=temp->data;
        }
        else{
            current->next = new Node(sum);
            current = current->next;
            sum=0;
        }
        temp = temp->next;
    }
    return head->next;
}
int main(){
    vector<int> vec = {0,1,1,0,2,2,0,3,3,0};
    Node* head = convertarr2lld(vec);
    Node* temp = mergenodes(head);
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}