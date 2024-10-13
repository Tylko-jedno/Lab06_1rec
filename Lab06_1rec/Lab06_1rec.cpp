#include <iostream>
#include <iomanip>

using namespace std;

int Sum(int* a, const int i) {
    int temp = 0;
    int k = 0;
    if (i > 21) {
        cout << "k = " << k << endl;
        return 0;
    }
    else
        if (a[i] > 0 || !(a[i] % 3 == 0)) {
            temp = a[i];
            a[i] = 0;
            k++;
            return temp + Sum(a, i + 1);
        }
        else
            return Sum(a, i + 1);
            

}

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}


void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}


int main()
{
    int p = -10;
    int k = 35;

    const int n = 22;
    int a[n];

    Create(a, 22, p, k, 0);
    Print(a, n, 0);
    int s = Sum(a, 0);
    cout << "s = " << s << endl;
    Print(a, n, 0);
}