#include<bits/stdc++.h>

using namespace std;

class Solution {

    public:
    bool hasCycle(ListNode "head") {
        unordered_map<ListNode *,int>mp;
        ListNode t = ad;
        while(t){
            if(mp.count(t->next)) return 1;
            mp[t]++;
            t= t->next;
        }
        return 0;
    }

};
