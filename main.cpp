#include <iostream>
#include <chrono>
#include <thread>

int main() {
    int i = 0;
    while(i <= 100) {  // you can do with for loop if want: for (i = 0; i <= 100; i++)
        std::cout << "\r" << "Progress: "<< i << "%" << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
        i++;
    }
    std::cout << std::endl;
    printf("Done! \n");
    return 0;
}
