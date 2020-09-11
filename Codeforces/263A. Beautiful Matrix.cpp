#include <iostream>
using namespace std;

int main()
{
    int m[6][6],col,row,d = 0;
    for(int i = 0;i < 5;i++)
        for(int j = 0;j < 5;j++)
        cin >> m[i][j];

    for(int i = 0;i < 5;i++)
        for(int j = 0;j < 5;j++)
        {
            if(m[i][j] == 1)
            {
                row = i;
                col = j;
                break;
            }
        }
        ///cout <<endl << col <<endl;

    if(col > 2)
    {
        for(int c = col;c >= 3;c--){
            for(int r = 0;r <= 4;r++)
        {
            int t = m[r][c];
            m[r][c] = m[r][c-1];
            m[r][c-1] = t;
        }
        d++;
        }
    }
    else if(col < 2)
    {
        for(int c = col;c < 2;c++){
            for(int r = 0;r <= 4;r++)
        {
            int t = m[r][c];
            m[r][c] = m[r][c+1];
            m[r][c+1] = t;
        }
        d++;
        }

    }
    /*cout << endl << endl;
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
        cout << m[i][j] << " ";
        }

        cout << endl;
    }*/

    if(row > 2)
    {
        for(int r = row;r >= 3;r--){
            for(int c = 0;c <= 4;c++)
        {
            int t = m[r][c];
            m[r][c] = m[r+1][c];
            m[r+1][c] = t;
        }
        d++;
        }

    }

    else if(row < 2)
    {
        for(int r = row;r < 2;r++){
            for(int c = 0; c<= 4;c++)
        {
            int t = m[r][c];
            m[r][c] = m[r+1][c];
            m[r+1][c] = t;
        }
        d++;
        }

    }

    /*cout << endl << endl;
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
        cout << m[i][j] << " ";
        }

        cout << endl;
    }*/

    cout << d << endl;

}
