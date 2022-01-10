#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node * ptr){
    while(ptr!=NULL)
    {
        cout<<"\nElement:"<<ptr->data;
        ptr=ptr-> next;
    }
}
struct Node* InsertAtFirst(struct Node *head, int data){
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node* InsertAtIndex(Node *head,int data,int index){
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    struct Node* p = head;
    int i=0;
    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}
struct Node* InserAfterNode(struct Node *head,struct Node* prevNode,int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=prevNode->next;
    prevNode=ptr;
    return head;
}
struct Node* InsertAtEnd(struct Node* head, int data){
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}


int main(){
    int d1,d2,d3,d4;
    int val,ind,ch;

    cout<<"\nEnter first data of your linked list: ";
    cin>>d1;
    cout<<"\nEnter second data of your linked list: ";
    cin>>d2;
    cout<<"\nEnter third data of your linked list: ";
    cin>>d3;
    cout<<"\nEnter fourth data of your linked list: ";
    cin>>d4;
    
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    // struct Node* prevNode1;
    
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    head->data=d1;
    head->next=second;
    second->data=d2;
    second->next=third;
    third->data=d3;
    third->next=fourth;
    fourth->data=d4;
    fourth->next=NULL;
    
    cout<<"Enter operation to be performed:";
    cout<<"\n1:Insert data at First ";
    cout<<"\n2:Insert data at index ";
    cout<<"\n3:Insert data at end ";
    // cout<<"\n4:Insert data after a node";
    cin>>ch;
    
    switch (ch)
    {
    case 1:
    cout<<"\nEnter your data: ";
    cin>>val;
    head=InsertAtFirst(head,val);
    traversal(head); 
        break;
    case 2: 
    cout<<"\nEnter your data: ";
    cin>>val;
    cout<<"\nEnter Index where data is to be added: ";
            cin>>ind; 
        head=InsertAtIndex(head,val,ind);
        traversal(head); 
        break;
    case 3:
    cout<<"\nEnter your data: ";
    cin>>val;
     head=InsertAtEnd(head, val);
    traversal(head); 
        break;
    // case 4: cout<<"\nEnter the node after which data is to be added(head,second,third,fourth)";
    //         cin>>prevNode1;
    //     head=InserAfterNode(head,prevNode1,val); 
    default: cout<<"Please enter a correct option";
        break;
    // head = InsertAtIndex(head, 56,2);
    }
    return 0;
} 
