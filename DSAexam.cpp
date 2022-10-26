#include<bits/stdc++.h>
#include "string.h"
using namespace std;

class node{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};



class Linkedlist{
public:

    node* list,*head;
    int size = 0;
    Linkedlist()
    {
        list = NULL;
        head = NULL;
    }

    void push(int d)
    {
        if(size==0)
        {
            list = new node(d);
            head = list;
        }
        else
        {
            list->next = new node(d);
            list = list->next;
        }
        size++;
    }

    void display()
    {
        node*tem = head;
        while(tem!=NULL)
        {
            cout<<tem->data<<" ";
            tem = tem->next;
        }
        cout<<endl;
    }
};
class Stack{
public: 
    node *list,*tem;
    int size = 0;
    Stack()
    {
        list = NULL;
        tem = NULL;
    }

    void push(int d)
    {
        node*tem1 = new node(d);
        tem1->next = list;
        list = tem1;
        size++;
    }

    void pop()
    {
        list = list->next;
    }

    int peek()
    {
        return list->data;
    }
};


int32_t main()
{
    int n; cin>>n;
    int a[n]={0};

    for (int i = 0; i < n; ++i)
        cin>>a[i];
    

    Linkedlist l = Linkedlist();

    for (int i = 0; i < n; ++i)
    {
        l.push(a[i]);
    }

    l.display();


    Stack s1 = Stack();
    Stack s2 = Stack();


    for (int i = n-1; i>=0; --i)
    {
        if(i%2)
        {
            s1.push(a[i]);
        }
        else
        {
            s2.push(a[i]);
        }
    }



    Linkedlist fians = Linkedlist();

    for (int i = 0; i < s2.size; ++i)
    {
        fians.push(s2.peek());
        s2.pop();
    }

    for (int i = 0; i < s1.size; ++i)
    {
        fians.push(s1.peek());
        s1.pop();
    }

    

    fians.display();


    return 0;
}
