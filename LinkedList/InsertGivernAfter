#include <iostream>
using namespace std;
class Node
{
  public:
     int data;
     Node* address;

  // ~Node(){
  //   cout<<"poda panni";
  // }
};

class List
{
  private:
    Node *head;
    int len;
  public:
  List(){ 
     head =NULL;
     len=0;
  }
  List(int arr[],int l)
  {
    head = NULL;
    Node* temp = NULL;
    Node* connector = NULL;
    
    for(int i=0;i<l;i++)
    {
      temp = new Node();
      temp->data=arr[i];
      if(head == NULL)
      {
        head = temp;
        connector = temp;
      }
      else 
      {
        connector->address= temp;
        connector = temp; 
      }
      
    }
    connector = NULL;
  } 
    int length()
    { 
      int count=0;
      Node* l = head;
      while(l!=NULL){
        count = count+1; 
        l = l->address;

      }
      return count;

    }
    void display(){
      Node* t= head;
     while(t!=NULL)
     {
       cout<<"List values are: "<<t->data<<endl;
       t=t->address;
     } 
    }
    
    void append(int n){
      Node *e = head;
      Node *tempEnd = NULL;
      tempEnd = new Node();
      tempEnd->data=n;
      tempEnd -> address = NULL;
      if(head != NULL) {
          while(e->address != NULL) {  e= e->address;  }
          e->address=tempEnd;
      }
      else {
          head = tempEnd;
      }
      cout<<endl;
      cout<<"Inserted N at end of the list: "<<tempEnd->data<<endl;
      cout<<endl;
    }
    
    Node* pop(){
      Node *e = head;
      if (head!=NULL){
         while(e->address != NULL){
              e= e->address;
          }
      }
      return e;
    }
    // void search(int f,int addValue){
    //   Node *s= head;
    //   Node *givenValueNode = new Node();
    //   givenValueNode->data=addValue;
    //   if(head!=NULL){
    //     while(s->address!=NULL){
    //       s=s->address;
    //       if(s->data == f){
    //         s->address = givenValueNode;
    //         givenValueNode->address=
    //       }
    //     }
    //   }
    //   else{
    //     head = givenValueNode;
    //   }
    // }
 

  ~List(){
    cout<<endl;
    Node* del  =  head;
    while(del!=NULL){
      head = head->address;
      cout<<del->data<<" deleted"<<endl;
      delete del;
      del = head;
    }
  }
};

int main()
{
    cout<<endl;
    int a[]= {10,20,30,40,50};
    Node* obj  = new Node();
    List* obj1 = new List(a,5);
     cout<<"Length Of List is: "<<obj1->length()<<endl;
     obj1->display();
     obj1->append(60);
     Node* check = obj1->pop();
     if(check==NULL){
       cout<<"Value is not found";
     }
     else{
       cout<<check->data;
     }
    // obj1->remove();
    delete obj;
    delete obj1;

}