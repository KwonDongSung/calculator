#include <iostream>
using namespace std;
#include <string>

bool is_operator(char a){
if ((a == '+') || (a == '-') || (a == '*') || (a == '/'))
  return true;
  else return false;
}

int test(int a, string b, int c){
  if (b == "+") return a + c;
  if (b == "-") return a - c;
  if (b == "*") return a * c;
  if (b == "/") return a / c;
}

int main(){
char calc[100];
int num[100];
char oper[100];
int ans = 0;
int k = 0;
int j = 0;
printf ("수식을 입력하세요 : ");
scanf ("%s",calc);
for(int i=0; i< 10; i++){
  if( is_operator(calc[i]) == true){
    oper[k] = calc[i];
    k++;
    }
  else{
    num[j] = calc[i];
    j++;
  }
}
int m = 0;
int sth = num[0];
for(int n = 1; n < 7; n++){
  if (num[n] == 0) break;
  sth = test(sth ,oper[m],num[n]);
  m++;
}
  
printf("결과는 : %d ", ans);
}
