#include "horse.hpp"
void Horse::move(){
	int running=rand()%2;
	if(running){
		position++;
	}
}
