#include <iostream>

using namespace std;

    /*  Реализовать стек. Код есть в доке, но нужно запустить у себя и проверить что всё работает.   
        Добавить в стек ещё один метод - printAll(). 
        Метод должен пройтись по всем элементам и вывести все значения. 
        При работе метода ни стек, ни элементы изменяться не должны.
    */

    /* Реализовать связный список. Описание есть в доке с пары. Реализовать методы add(int item), size() и get(int id). */

struct Node{
    int item;
    Node * next;
};

struct Stack
{

    Node * pHead = NULL;

    void Push(int item){
        Node * node = new Node;

        node->item = item; 
        node->next = pHead;
        pHead = node;
    }

    int Pop()
    {
        if (!pHead)
            throw 1;

        Node * temp = pHead;
        int x = temp->item;
        pHead = temp->next;
        delete temp;
        return x;
    }

    int Peek()
    {
        if (!pHead)
            throw 1;

        return pHead->item;
    }


    void printAll(){
        Node *q = pHead;

        while (q != NULL){

            cout<<q->item<<endl;
            q = q->next;
        }
        
        
             
    }

};

int main(){
    Stack * stack = new Stack;

    stack->Push(10);
    stack->Push(20);
    stack->Push(30);

    stack->printAll();
    delete stack;
    return 0;
}