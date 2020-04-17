#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int b[4][4];
int visited[4];
int min=999;
int u=0;
int v=0;
int total=0;
for (int i = 0; i< 4; i++)
    {
visited[i]= 0;//nothing is visited
cout<<"enter values for "<<(i+1)<<" row"<<endl;
for (int j = 0; j < 4; j++)
        {
cin>>b[i][j];
if(b[i][j]==0)
b[i][j]=999;//replacing it by infinity
        }//end of internal loop
            }//end of external for loop
visited[0]=1;//mark first node as visited
    //start of algorithm
for(int counter=0;counter < 3;counter++)
    {
min = 999;
for (int i = 0; i< 4; i++)
        {
if (visited[i] == 1)//if the node is visited
            {
for (int j = 0; j < 4; j++)
                {
if (visited[j] != 1)//if the jth  node is not  visited
                    {
if (min>b[i][j])
                    {
min = b[i][j];
                        u = i;
                        v = j;
                    }//end of internal if
                }//end of external if
            }
        }
        }
visited[v]=1;//we marked this node as visited
total+=min;
cout<<"Edge found: "<<u<<"->"<<v<<"   weight:"<<min<<endl;
        }
cout<<"Total weight:"<<total<<endl;
getch();
}

