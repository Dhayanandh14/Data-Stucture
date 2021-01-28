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
    Node* search(int f){
        bool check = true;
        Node* find =NULL;
        find= head;
        while(find!=NULL && check){
          if(find->data == f){
            check = false;
          }
          else{
            find = find->address;
          }
        }
        return find;
      }
    bool del(int d){
      Node* remove =NULL;
      remove = head;
      bool delcheck=false;
      bool stop=true;
     while(remove->address!=NULL && stop){
       if(remove->data==d){
         delete remove;
         delcheck=true;
         stop = false;
       }
       else{
         remove = remove->address;
       }
      }   
      return delcheck; 
    }
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
     cout<<endl;
     Node* find = obj1->search(10);
     if(find == NULL){
       cout<<"Search Value is not found"<<endl;
     }
     else{
       cout<<"Search Value is: "<<find->data<<endl;
     }
     bool dele = obj1->del(300);
     if(dele){
       cout<<endl;
       cout<<"Yeah Deleted";
     }
     else{
       cout<<"No!!! value is not there So you cannot delete"<<endl;
     }
    // obj1->remove();
    delete obj;
    delete obj1;

}