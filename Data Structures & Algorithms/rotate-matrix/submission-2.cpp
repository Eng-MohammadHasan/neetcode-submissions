#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int layer = 0;

        while (layer < n / 2) {
            int i = layer;
            while (i < n - layer - 1) {
                // store 4 elements in temp vector
                vector<int> temp(4);
                temp[0] = matrix[layer][i];                 // top
                temp[1] = matrix[i][n - 1 - layer];         // right
                temp[2] = matrix[n - 1 - layer][n - 1 - i]; // bottom
                temp[3] = matrix[n - 1 - i][layer];         // left

                // rotate: last element goes to first, others shift
                matrix[layer][i]                 = temp[3];
                matrix[i][n - 1 - layer]         = temp[0];
                matrix[n - 1 - layer][n - 1 - i] = temp[1];
                matrix[n - 1 - i][layer]         = temp[2];

                i++;
            }
            layer++;
        }
    }
};

// simple print function
void printMatrix(const vector<vector<int>>& mat) {
    for (auto& row : mat) {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}
