
#include <iostream>

using namespace std;

class Employee
{
    public:
    float salary,number_of_hours;
    
    void getInfo(float sal,float noh)
    {
        salary=sal;
        number_of_hours=noh;
    }
    void AddSalary()
    {
        if(salary<500)
        {
            salary+=10;
        }
        
    }
    void AddWork()
    {
        if(number_of_hours>6)
        {
            salary+=5;
        }
    }
    void display()
    {
        cout<<"\nSalary ="<<salary<<endl<<"\nWork Hours"<<number_of_hours<<endl;
    }
    
};
int main()
{
    float sal,noh;
    cout<<"\nEnter salary and number of hours"<<endl;
    cin>>sal>>noh;
    
    Employee e1;
    e1.getInfo(sal,noh);
    e1.AddSalary();
    e1.AddWork();
    e1.display();
    return 0;
}
