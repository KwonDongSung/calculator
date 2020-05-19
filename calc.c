#include <stdio.h>
#include <string.h>


int main(){
string calc[100];
string num[100];
string oper[100];
int k = 0;
int j = 0;
printf ("수식을 입력하세요 : ");
scanf ("%s",calc);
for(int i=0; i< strlen(calc); i++){
  if( is_operater(calc[i]) == true){
    oper[k] = calc[i];
    k++;
    }
  else
    num[j] = calc[i];
}
 
printf("결과는 : %d ", 
}

bool is_operator(string a){
if ((a == +) || (a == -) || (a == *) || (a == /))
  return true;
  else return false;
}
