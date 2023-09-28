#include<iostream>
#include "horse.hpp"
#include "race.hpp"
using namespace std;
int main(){
	int horse,track;
	do{
	cout<<"Enter the number of horses:";
	cin>>horse;
	if(horse<=1){
		cout<<"Number of horses cannot be less than 2,try again!"<<endl;}
	}while(horse<2);
	do{
	cout<<"Enter the track's length:";
	cin>>track;
	if(track<=1){
		cout<<"The track's length cannot be less than 2,try again!"<<endl;
	}
	}while(track<2);
        Race race(horse,track);
        race.runRace();
        return 0;
}	
