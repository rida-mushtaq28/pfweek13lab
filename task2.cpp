#include <iostream>
using namespace std;
int matrix[3][3]={
    {1,0,0},
    {0,1,0},
    {0,0,1}
};
bool isIdentityMatrix();
main()
{
  
    cout << isIdentityMatrix() << endl; 

}
bool isIdentityMatrix()
 {
    bool flag=true;
    for(int i=0 ; i<3 ; i++)
     {
        for(int j=0 ;j<3 ;j++)
        {
            if(i==j && matrix[i][j]!=1)
            {
                flag=false;
                break;
            }
            else if(i!=j && matrix[i][j]!=0)
            {
                flag=false;
                break;
            }
        }    

     }
     return flag;
 }