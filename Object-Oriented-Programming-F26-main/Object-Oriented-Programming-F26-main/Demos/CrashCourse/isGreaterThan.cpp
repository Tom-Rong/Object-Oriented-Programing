#include <iostream>
using namespace std;

/**
 * @brief isGreaterThan: returns whether x is greater than y
 * 
 * @return int 
 */
bool isGreaterThan(double x, int y){
    // if(x > y){
    //     return true;
    // } else {
    //     return false;
    // }
    return x > y;
}

int main(){
    double x = 33;
    int y = 7;
    
    if(isGreaterThan(x, y))
        printf("%f > %i\n", x, y);
    else 
        printf("%f <= %i\n", x, y);

}