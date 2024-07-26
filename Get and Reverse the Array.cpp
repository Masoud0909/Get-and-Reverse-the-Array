#include <iostream>

using namespace std;

int* getdata(int& size) {
    cout << "Enter the size of the array: ";
    cin >> size;
    int* data = new int[size];
    cout << endl << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
    return data;
}

void reverse_print(int* ptr, int& size) {
    for (int i = 0; i < size; i++) {
        cout << ptr[size - 1] << " ";
        size--;
        i--;
    }
}
int main()
{
    int size;
    int* p = getdata(size);
    reverse_print(p, size);
    delete[] p;
}
