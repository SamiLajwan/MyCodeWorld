#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to decode the message
string decodeMessage(string key, string message) {
    // Step 1: Create a mapping of characters in `key` to the alphabet
    unordered_map<char, char> mapping; // To store the mappings
    char space = ' '; // Space maps to itself
    mapping[space] = space;
    char start = 'a'; // Start mapping from 'a'
    int index = 0;    // Index to traverse the `key`

    // Traverse the `key` to build the mapping
    while (start <= 'z' && index < key.length()) {
        char keyCurrChar = key[index];

        // If the current character is not already mapped, map it
        if (mapping.find(keyCurrChar) == mapping.end()) {
            mapping[keyCurrChar] = start;
            start++; // Move to the next letter in the alphabet
        }
        index++; // Move to the next character in the `key`
    }

    // Step 2: Decode the message using the mapping
    string ans = ""; // To store the decoded message
    for (int i = 0; i < message.length(); i++) {
        char msgCharacter = message[i];
        char mappedCharacter = mapping[msgCharacter]; // Find the mapped character
        ans.push_back(mappedCharacter); // Append to the result
    }

    return ans; // Return the decoded message
}

int main() {
    // Example input
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    // Decode the message
    string decodedMessage = decodeMessage(key, message);

    // Print the decoded message
    cout << "Decoded Message: " << decodedMessage << endl;

    return 0;
}
