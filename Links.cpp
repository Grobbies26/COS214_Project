#include "Links.h"

void Links:: Links(){
    head = nullptr;
}

void Links ::add(Stars* s)
{

    SatelliteIterator* it = createIterator(head);
    Stars* curr = it->firstSatellite();

   if (curr == nullptr){
       head = s;
       head->setNext(nullptr);
       
   }else{
      
       while (it->hasNext())
       {
           curr = it->nextSatellite();
       }

      curr->setNext(s);
      curr = curr->getNext();
      curr->setNext(nullptr);
   }

   delete it;
}

void Links ::remove()
{
    SatelliteIterator* it = createIterator(head);
    Stars* curr = it->firstSatellite();
    Stars* prev = it->firstSatellite();

   if (!curr->getNext()){
       delete head;
       head = nullptr;

   }else{
       while (it->hasNext())
       {
           prev = curr;
           curr = it->nextSatellite();

       }

        delete curr;
        curr = nullptr;
        prev->setNext(nullptr);

   }
   delete it;
}

Stars* Links ::getHead(){
    return head;
}

Links :: ~Links()
{
    SatelliteIterator* it = createIterator(head);
    Stars* curr = it->firstSatellite();

    while (it->hasNext())
    {
        prev = curr;
        curr = it->nextSatellite();

        delete prev;
    }

    delete curr;
}

SatelliteIterator* Links ::createIterator(Stars* n){
    return new SatelliteIterator(n);
}