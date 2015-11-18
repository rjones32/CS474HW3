//
// Created by Ryan on 11/16/2015.
//

#include "llist.h"
//Constructor for the link list class
llist::llist() {
    //setup variables inside of link list
    //sets Sizes to one and creates the first node
    *size = 1;
    node *firstNode = new node(size);
    head = firstNode;
    head->setNext(NULL);

    //gets the head and creates five empty nodes
    node *curr = head;
    while(*size<6){
        *size++;
        node *newNode = new node(size);
        curr->setNext(newNode);
        curr = curr->getNext();
    }

    curr->setNext(NULL);
}

//getters for the linklist class
//grabs the first node in the link list
node* llist::getHead() { return head;}

//gets the next node in a link list
void llist::nextNode() {
    //if next node is not NULL set currNode to next node
    if(currNode->getNext()!=NULL)
        currNode = currNode->getNext();
        //Else if next was NULL set the currNode to the head
    else
        currNode = llist::getHead();
}
//get the size of the link list
int* llist::getSize() { return size; }

//find the Nth node and set it to the currNode
void llist::getNthNode(int nthNode) {
    node *curr = llist::getHead();

    while(curr!=NULL){
        if(nthNode = curr->getIndex()){
            currNode = curr;
            return;
        }
        curr = curr->getNext();
    }
}

void llist::llistInsert() { }

