#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
 class queue{
     public:
     Node*front=NULL;
     Node*back=NULL;
     void push(int x){
         Node*n=new Node(x);
         if(back==NULL){
             front=n;
             back=n;
             return;
         }
        
         back->next=n;
         back=n;
     }
     void pop(){
         if(front==NULL){
             cout<<"queue got underflow"<<endl;
         }
         Node*todelete=front;
         front=front->next;
         delete todelete;
     }
     void Front(){
         if(front==NULL){
             cout<<"there is no any fronty elememnt right know"<<endl;
         }
         else{
             cout<<front->data<<endl;
         }
     }
 };
 int main(){
     queue q;
     q.push(1);
     q.push(2);
     q.push(3);
     q.Front();
     q.pop();
     q.Front();
     
 }
