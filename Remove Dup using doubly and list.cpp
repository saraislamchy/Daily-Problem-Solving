//doubly
/*#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linekd_list(Node *head)
{
    // Node *tmp = head;
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }

}

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    Node *tmp = head;
    while(tmp!=NULL)
    {
        Node *tmp2 =tmp;
        while(tmp2->next!=NULL)
        {
            if(tmp->val == tmp2->next->val)
            {
                Node *delNode = tmp2->next;
                tmp2->next = delNode->next;
                delete delNode;
            }
            else
            {
               tmp2 = tmp2->next;
            }

        }
        tmp=tmp->next;
    }
    print_linekd_list(head);

    return 0;
}

*/

//list
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int>myList;
    //int val;
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        list<int>myList;

        for(int i=0; i<n; i++)
        {
            int val;
            cin>>val;
            myList.push_back(val);
        }
        myList.sort();
        myList.unique();
        for(int val: myList)
        {
            cout<<val<<" ";
        }
    }
    return 0;
}



