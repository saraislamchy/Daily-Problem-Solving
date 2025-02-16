#include<bits/stdc++.h>
using namespace std;
class Node
{
public :
    string val;
    Node *next;
    Node *prev;
    Node (string val)
    {
        this-> val = val;
        this-> next = NULL;
        this ->prev = NULL;
    }
};

void insert_tail(Node *&head,Node *&tail,string val)
{
    Node *newNode = new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail= newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    string s;
    cin>>s;
    while(true)
    {
        cin>>s;
        if(s=="end")
            break;

        insert_tail(head,tail,s);
    }

    int q;
    cin>>q;
    while(q--)
    {
        string com,site;
        cin>>com;
        if(com=="visit")
        {
            string site;
            cin>>site;

            Node *tmp= head;
            while(tmp!=NULL && tmp->val!=site)
            {
                tmp = tmp->next;
            }

            if(tmp!=NULL)
            {
                cout<<tmp->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
            else if(com=="next"  && head!=NULL && head->next!=NULL)
            {
                head = head->next;
                cout<<head->val<<endl;
            }
            else if(com=="prev" && head!=NULL && head->prev!=NULL)
            {
                //Node *tmp= head;
                head= head->prev;
                cout<<head->val<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }

    }


