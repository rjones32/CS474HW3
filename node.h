//
// Created by Ryan on 11/17/2015.
//

#ifndef CS474HW3_NODE_H
#define CS474HW3_NODE_H

#include "paintingWrapper.h"

class node {

public:
    node(int *index);
    ~node();
    int getIndex(){ return *nodeIndex;}
    node *getNext(){return next;};
    void *setNext(node* newNext){ next = newNext;}
    paintingWrapper *getPainting(){return aPainting;};
    paintingWrapper setPainting(paintingWrapper *newPainting){ aPainting = newPainting;};

private:
    node *next;
    int *nodeIndex;
    paintingWrapper *aPainting;
};


#endif //CS474HW3_NODE_H
