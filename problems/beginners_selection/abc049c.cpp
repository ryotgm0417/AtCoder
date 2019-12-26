#include <iostream>
#include <string>
using namespace std;

int main(){
  string S;
  cin >> S;
  int len=S.length();
  int p=0;

  int dream_flag=0;
  int is_yes=1;

  while(p<len){
    if(S.substr(p,5) == "dream"){
      p += 5;
      dream_flag = 1;
      continue;
    }else if(S.substr(p,2) == "er"){
      if(S.substr(p,5) == "erase"){
        if(S.substr(p,6) == "eraser"){
          p += 6;
        }else{
          p += 5;
        }
      }else if(dream_flag==1){
        p += 2;
      }else{
        is_yes = 0;
        break;
      }
      dream_flag = 0;
    }else{
      is_yes = 0;
      break;
    }
  }

  if(is_yes==1){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
