
#include <iostream>

using namespace std;

class AddAmount
{
    public:
            int amount=50;
            
            AddAmount()
            {
              amount=50;  
            }
            
            AddAmount(int amt)
            {
                amount+=amt;
            }
            
            void displayAmount()
            {
                cout<<"Piggie Bank Amount is :"<<amount<<endl;
            }
};

int main()
{
    int amt;
    cout<<"Enter amount to add in Piggie Bank ";
    cin>>amt;
    AddAmount a1,a2(amt);
    a2.displayAmount();

    return 0;
}
