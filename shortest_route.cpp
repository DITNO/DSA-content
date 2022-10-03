#include<iostream>
using namespace std;

int main(){
    char dir[1000];
    cin.getline(dir,1000);

    int x = 0;
    int y = 0;

    for (int i = 0; dir[i] != '\0'; i++)
    {
        switch (dir[i])
        {
        case 'N':y++;
            break;
        case 'S':y--;
            break;
        case 'E':x++;
            break;
        case 'W':x--;
            break;
        }
    }

    cout<<"the direction of x and y are :"<<x<<y<<endl;
// first quad
    if (x>=0 and y>=0)
    {
        while (x--)
        {
            cout<<"E";
        }
        while (y--)
        {
            cout<<"N";
        }
        
    }
// second quad
    else if (x<=0 and y>=0)
    {
        while (x++)
        {
            cout<<"W";
        }
        while (y--)
        {
            cout<<"N";
        }
        
    }
// third quad
    else if (x<=0 and y<=0)
    {
        while (x++)
        {
            cout<<"W";
        }
        while (y++)
        {
            cout<<"S";
        }
        
    }
// fourth quad
    else if (x>=0 and y<=0)
    {
        while (x--)
        {
            cout<<"E";
        }
        while (y++)
        {
            cout<<"S";
        }
        
    }
    
    
}