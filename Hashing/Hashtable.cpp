#include<iostream>
#include<cstring>
using namespace std;

template<typename t>
class node
{
public:
    t value;
    string key;
    node<t>*next;
    node(t val,string k)
    {
        key=k;
        value=val;
        next=NULL;
    }
    ~node()
    {
        if(next!=NULL){
            delete next;
        }
    }
};
template<typename t>
class hashtable
{
    node<t>** table;
    int curr_size;
    int table_size;
    int hashfn(string key)
    {
        int idx=0,p=1;
        for(int i=0;i<key.length();i++){
            idx=idx+ (key[i]*p)%table_size;
            idx=idx%table_size;
            p=(p*27)%table_size;
        }
        return idx;
    }
    void rehash()
    {
        node<t>**oldtable=table;
        int oldtable_size=table_size;
        table_size=2*table_size;
        table= new node<t>*[table_size];

        for(int i=0;i<table_size;i++){
            table[i]=NULL;
        }
        curr_size=0;
        for(int i=0;i<oldtable_size;i++){
            node<t>*temp=oldtable[i];
            while(temp!=NULL){
                inserthead(temp->key,temp->value);
                temp=temp->next;
            }
            if(oldtable[i]!=NULL){
                delete oldtable[i];
            }
        }
        delete[] oldtable;
    }
public:
    hashtable(int ts=7)
    {
        table_size=ts;
        table=new node<t>*[table_size];
        curr_size=0;
        for(int i=0;i<table_size;i++){
            table[i]=NULL;
        }
    }
    void inserthead(string key,t val)
    {
    int idx=hashfn(key);
    node<t>*n=new node<t>(key,val);
    n->next=table[idx];
    table[idx]=n;
    curr_size++;
    float load_factor= curr_size/(1.0*table_size);
    if(load_factor>0.7){
        rehash();
    }
    }
    void print()
    {
        for(int i=0;i<table_size;i++){
            cout<<"Bucket "<<i<<"->";
            node<t>*temp=table[i];
            while(temp!=NULL){
                cout<<temp->key<<"->";
                temp=temp->next;
            }
            cout<<endl;
        }
    }

};


