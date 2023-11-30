// floss.exe --functions 0x140001000 --no static -- code04.exe

#include <stdio.h>
#include <stdint.h>

char* decode(uint8_t* enc, uint32_t len){
	for(int i=0; i<len;i++){
		enc[i] = enc[i] ^ 0x15;
	}
	return enc;
}


int main(){
	char enc[] = "]pyyz5bzgyq";
	printf("%s\n",decode(enc,sizeof(enc)-1));
}