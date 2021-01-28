#include <iostream>
using namespace std;
class Node
{
  public:
     int data;
     Node* address;
     ~Node(){
       cout<<"fh";
     }
    
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
          while(e->address != NULL){
              e= e->address;
          }
          e->address=tempEnd;
      }
      else {
          head = tempEnd;
      }
      cout<<endl;
      cout<<"Inserted N at end of the list: "<<tempEnd->data<<endl;
      cout<<endl;
    }
       void find(int f){
          bool check = true;
          bool nextcheck = true;
          Node* find = head;
          while(find!=NULL && check){
            if(find->data == f){
              cout<<endl;
              cout<<"Yes value is there in the list"<<endl;
              check = false;
              nextcheck = false;
            }
              find = find->address;
          }
          if(nextcheck){
              cout<<endl;
              cout<<"No value is not there in the list"<<endl;
            }
        }

    int pop(){
      Node *e = head;
      if (head!=NULL){
         while(e->address != NULL)
            e= e->address;
      }
      else{
        e=head;
      }
      return e->data;
    }
 
    
   void remove(){
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
    int find;
    cout<<"Enter Number: ";
    cin>>find;
    List* obj1 = new List(a,5);
    cout<<"Length Of List is: "<<obj1->length()<<endl;
    obj1->display();
    obj1->find(find);
    obj1->append(60);
    cout<<"Last element of the list: "<<obj1->pop()<<endl;
    obj1->remove();


}