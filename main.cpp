#include <iostream>
#include<stddef.h>

using namespace std;
struct node
{
    int data;
    node *next;
};
class linklistop
{
private:
    node *head,*temp,*temp1;
    int key;
    int index;
    int removeKey;
    int searchKey;

public:
    linklistop()
    {
        head=temp=temp1=NULL;
    }
    void add()
    {
        bool checked=false;
        if(head==NULL)
        {
            head=new node;
            cout<<"Enter the element yo want to add : ";
            cin>>head->data;
            head->next=NULL;
            cout<<"Added succesfully"<<endl;
            return;
        }
        else if(head!=NULL)
        {
            temp=head;
            cout<<"What you want to add ? ";
            cin>>key;
            cout<<"After which element ? ";
            cin>>index;


            while(temp!=NULL)
            {
                if(temp->data==index)
                {
                    temp1=new node;
                    temp1->data=key;
                    temp1->next=temp->next;
                    temp->next=temp1;
                    checked=true;
                    cout<<"Added succesfully "<<endl;
                }
                temp=temp->next;
            }


        }
        if(checked==false)
            {
                cout<<"Element not found";
            }
    }
    void print()
    {
        temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void searchElement()
    {
        cout<<"Enter element yo want to search : ";
        cin>>searchKey;
        temp=head;
        bool checks=false;
        while(temp!=NULL)
        {
            if(temp->data==searchKey)
            {
                cout<<"Element Found";
                checks=true;
            }
            temp=temp->next;
        }
        if(checks==false)
        {
            cout<<"Element not found ";
        }
    }
    void removeElement()
    {
        temp=head;
        cout<<"What you want to delete ?";
        cin>>removeKey;
        bool checks=false;
        if(head==NULL)
        {
            cout<<"Link list is empty "<<endl;
            return;
        }
        else if(head!=NULL){
        while(temp!=NULL)
        {
            if(temp->next->data==removeKey)
            {
                temp1=temp->next;
                temp->next=temp1->next;
                delete temp1;
                temp1=NULL;
                checks=true;
                cout<<"Deleted succesfully"<<endl;
            }
            temp=temp->next;
        }
        }
        else if(checks==false)
        {
            cout<<"Element not found";
        }
    }
};

int main()
{
    linklistop a2;
    int i;

    while(i!=5)
    {
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"What you want to do?"<<endl;
        cout<<"1-Add element to link list "<<endl;
    cout<<"2-Delete element from link list "<<endl;
    cout<<"3-Search element in link list "<<endl;
    cout<<"4-Print elements of link list "<<endl;
    cout<<"5-exit "<<endl;
        cout<<"Enter option : ";
        cin>>i;
    if(i==1)
    {
        a2.add();
    }
    else if(i==2)
    {
        a2.removeElement();
    }
    else if(i==3)
    {
        a2.searchElement();

    }
    else if(i==4)
    {
        a2.print();
    }
    }
}
