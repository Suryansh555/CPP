#include<bits/stdc++.h>
using namespace std;

string minWindow(string A, string B) {
    if (A.length() < B.length())
        return "";
    unordered_map < char, int > counts;
    for (int i = 0; i < B.length(); i++) {
        if (counts.find(B[i]) == counts.end()) {
            counts[B[i]] = 1;
        } else {
            counts[B[i]]++;
        }
    }
    int start = 0;
    int length = 0;
    int total = 0;
    for (int head = 0, tail = 0; tail < A.length(); tail++) {
        auto itTail = counts.find(A[tail]);
        if (counts.find(A[tail]) == counts.end()) {
            // If this character is not present in B at all, 
            // we don't care about this character. 
            continue;
        }
        counts[A[tail]]--;
        // We check if the current character represented by tail caused
        // a character to be included which is relevant to B and is still
        // in deficit. 
        // For example, if B has 3 As, then the first 3 A are relevant to us
        // but the 4th one is not. 
        if (counts[A[tail]] >= 0) {
            total++;
        }
        // check if we have all characters in B covered. 
        if (total == B.size()) {
            // Now move the head pointer till popping out those characters 
            // still makes sure that all characters in B are covered. 
            while (counts.find(A[head]) == counts.end() || counts[A[head]] < 0) {
                if (counts.find(A[head]) != counts.end()) counts[A[head]]++;
                head++;
            }
            // Now [head - 1, tail] is a valid substring. Update the answer. 
            if (length == 0 || tail - head + 1 < length) {
                length = tail - head + 1;
                start = head;
            }
        }
    }
    return A.substr(start, length);
}