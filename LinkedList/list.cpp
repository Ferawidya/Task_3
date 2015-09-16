void insertfirst (list *l, address p)
{
    if((*l).awal==NULL)
    {
        (*l).awal=p;
        next((*l).awal)=NULL;


    }
    else
    {
        next(p)=NULL;
        next(p)=(*l).awal;
        (*l).awal=p;
    }
}
void deletefirst(list *l,address *p)
{
    *p=(*l).awal;
    (*l).awal=next((*l).awal);
    next(*p)=NULL;
    delete p;
}
