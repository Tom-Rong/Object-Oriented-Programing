/**
 * @file numObj.cpp
 * @brief outputs the size of different datatypes
 * @version 0.1
 * @date 2026-08-25
 * 
 * @copyright Copyright (c) 2026
 * 
 */

 #include <iostream>
 #include <cstdlib>
 using namespace std;

 int main(){
    //numerical
    int int_example = 1;
    float float_example = 2.0;
    double double_example = 2.0;

    //non-numerical
    char char_example = 'a';
    bool bool_example = true;

    //array example
    const int SIZE = 10;
    int arr[SIZE];
    
    // 8 bits = 1 Byte
   //  cout << "int_example: " << sizeof(int_example) << endl;
   //  cout << "float_example: " << sizeof(float_example) << endl;
   //  cout << "double_example: " << sizeof(double_example) << endl;
   //  cout << "char_example: " << sizeof(char_example) << endl;
   //  cout << "bool_example: " << sizeof(bool_example) << endl;
    cout << "arr_int_example: " << sizeof(arr) << endl;
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << arr[1] << endl;
  return 0;
 }