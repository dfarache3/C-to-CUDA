#include <iostream>
#include <map>

using namespace std;

int main(){

    map<char, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4}
    };
    
    mp['u'] = 7;
    pair<char, int> p1('j', 5);
    mp.insert(p1);
    //mp.erase(p1.first)

    // Looping through map
    for(map<char, int>::iterator itr = mp.begin(); itr != mp.end(); ++itr){
        cout << (*itr).second << endl; 
    }

    cout << mp['j'] << '\n';
    cout << p1.first << '\n';

    mp.clear(); //clear map
    mp.empty(); //check if empty

    return 0;
}