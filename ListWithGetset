#include <iostream>
using namespace std;
class Node{         
   int data;      
   Node *nextLink; 
   public:
   Node()
   {         
     data = 0;       
     nextLink = NULL; 
   }                 
   Node(int a)
   {      
      data = a;      
      nextLink = NULL;
   } 
   void setData(int d)
   {
     data = d;
   } 
   int getData()
   {
     return data;
   }   
   void setLink(Node *link)
   {
      nextLink=link;
   }             
   Node* getLink()
   {
     return nextLink;
   }
};
class List
{
  public:
    List(int i[],int s)    
    {
        Node* head = NULL;
        Node* temp = NULL;
        Node* connector = NULL;
        for(int i=0;i<s;i++)
        {
            temp = new Node();
            temp -> setData(i);
          if(head == NULL)
          {
              head= temp;
              connector = temp;
          }
           else
           {
             connector->setLink(temp);
             connector = temp;
          }
        }
  }
};
int main() {
  cout<<"Enter Size: ";
  int s;
  cin>>s;
  int a[s];
  for(int i =0;i<s;i++){
    cout<<"Enter Number: ";
    cin>>a[i];
  }
  Node* obj = new Node();
  List* l = new List(a,s);//5//4
  obj->setData(50);
  cout<<obj->getData();  
}
