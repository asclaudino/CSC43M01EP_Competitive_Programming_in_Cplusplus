#include <iostream> 
#include <map>
#include <string>


int main(){
    std::map<std::string, int> votes;

    bool end = false;
    std::string candidate;
    
    while(!end){
        std::getline(std::cin, candidate);
        if(candidate == "***") {
            end = true;
            break;
        }

        if(votes.count(candidate) > 0){
            votes[candidate] += 1;
        } else {
            votes[candidate] = 1;
        }

    }

    std::string winner = "";
    int max_votes = 0;
    bool has_copy = false;

    for (const auto i : votes){
        
        if(i.second == max_votes){
            has_copy = true;
        }
        
        if (i.second > max_votes){
            max_votes = i.second;
            winner = i.first;
            has_copy = false;
        }
        
    }
    
    if(has_copy){
        std::cout << "Runoff!";
    } else {
        std::cout << winner;
    }

    //std::cout << winner;

    return 0;
}