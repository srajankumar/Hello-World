#include<bits/stdc++.h>
using namespace std;
int main()
{
    char z;
    char h='a', e='a', l='a', l2='a', o='a', w='a', o2='a', r='a', l3='a', d='a';
    cout<<"Press any letter to run"<<endl;
    cin>>z;
    if(z)
    {
        do
        {
            cout<<h<<endl;
            h+=1;
            for(int i=0;i<100000000;i++);
        }while(h<'h');
        do
        {
            cout<<h<<e<<endl;
            e+=1;
            for(int i=0;i<100000000;i++);
        }while(e<'e');
        do
        {
            cout<<h<<e<<l<<endl;
            l+=1;
            for(int i=0;i<100000000;i++);
        }while(l<'l');
        do
        {
            cout<<h<<e<<l<<l2<<endl;
            l2+=1;
            for(int i=0;i<100000000;i++);
        }while(l2<'l');
        do
        {
            cout<<h<<e<<l<<l2<<o<<endl;
            o+=1;
            for(int i=0;i<100000000;i++);
        }while(o<'o');
        do
        {
            cout<<h<<e<<l<<l2<<o<<" "<<w<<endl;
            w+=1;
            for(int i=0;i<100000000;i++);
        }while(w<'w');
        do
        {
            cout<<h<<e<<l<<l2<<o<<" "<<w<<o2<<endl;
            o2+=1;
            for(int i=0;i<100000000;i++);
        }while(o2<'o');
        do
        {
            cout<<h<<e<<l<<l2<<o<<" "<<w<<o2<<r<<endl;
            r+=1;
            for(int i=0;i<100000000;i++);
        }while(r<'r');
        do
        {
            cout<<h<<e<<l<<l2<<o<<" "<<w<<o2<<r<<l3<<endl;
            l3+=1;
            for(int i=0;i<100000000;i++);
        }while(l3<'l');
        do
        {
            cout<<h<<e<<l<<l2<<o<<" "<<w<<o2<<r<<l3<<d<<endl;
            d+=1;
            for(int i=0;i<100000000;i++);
        }while(d<'d');
        for(int i=0;i<100000000;i++);
        cout<<h<<e<<l<<l2<<o<<" "<<w<<o2<<r<<l3<<d<<endl;
        for(int i=0;i<100000000;i++);
        cout<<h<<e<<l<<l2<<o<<" "<<w<<o2<<r<<l3<<d<<"!"<<endl;
    }
    return 0;
}