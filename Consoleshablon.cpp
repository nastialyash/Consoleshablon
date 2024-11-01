

#include <iostream>
using namespace std;
template <typename T>
T findMax(const T* arr, int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

template <typename T>
T findMin(const T* arr, int size) {
    T min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}



template <typename T>
void bubbleSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
             
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void bubbleSort(T* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                               T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
template <typename T>
void replaceElement(T* arr, int index, T newValue) {
    arr[index] = newValue;
}
int main()
{
    int arr[] = { 3, 5, 2, 9, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    
    cout << " Max" << findMax(arr, size) << endl;
    cout << "Min " << findMin(arr, size) << endl;

 cout << "Masiv  ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
   cout << endl;
   replaceElement(arr, 2, 100);
 cout << "Masive after ";
   for (int i = 0; i < size; ++i) {
       cout << arr[i] << " ";
   }
   cout << endl;

}

