#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <list>
#include <stack>

using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int totalcounter = 0;
        int word_counter = 0;
        int counter = 0;
        string test = chars;
        for (string wor : words) {
            counter = 0;
            word_counter = wor.size();
            for (int i = 0; i < wor.size(); i++) {
                for (int j = 0; j < test.size(); j++) {
                    if (test[j] == wor[i]) {
                        test.erase(test.begin() + j);
                        counter++;
                        break;
                    }
                }
            }

            cout << counter << endl;
            if (counter == word_counter) {
                totalcounter += counter;
            }

        }
        return totalcounter;
    }
};

int main() {
    vector<string> words;
    string chars;
    //["cat","bt","hat","tree"], chars = "atach"
    /*
        ,"boygirdlggnh"
        ,"lnnvsdcrvzfmrvurucrzlfyigcycffpiuoo"


        ,"eeilfdaookieawrrbvtnqfzcricvhpiv"
        ,"sisvsjzyrbdsjcwwygdnxcjhzhsxhpceqz"
        ,"yhouqhjevqxtecomahbwoptzlkyvjexhzcbccusbjjdgcfzlkoqwiwue"
        ,"hwxxighzvceaplsycajkhynkhzkwkouszwaiuzqcleyflqrxgjsvlegvupzqijbornbfwpefhxekgpuvgiyeudhncv"
        ,"cpwcjwgbcquirnsazumgjjcltitmeyfaudbnbqhflvecjsupjmgwfbjo"
        ,"teyygdmmyadppuopvqdodaczob"
        ,"qaeowuwqsqffvibrtxnjnzvzuuonrkwpysyxvkijemmpdmtnqxwekbpfzs"
        ,"qqxpxpmemkldghbmbyxpkwgkaykaerhmwwjonrhcsubchs"]
        
        "usdruypficfbpfbivlrhutcgvyjenlxzeovdyjtgvvfdjzcmikjraspdfp"
    */


    words.push_back("tfspedteabxatkaypitjfkhkkigdwdkctqbczcugripkgcyfezpuklfqfcsccboarbfbjfrkxp");
    words.push_back("boygirdlggnh");
    words.push_back("lnnvsdcrvzfmrvurucrzlfyigcycffpiuoo");
    words.push_back("qnagrpfzlyrouolqquytwnwnsqnmuzphne");
    chars = "usdruypficfbpfbivlrhutcgvyjenlxzeovdyjtgvvfdjzcmikjraspdfp";

    //words.push_back("cat");
    //words.push_back("bt");
    //words.push_back("hat");
    //chars = "atach";



    //words.push_back("hello");
    //words.push_back("world");
    //words.push_back("leetcode");
    //chars = "welldonehoneyr";
    bool flag;
    int totalcounter = 0;
    int word_counter = 0;

    for (string wor:words) {
        int counter = 0;
        word_counter = wor.size();
        string test = chars;
        for (int i = 0; i < wor.size();i++) {
            for (int j = 0; j < test.size(); j++) {
                if (test[j] == wor[i]) {
                    test.erase(test.begin()+j);
                    counter++;
                    break;
                } 
            }
        }

        cout << counter << endl;
        if (counter == word_counter) {
            totalcounter += counter;
        }
            
    }
    cout << totalcounter << endl;

    return 0;
}
