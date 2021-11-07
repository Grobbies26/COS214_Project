#include "Links.h"

void Links ::add(Stars* s)
{

    myList.push_back(s);
}

void Links ::remove()
{

    myList.pop_back();
}

Links :: ~Links()
{

       
        for (list<Stars*>::iterator it = myList.begin();it != myList.end();++it)
            delete *it;
    

}