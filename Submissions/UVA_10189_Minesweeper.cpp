#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int caseID = 0;

    int row, col;
    cin >> row >> col;

    if(row == 0 || col == 0)
    {
        return 0;
    }

    while(true)
    {
        caseID++;

        int** mineField = new int*[row];
        memset(mineField,0,sizeof(int*)*row);

        for(int rowID = 0; rowID < row; rowID++)
        {
            mineField[rowID] = new int[col];
            memset(mineField[rowID],0,sizeof(int)*col);
        }

        for(int rowID = 0; rowID < row; rowID++)
        {
            for(int colID = 0; colID < col; colID++)
            {
                char fieldCh;
                cin >> fieldCh;

                if(fieldCh == '*')
                {
                    //Mine
                    mineField[rowID][colID] = -1;

                    //Update the others
                    if(rowID - 1 >= 0)
                    {
                        if(colID - 1 >= 0)
                        {
                            if(mineField[rowID-1][colID-1] != -1)
                                mineField[rowID-1][colID-1]++;
                        }
                        if(colID + 1 < col)
                        {
                            if(mineField[rowID-1][colID+1] != -1)
                                mineField[rowID-1][colID+1]++;
                        }
                        if(mineField[rowID-1][colID] != -1)
                            mineField[rowID-1][colID]++;
                    }
                    if(rowID + 1 < row)
                    {
                        if(colID - 1 >= 0)
                        {
                            if(mineField[rowID+1][colID-1] != -1)
                                mineField[rowID+1][colID-1]++;
                        }
                        if(colID + 1 < col)
                        {
                            if(mineField[rowID+1][colID+1] != -1)
                                mineField[rowID+1][colID+1]++;
                        }
                        if(mineField[rowID+1][colID] != -1)
                            mineField[rowID+1][colID]++;
                    }
                    if(colID - 1 >= 0)
                    {
                        if(mineField[rowID][colID-1] != -1)
                            mineField[rowID][colID-1]++;
                    }
                    if(colID + 1 < col)
                    {
                        if(mineField[rowID][colID+1] != -1)
                            mineField[rowID][colID+1]++;
                    }
                }
            }
        }

        printf("Field #%d:\n", caseID);
        for(int rowID = 0; rowID < row; rowID++)
        {
            for(int colID = 0; colID < col; colID++)
            {
                int field = mineField[rowID][colID];
                if(field == -1)
                {
                    printf("%c", '*');
                }
                else
                {
                    printf("%d", field);
                }
            }

            printf("\n");
            delete mineField[rowID];
        }

        delete mineField;

        cin >> row >> col;

        if(row == 0 || col == 0)
        {
            break;
        }
        printf("\n");

    }
}
