#include <cstdlib>
#include <iostream>
using namespace std;

int main(void)
{
    int i, j, k, turn, finger[2][2][4];
    while(1) {
        cin >> turn;
        for(i = 0; i < 2; i++)
            for(j = 0; j < 2; j++)
                for(k = 0; k < 4; k++)
                    cin >> finger[i][j][k];

        cout << rand() % 2 << " " << rand() % 2 << " " << rand() % 4 << endl;
        cout << flush;
    }
    return 0;
}
