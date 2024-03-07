#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    string tmp = "";
    string min="10000000",max="-10000000";
    s+=' '; // 마지막 숫자를 읽기 위해서
    
    for(int i=0; i<s.length(); i++) {
        if(s[i]!=' ')
            tmp+=s[i];
        else {
            int a = stoi(tmp);
            int b = stoi(min);
            if(a<=b) {
                min=tmp;
            }
            int c = stoi(max);
            if(a>=c) {
                max=tmp;
            }
            tmp="";
        }
    }
    answer+=min;
    answer+=' ';
    answer+=max;
    return answer;
}
