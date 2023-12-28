class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        
        // code here
        vector<vector<int>> matrix(4 * n, vector<int>(4 * n)); // Create a 4n x 4n matrix
        
        int count = 0; // Initialize a counter to fill the matrix
        
        // Fill the matrix from left to right and top to bottom with values from 1 to 4n*4n
        for (int i = 0; i < 4 * n; i++) {
            for (int j = 0; j < 4 * n; j++) {
                matrix[i][j] = ++count;
            }
        }
        
        vector<int> result1; // Initialize a vector to store the first coil
        int top = 0, bottom = 4 * n - 1, left = 0, right = 4 * n - 1; // Initialize boundaries
        
        // Traverse the matrix to form the first coil
        while (top <= bottom && left <= right) {
            
            if (bottom < top) break;
            for (int i = bottom; i >= top; i--) {
                result1.push_back(matrix[i][right]);
            }
            right--; left++;
            
            if (right < left) break;
            for (int i = right; i >= left; i--) {
                result1.push_back(matrix[top][i]);
            }
            top++; bottom--;
            
            if (top > bottom) break;
            for (int i = top; i <= bottom; i++) {
                result1.push_back(matrix[i][left]);
            }
            left++; right--;
            
            if (left > right) break;
            for (int i = left; i <= right; i++) {
                result1.push_back(matrix[bottom][i]);
            }
            bottom--; top++;
        }
        
        reverse(result1.begin(), result1.end()); // Reverse the first coil
        
        vector<int> result2; // Initialize a vector to store the second coil
        top = 0, bottom = 4 * n - 1, left = 0, right = 4 * n - 1; // Reset boundaries
        
        // Traverse the matrix to form the second coil
        while (top <= bottom && left <= right) {
            
            if (top > bottom) break;
            for (int i = top; i <= bottom; i++) {
                result2.push_back(matrix[i][left]);
            }
            left++; right--;
            
            if (left > right) break;
            for (int i = left; i <= right; i++) {
                result2.push_back(matrix[bottom][i]);
            }
            bottom--; top++;
            
            if (bottom < top) break;
            for (int i = bottom; i >= top; i--) {
                result2.push_back(matrix[i][right]);
            }
            right--; left++;
            
            if (right < left) break;
            for (int i = right; i >= left; i--) {
                result2.push_back(matrix[top][i]);
            }
            top++; bottom--;
        }
        
        reverse(result2.begin(), result2.end()); // Reverse the second coil
        
        return {result1, result2}; // Return both coils as a vector of vectors
    }
};