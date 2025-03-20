#include <bits/stdc++.h>
using namespace std;

class Stackkk{
    int* arr;
    int sz, ptr;

public:
    Stackkk(int sz)
    {
        this->sz = sz;
        this->arr = new int[sz];
        this->ptr = -1;
    }

    void push(int ele)
    {
        if (ptr == sz)
        {
            cout << "Stackkk Overflow Error!" << '\n';
        }
        else
        {
            if (ptr == -1)
                ptr = 0;
            arr[ptr] = ele;
            ptr++;
        }
    }

    int pop()
    {
        if (ptr == -1)
        {
            cout << "Empty Stackkk!" << '\n';
            return -1;
        }
        else
        {   
            if(ptr == sz)ptr--;
            int val = arr[ptr];
            ptr--;
            return val;
        }
    }

     int size(){
        return this->ptr +1;
     }
};

class minStack {
    Stackkk* st;

    
}

signed main()
{

    Stackkk* st = new Stackkk(4);
    cout << st->pop() << '\n';
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->push(1);   // stack overflow
    cout << st->pop() << '\n';
    cout << st->size() << '\n';
    st->pop();
    cout << st->size() << '\n';
    return 0;
}
