#ifndef RACE_H
#define RACE_H
#include<iostream>
#include "horse.hpp"
using namespace std;
class Race{
	private:
		int track;
		int horse;
		Horse** horses;
	public:
		bool isFinish();
		void runRace();
		void display();
		Race(int horse,int track):horse(horse),track(track){
			horses=new Horse*[horse];
			for(int i=0;i<horse;i++){
				horses[i]=new Horse(i+1);
			}
		}
		~Race(){
			for(int i=0;i<horse;i++){
				delete horses[i];
			}
			delete[] horses;
		}
};
#endif
