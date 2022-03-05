
#include <iostream>

using namespace std;

int main()
{
   int temp;
   int  X[] = { 1, 4, 7, 8, 10 },Y[] = { 2, 3, 9 };
    cout<<"Before Sorting\n";
   
    cout<<"X =";
    for(int i=0;i<5;i++)
    {
        cout<<X[i]<<"  ";
    }
    
    cout<<endl<<"Y =";
    for(int i=0;i<3;i++)
    {
        cout<<Y[i]<<"  ";
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(X[i]>Y[j])
            {
                temp=X[i];
                X[i]=Y[j];
                Y[j]=temp;
            }
        }
    }
    
for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(Y[i]>Y[j])
            {
                temp=Y[i];
                Y[i]=Y[j];
                Y[j]=temp;
            }
        }
    }
    cout<<"\nAfter Sorting\n";
   
    cout<<"X =";
    for(int i=0;i<5;i++)
    {
        cout<<X[i]<<"  ";
    }
    
    cout<<endl<<"Y =";
    for(int i=0;i<3;i++)
    {
        cout<<Y[i]<<"  ";
    }




    return 0;
}
