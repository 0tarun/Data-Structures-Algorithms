#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

node *top = nullptr;

void push(int Value)
{
    node *temp = NULL;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        //top = newNode;
        cout << "Stack is empty";
    }

   
    temp->data = Value;
    temp->next = top;
    top = temp;
    temp = nullptr;
}

void pop()
{
  

    if (top == nullptr)
    {
        cout << "Under flow";
    }
    int value = top->data;
   // cout  << value<<"     ";
    struct node *temp = top;
    top = top->next;
    free(temp);
    temp = NULL;

}
void display()
{
    node *temp = top;
    while (temp != NULL)
    {
        cout <<temp->data;
        temp = temp->next;
    }
}
void peek()
{
    cout << top->data;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    pop();
    pop();
   
    display();
    peek();

    return 0;
}