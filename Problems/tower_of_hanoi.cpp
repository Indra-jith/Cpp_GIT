#include <iostream>
using namespace std;
/*
Tower of hanoi

    There are 3 towers - source, auxiliary, destination
    Source tpower contains a set of disks stacked with largest at
    bpttpm and the smallest at top
    the objective is to transfer entire disks from source to destination
    maintaining the same order using auxiliary toiwer
    one plate at a time
    never a larger disk is placed on a smaller disk during the transfer
*/

void towerOfHanoi(int n, char src, char aux, char dest)
{
    if (n == 1)
    {
        cout << "Move disk - " << n
             << " from " << src << " to " << dest << endl;
        return;
    }
    towerOfHanoi(n - 1, src, dest, aux);
    cout << "Move disk - " << n
         << " from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, aux, src, dest);
}
int main()
{
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');
}