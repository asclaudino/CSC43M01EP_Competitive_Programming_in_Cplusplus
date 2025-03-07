#include <iostream>
#include <limits> 

// TODO afterwards with  https://en.cppreference.com/w/cpp/algorithm/min_element

int main(){
    int licence_days = 0; 
    int ammount_trash;
    std::cin >> licence_days;

    int minimal_day = std::numeric_limits<int>::max();
    int index_minimal_day;

    for(int i = 0; i < licence_days; ++i){
        std::cin >> ammount_trash;
        if(ammount_trash < minimal_day){
            minimal_day = ammount_trash;
            index_minimal_day = i;
        }
    }

    std::cout << index_minimal_day;
}