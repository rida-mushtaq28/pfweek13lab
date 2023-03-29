#include <iostream>
using namespace std;
void cars();
main()
{
    int carData[5][5]={
        {10,7,12,10,4},
        {18,11,15,17,2},
        {23,19,12,16,1},
        {7,12,16,0,2},
        {3,5,6,2,1}};

    for(int i=0 ; i<5 ; i++)
     {
        for(int j=0 ;j<5 ;j++)
        {
            cout << carData[i][j] << "\t";
        }
        cout << endl;
     }
    
    int sum=0;
    for(int x=0 ; x<5 ; x++)  
    {
        sum=sum+carData[x][0];
    } 
        cout << "Sum" <<  sum << endl; 

    int sum1=0;
    for(int i=0 ; i<5 ; i++)
     {
        for(int j=0 ;j<5 ;j++)
        {
          sum1=sum1+carData[i][j];
        }
     }  
             cout << "Sum" << sum1 << endl;   
}