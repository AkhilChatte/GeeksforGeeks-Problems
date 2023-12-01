
class Solution
{
	public:
		void solve(const vector<char>& input, vector<char>& output, vector<string>& result) {
            if (input.size() == 0) {
                result.push_back(string(output.begin(), output.end()));
                return;
            }
    
            for (size_t i = 0; i < input.size(); ++i) {
                // Avoid duplicates in permutations
                if (i > 0 && input[i] == input[i - 1])
                    continue;
    
                vector<char> newInput = input;
                newInput.erase(newInput.begin() + i);
    
                vector<char> newOutput = output;
                newOutput.push_back(input[i]);
    
                solve(newInput, newOutput, result);
            }
        }

    vector<string> find_permutation(string S) {
        vector<char> input(S.begin(), S.end());
        sort(input.begin(), input.end()); // Sort the input string
    
        vector<char> output;
        vector<string> result;
    
        solve(input, output, result);
    
        return result;
    }
};
