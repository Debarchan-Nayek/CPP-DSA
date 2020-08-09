#include <iostream>
#include<string.h>
using namespace std;
class node{
  public:
  int data;
  node*next;
};
node*first=NULL;
void push(node**p,int n)
{
  node*t=new node;
  t->data=n;
  t->next=first;
  first=t;

}
void add(node**p,int k)
{
  node*temp=*p;
  node*t=new node;
  t->data=k;
  t->next=NULL;
  while(temp->next!=NULL)
    temp=temp->next;
  temp->next=t;
}
void deletefrompos(int pos)
{
  node*temp=first;
  node*prev;
  int i=1;
  while(i<pos-1)
  {
    temp=temp->next;
    i++;
  }
  prev=temp->next;
  temp->next=prev->next;
  free(prev);
}

void display(node*p)
{cout<<"LINKED LIST:\n";
  while(p!=NULL)
  {
    cout<<p->data<<" ";
    p=p->next;
  }
}
int main()
{
  int p,l,i=0;
  cout<<"Enter the value in the first node: ";
  cin>>p;
  push(&first,p);
  char n[3];
  while(i>=0){
  cout<<"Do you want to add a new node :\nEnter Yes or No :";
  cin>>n;
  if(strcmp(n,"yes")==0||strcmp(n,"Yes")==0){
  cout<<"Enter value for the next node:";
  cin>>l;
  add(&first,l);
  }
  else {
  cout<<"Dhanyawaad aapka\n";
  break;
  }
  }
  deletefrompos(3);//you can even enter the position which you want to delete
  display(first);
}

