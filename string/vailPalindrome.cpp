#include <iostream>
#include <string>
using namespace std;

bool checkpalin(string s,int i,int j){
    while(i<j){
        if(s[i] != s[j]){
            return false;
        }
    }
}

bool validPalindrome(string s)
{
    int i = 0;
    int j = s.length()-1;
    while(i<j){
        if(s[i] != s[j]){
            return checkpalin(s,i,j-1) || checkpalin(s,i+1,j);
        }
        return true;
    }



    // int flag = 0;
    // for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    // {
    //     if (s[i] != s[j])
    //     {
    //         if (flag == 0)
    //         {
    //             if (s[i] == s[j - 1])
    //             {
    //                 if (s[i + 1] == s[j])
    //                 {
    //                     s.erase(i, 1);
    //                     j--;
    //                     flag++;
    //                 }
    //                 else
    //                 {

    //                     s.erase(j, 1);
    //                     j--;
    //                     flag++;
                        
    //                 }
    //             }

    //             else
    //             {
    //                 s.erase(i, 1);
    //                 i--;
    //                 flag++;
                    
    //             }
    //         }
    //         else
    //         {
    //             return false;
    //         }
    //     }
    // }

    // return true;
}

int main()
{
    string s = "ebcbbececabbacecbbcbe";
    cout << validPalindrome(s);
    return 0;
}