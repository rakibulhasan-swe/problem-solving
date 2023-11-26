#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    int n = s.size();
    string rev;
    while(n--){
        rev+=s[n];
    }
    if(s == rev) cout << "YES\n";
    else cout << "NO\n";
    
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     while(t--){
//         string s;
//         cin >> s;

//         bool is_good = false;
//         for(int i=0; i<s.size()-2; i++){
//             if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
//                 is_good = true;
//                 break;
//             }
//         }
//         if(!is_good) cout << "Bad\n";
//         else cout << "Good\n";
//     }
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {

//     string s;
//     cin >> s;

//     for(int i=0; i<s.size(); i++){
//         if(s[i] >= 'a' && s[i] <= 'z') s[i]-=32;
//         else if(s[i] == ',') s[i]-=12;
//         else s[i]+=32;
//     }
//     cout << s << "\n";
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while(t--){
//         string s;
//         cin >> s;

//         if(s.size()>10) cout << s[0] << s.size()-2 << s[s.size()-1] << "\n";
//         else cout << s << "\n";
//     }
    
//     return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int sum = 0;
//     for(int i=0; i<s.size(); i++){
//         sum+= (s[i]-'0');
//     }
//     cout << sum << "\n";

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << s.size() << " " << t.size() << "\n";
//     cout << s+t << "\n";
//     char tmp = s[0];
//     s[0] = t[0];
//     t[0] = tmp;
//     cout << s << " " << t << "\n";
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     int s_sum = 0;
//     for(int i=0; i<s.size(); i++){
//         s_sum+= (int)s[i];
//     }

//     int t_sum = 0;
//     for(int i=0; i<t.size(); i++){
//         t_sum+= (int)t[i];
//     }
    
//     if(s_sum>t_sum) cout << t << "\n";
//     else cout << s << "\n";

//     return 0;
// }


// #include<iostream>
// #include <string.h>
// using namespace std;

// int main() {
//   char a[21], b[21];
//   cin >> a >> b;
//   int len_a = strlen(a), len_b = strlen(b);
//   int len = min(len_a, len_b);

//   for (int i = 0; i < len; i++) {
//     if (a[i] < b[i]) {
//       cout << a << '\n';
//       return 0;
//     }
//     else if (a[i] > b[i]) {
//       cout << b << '\n';
//       return 0;
//     }
//   }

//   if (len_a <= len_b) {
//     cout << a << '\n';
//   }
//   else {
//     cout << b << '\n';
//   }
//   return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);

//     for(int i=0; i<s.size(); i++){
//         if(s[i] == '\\') break;
//         cout << s[i];
//     }
//     cout << "\n";

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s, t;
//     cin >> s >> t;

//     cout << s.size() << " " << t.size() << "\n" << s << " " << t << "\n";

//     return 0;
// }