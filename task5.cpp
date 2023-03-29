#include <iostream>
using namespace std;
int matrix[4][3]={
    {0,0,0},
    {0,1,2},
    {0,0,0},
    {2,1,0}
};
string NoOfRow();
main()
{
    
}
string NoOfRow()
{
    int count=0;
    for (int row =0 ; row<4 ;row++)
     {
        for(int nextRow=row+1; nextRow<4 ;nextRow++)
         {
            if(checkRow(row,nextRow))
             {
                count++;
             }
         }
     }
}
