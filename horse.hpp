#ifndef HORSE_H
#define HORSE_H
#include<iostream>
class Horse{
	private:
		int position;
		int number;
	public:
		void move();
		Horse(int num):number(num),position(0){}
		int getPosition(){
			return position;
		}
		int getNumber(){
			return number;
		}
};
#endif
