#ifndef LINKS_H
#define LINKS_H

#include "Stars.h"

#include <list>
#include <vector>

using namespace std;

class Links : public Stars
{
    private:
    list <Stars*> myList;

    public:

    ~Links();

    void add (Stars*);
    void remove();

   // Stars* getchild();

    //ADD an iterator here




};

#endif