#include <iostream>
#include "list.h"

using namespace std;

void createList(List &L)
{
    First(L) = NULL;
}

address alokasi(infotype x)
{
    address P = new elemenList;
    Info(P) = x;
    Next(P) = NULL;
    return P;
}

void dealokasi(address &P)
{
    delete P;
}

void insertFirst(List &L, address P)
{
    Next(P) = First(L);
    First(L) = P;
}

void insertLast(List &L, address P)
{
    if(First(L) == NULL)
    {
        insertFirst(L,P);
    }
    else
    {
        address Q = First(L);
        while(Next(Q) != NULL)
        {
            Q = Next(Q);
        }
        Next(Q) = P;
    }
}
void insertAfter(List &L, address P, address Prec)
{
    if(First(L) == NULL)
    {
        insertFirst(L,P);
    }
    else
    {
        Next(P) = Next(Prec);
        Next(Prec) = P;
    }
}

void deleteFirst(List &L, address &P)
{
    P = First(L);
    First(L) = Next(P);
    next(last(L))=First(L);
    Prev(First(L))=Last(L);
    Prev(P) = NULL;
    Next(P) = NULL;
}

void deleteLast(List &L, address &P)
{
    if(Next(First(L)) == NULL)
    {
        deleteFirst(L,P);
    }
    else
    {
        P = Last(L);
        Last(L) = Prev(P);
        next(last(L))=First(L);
        Prev(First(L))=Last(L);
        Prev(P) = NULL;
        Next(P) = NULL;
        dealokasi(P);
    }
}

void deleteAfter(List &L, address &P, address &Prec)
{
    if(prec==last(L))
        {   
            deleteFirst(L,P);
        }else { 
            p=next(prec);
            next(prec)=next(p)
            prev(next(p))=prec;
            prev(P) = NULL;
            next(P) = NULL;
            dealokasi(P);}
            
        

}

address findElm(List L, infotype x){
    address Q = First(L);
    while(Q != NULL){
        if(Info(Q).ID == x.ID){
            return Q;
        }
        Q = Next(Q);
    }
    return NULL;
}
