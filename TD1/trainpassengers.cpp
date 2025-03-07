#include <iostream> 


int main(){

    int capacity;
    int number_stations;
    int actual = 0;
    std::cin >> capacity >> number_stations;
    int leaving, entering, waiting;
    bool finished = false;

    for (int i = 0; i < number_stations; ++i){
        std::cin >> leaving;
        std::cin >> entering;
        std::cin >> waiting;


        actual = actual + entering - leaving;

        if ((i==0) && (leaving>0)){
            std::cout << "impossible";
            finished = true;
            break;
        }

        if((i==number_stations-1) && (waiting > 0)){
            std::cout << "impossible";
            finished = true;
            break;
        }

        if((i==number_stations-1) && (actual != 0)){
            std::cout << "impossible";
            finished = true;
            break;
        }

        if (actual > capacity) {
            std::cout << "impossible";
            finished = true;
            break;
        }

        if((actual < capacity) && (waiting > 0)){
            std::cout << "impossible";
            finished = true;
            break;
        }

    }

    if (!finished){
        std::cout << "possible";
    }
    
    return 0;
}