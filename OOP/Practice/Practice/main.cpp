using namespace std;
#include<iostream>
#include<conio.h>
class vehicle
{
private:
int d;
char color[10];
public:
int mdl;
char colr[10];
    void get_input(int a,char b[10])
    {

        d=a ;
        color[10]=b[10];
    }
void disp()
{
    cout<<"Model Number Is:"<<d ;
    cout<<"Color Is:"<<color;
}   
};
int main()
{
vehicle s1;
cout<<"Enter Model Number:";
cin>>s1.mdl;
cout<<"Enter Color:";
    cin>>s1.colr[10];
    s1.get_input(s1.mdl,s1.colr);
s1.disp();
getch();

}