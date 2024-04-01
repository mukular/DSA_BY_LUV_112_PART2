// Let's start

// stack :- LIFO(Last in first out)
// queue :- FIFO(First in first out)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.empty())  // s.empty returns true if stack is empty otherwise return false
    {
        cout<<s.top()<<endl;  // gives top value of stack
        s.pop();  // removes top value of stack
    }

    queue<string> q;
    q.push("abc");
    q.push("bcd");
    q.push("def");
    q.push("cde");
    q.push("ghi");

    while(!q.empty())  // q.empty returns true if queue is empty otherwise return false
    {
        cout<<q.front()<<endl; // gives front element of queue
        q.pop();
    }
    return 0;
}

/*
// stack member functions
S. No.

Function

Description

Time Complexity

1.

empty()	
Returns true if the stack is empty, false otherwise.

O(1)

2.

size()	
Returns the number of elements in the stack.

O(1)

3.

top()	
Returns the top element.

O(1)

4.

push(g)	
Push one element in the stack.

O(1)

5.

pop()	
Removes one element from the stack.

O(1)
*/

/*
// queue member functions
S. No.

Function

Description

Time Complexity

1.

empty()

Returns true if the queue is empty, otherwise false.

O(1)

2.

size()

Returns the number of items in the queue.

O(1)

3.

front()

Returns the front element.

O(1)

4.

back()

Returns the element at the end.

O(1)

5.

push()

Add an item to the queue.

O(1)

6.

pop()

Removes an item from the queue.

O(1)
*/