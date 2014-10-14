#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string sta,stb;
    //ifstream cin("a.txt");
    cin>>sta;
    cin>>stb;
    //sta="ABCBDAB";
    //stb="BDCABA";
    int


    m,n;
    m=sta.length()+1;
    n=stb.length()+1;
    char b[m][n];
    int c[m][n];
    for(int i=1;i<m;i++)
        c[i][0]=0;
    for(int j=0;j<n;j++)
        c[0][j]=0;
    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
        {
            if(sta[i-1]==stb[i-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='s';
            }
            else if(c[i-1][j]>=c[i][j-1])
                {
                    c[i][j]=c[i-1][j];
                    b[i][j]='v';
                }
                else
                {
                    c[i][j]=c[i][j-1];
                    b[i][j]='h';
                }
        }


    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}
