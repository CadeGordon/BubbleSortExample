#include <iostream>
#include <cstring>







//bubbleSort code
template<typename T>
void bubbleSorter(T arr[], int array)
{
    int i;
    int j;

    for (int i = 0; i < array - 1; i++)
    {
        for (int j = i + 1; j < array; j++)
            if (arr[j] < arr[i])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
    }


}

template <typename T>
void printArray(T arr[], int array)
{
    for (int i = 0; i < array; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}



int main()
{
    int arr[] = { 56, 12, 2, 69, 20 };
    float arrFloat[] = { 1.2f, .4f, 8.6f, -12.9f };
    printArray(arrFloat, 4);

    

    bubbleSorter(arrFloat , 4);

    std::cout << std::endl;
    printArray(arrFloat, 4);
   
}


//void insertionSort(int arr[], int size)
//{
//    
//    
//    int j = 0;
//    int key = 0;
//
//    //iterate through the array
//    for (int i = 1; i < size; i++)
//    {
//        //Sotre the current value of teh current index
//        key = arr[i];
//        //set j to be the previous index
//        j = i - 1;
//
//        //while j hasnt reached the end of the list
//        //and the value at the index of j is greater than they key
//        while (j >= 0 && arr[j] > key)
//        {
//            //..move each elemtnt in the array over by 1
//            arr[j + 1] = arr[j];
//            j--;
//
//        }
//        //set the index after j to be the key
//        arr[j + 1] = key;
//    }
//
//    
//
//
// //for ( int i = 1; i < size; i++)
// // set key to be the value at the current index
// // set j to be the previous index
// // start while loop
// // while j is greather than or equal 0 adn the value at j is greater than key
// // set collection at the index of j+1 to be the value at index of j
// // decrement j
// // end while loop
// // set collection at the index of j+1 to be the key
//}
//
//void printArray(int arr[], int size)
//{
//    int i;
//    for (i = 0; i < size; i++)
//       std::cout << arr[i] << " ";
//    std::cout << std::endl;
//}
//
//
//int main()
//{
//    int arr[] = { 12, 11, 13, 5, 6 };
//    int size = sizeof(arr) / sizeof(arr[0]);
//
//    insertionSort(arr, size);
//    printArray(arr, size);
//
//    return 0;
//}


