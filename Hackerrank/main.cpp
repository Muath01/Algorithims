#include <vector>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {


    int n, q, size, value, which, index;

    cin >> n >> q;

    std::vector<std::vector<int>> nvec;

    for (int i = 0; i < n; i++) {
        cin >> size;
        std::vector<int> ivec;
        for (int j = 0; j < size; j++)
        {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }

    std::vector<int> testing;
    for (int k = 0; k < q; k++)
    {
        cin >> which >> index;
        //cout << nvec[which][index] << endl;
        testing.push_back(which);
        testing.push_back(index);
        
    }

   
    for (int h = 0; h < testing.size(); h += 2) {
        cout << nvec[testing[h]][testing[h+1]] << endl;
    }
    
    return 0;

}
