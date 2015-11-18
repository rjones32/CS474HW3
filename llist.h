//
// Created by Ryan on 11/16/2015.
//

#ifndef CS474HW3_LLIST_H
#define CS474HW3_LLIST_H

#include "node.h"

class llist {
public:
    llist();
    ~llist();
    void  nextNode();
    node *getHead();
    void getNthNode(int nthNode);
    int *getSize();
    void llistInsert();
private:
    node *head;
    node *currNode;
    int *size;

};


#endif //CS474HW3_LLIST_H
