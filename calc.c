#include <stdio.h>
#include <string.h>


int main(){
string calc[100];
 string num[100];
 string oper[100];
printf ("수식을 입력하세요 : ");
scanf ("%s",calc);
for(int i=0; i< strlen(calc); i++);
  int k = 0;
  if( is_operater(calc[1]) == true){
    oper[k] = calc[1];
    k++;
}
}
}

bool is_operator(string a){
if ((a == +) || (a == -) || (a == *) || (a == /))
  return true;
  else return false;
}
