/*
Little Petya very much likes gifts. Recently he has received a new laptop as a New Year gift from his mother. He immediately decided to give it to somebody else as what can be more pleasant than giving somebody gifts. And on this occasion he organized a New Year party at his place and invited n his friends there.

If there's one thing Petya likes more that receiving gifts, that's watching others giving gifts to somebody else. Thus, he safely hid the laptop until the next New Year and made up his mind to watch his friends exchanging gifts while he does not participate in the process. He numbered all his friends with integers from 1 to n. Petya remembered that a friend number i gave a gift to a friend number pi. He also remembered that each of his friends received exactly one gift.

Now Petya wants to know for each friend i the number of a friend who has given him a gift.
 */

#include <iostream>
using namespace std;
 
int main() {
int n;
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];;
    b[a[i]-1]=i+1;
}
for(int i=0;i<n;i++)
cout<<b[i]<<" ";
    return 0;
}
