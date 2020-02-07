#include <iostream>

int main(){
    int arr[5]={300,350,200,400,250};
    int max=0;
    for(int i : arr)
    {
        if(max <= i)
            max = i;
    }
    std::cout << max << std::endl;
    return 0;
}
