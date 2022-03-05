#include <iostream>
#include <string>
#include <queue>
using namespace std;
void generateBinary(int n)
{
    queue<string> q;
    q.push("1");

    int i = 1;
    while (i++ <= n)
    {
        q.push(q.front() + "0");
        q.push(q.front() + "1");
         cout << q.front() << ' ';
        q.pop();
    }
}
 
int main()
{
    int n;
    cout<<"Enter number to generate binary between 1-n"<<endl;
    cin>>n;
    generateBinary(n);
 
    return 0;
}
