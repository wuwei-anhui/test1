#include"reg52.h"
int OUT;
OUT=0x7F;
void change()
{
	if(OUT==0xFE) {
		OUT=0X7F;
	}
	else{
		OUT=OUT>>1;
		OUT|=0X80;
	}
}
void delay(int time){
	int t;
	while(time--)
	for(t=0;t<123;t++);
}
int main(){
	P1=OUT;
	
	while(1){
		chang();
		P1=	OUT;
		delay(500);
	}

	
}