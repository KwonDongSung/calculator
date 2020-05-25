#include <stdio.h>
#include <string.h>

int calculate(*p,*q,int sth);
bool is_operator(string a);
int main(){
string calc[100];
string num[100];
string oper[100];
int ans = 0;
int k = 0;
int j = 0;
printf ("수식을 입력하세요 : ");
scanf ("%s",calc);
for(int i=0; i< strlen(calc); i++){
  if( is_operater(calc[i]) == true){
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
for(int n = 1; n < strlen(calc); n++){
  sth = test(sth ,oper[m],int num[n]);
  m++;
}
//int n=0;
//int m=0;
//int nans=0;
//while(1){
//  nans = calculate(num[n],oper[m],ans);
 // n+=2;
 // m++;
  //ans = calculate(num[n],oper[m],nans);
//}
 
  
printf("결과는 : %d ", ans);
}

bool is_operator(string a){
if ((a == +) || (a == -) || (a == *) || (a == /))
  return true;
  else return false;
}
int test(int a, string b, int c){
  if (b == "+") return a + c;
  if (b == "-") return a - c;
  if (b == "*") return a * c;
  if (b == "/") return a / c;
}
