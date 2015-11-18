//
// Created by Ryan on 11/17/2015.
//

#ifndef CS474HW3_PAINTINGWRAPPER_H
#define CS474HW3_PAINTINGWRAPPER_H

#include "llist.h"
#include <string>

class painting;
using namespace std;



class paintingWrapper {
public:
    paintingWrapper(int);
    ~paintingWrapper();

    painting*operator->()const;
    painting&operator*()const;

protected:
    int id;
    string fileName;
    painting* pPainting;
    paintingWrapper(const paintingWrapper&);
    paintingWrapper&operator=(const paintingWrapper&);
    void swapIn(llist *l);
    void swapOut(llist *l);

};


#endif //CS474HW3_PAINTINGWRAPPER_H
