#ifndef NODE_H
#define NODE_H

#include "Stars.h"
#include <list>

class Node : public Stars
{
    private:

    Node* next;
   

    public:

    Node();
    ~Node();

    void operation();

  




};

#endif