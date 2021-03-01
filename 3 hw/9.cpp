#include <iostream>

using namespace std;


struct Node
{
    int item;
    Node *next, *prev;

};
Node *head = NULL;
Node *tail = NULL;
struct LinkedList{
    
    void add(Node *place,int item){

        Node *temp = new Node;
        temp->item = item;
        temp->prev = place;
        temp->next = (place == NULL) ? NULL : place->next;
        if(place !=NULL){
            place->next = temp;
            if(temp->next !=NULL)
                temp->next->prev = temp;

        }
        if(temp->prev == NULL) head = temp;
        if(temp->next == NULL) tail = temp;
        
    }
    int size(){
        Node *p = head;
        int i = 0 ;
        while(p !=NULL){
            i++;
            p = p->next;

        }
        return i;
    }

    int get(int id){
        Node *p = head;
        int ans = 0;
        id = id+1;
        while (id > 0){
            
            ans = p->item;
            p = p->next;
            
            id--;
        }
        return ans;
        
    }
    void printAll(){
        Node *p = head;
        while(p != NULL){
            cout<<p->item<<endl;
            p = p->next;
        }

    }


};

int main(){
    LinkedList *lst = new LinkedList;
    Node *f = new Node;
    
    lst->add(tail,31);
    lst->add(tail,56);
    lst->add(head,29);

    cout<<"size " <<lst->size()<<endl;

    cout<<"id "<< lst->get(2)<<endl;

    lst->printAll();
    
    delete lst;


}