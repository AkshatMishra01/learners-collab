#include<bits/stdc++.h>
#define size 3;
using namespace std;

char player ='x';
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
void showmatrix()
{
            for(int i=0;i<size;i++)
    {
                    for(int j=0;j<size;j++)
        {
                           cout<<matrix[i][j]<<" ";
        }
                                                cout<<"\n";
    }
}
                    void input()
{
                                 int a;
                                          cout<<"press the number on the field :";
                               cin>>a;
                                    if(a==1)
                                     matrix[0][0]=player;
                                                  else if(a==2)
                                                  matrix[0][1]=player;
                   else if(a==3)
                      matrix[0][2]=player;
  else if(a==4)
  matrix[1][0]=player;
                       else if(a==5)
                       matrix[1][1]=player;
else if(a==6)
matrix[1][2]=player;
                       else if(a==7)
                        matrix[2][0]=player;
        else if(a==8)
         matrix[2][1]=player;
                             else if(a==9)
                             matrix[2][2]=player;
}
void toggleplayer()
{
                         if(player=='x')
                                  player='o';
                           else
                       {
                             player='x';
                                         }
}
char win()
{
              if(matrix[0][0]=='1' && matrix[0][1]=='2' && matrix[0][2]=='3')
                  return 'x';
                       else if(matrix[1][0]=='4' && matrix[1][1]=='5' && matrix[1][2]=='6' )
                         return 'x';
                               else if(matrix[2][0]=='7' && matrix[2][1]=='8' && matrix[2][2]=='9')
                                   return 'x';
                                     if(matrix[0][0]=='1'&& matrix[1][0]=='4' && matrix[2][0]=='7')
                                        return 'x';
                                         else if(matrix[0][1]=='2' && matrix[1][1]=='5' && matrix[1][2]=='8')
                                             return 'x';
                    else if(matrix[0][2]=='3' && matrix[1][2]=='6' && matrix[2][2]=='9')
                         return 'x';
                                 if(matrix[0][0]=='1' && matrix[1][1]=='5' && matrix[2][2]=='9')
                                            return 'x';
                                                 else if(matrix[0][2]=='3' && matrix[1][1]='5' && matrix[2][0]=='7')
                                                             return 'x';

}
