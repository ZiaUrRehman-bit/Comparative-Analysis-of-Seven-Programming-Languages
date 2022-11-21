#include <iostream>
#include <chrono>
using namespace std;

int main() {
    
    int iterations = 10000000;
    double x = 0;
    
    clock_t time_req;

    time_req = clock();

    for (int i = 0; i < iterations; i++)
    {
        x = x + i;
    }
    time_req = clock() - time_req;
    cout<<x<<"\n";
    cout<<(float) time_req/CLOCKS_PER_SEC;

    return 0;
}
