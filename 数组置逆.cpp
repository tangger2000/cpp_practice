#include <iostream>

int main(){
    int arr[5] = {1,3,2,5,4};
    std::cout << "数组逆置前：" << std::endl;
    for(int i=0; i<5; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;

    // 定义两个数组下标指针
    int start = 0;
    int end = sizeof(arr)/ sizeof(arr[0]) - 1;
    int temp=0;
    while (start != end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end--;
    }
    std::cout << "数组逆置后：" << std::endl;
    for(int i=0; i<5; i++)
    {
        std::cout << arr[i];
    }
    return 0;
}
