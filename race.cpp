#include "race.hpp"
using namespace std;
bool Race::isFinish(){
	for(int i=0;i<horse;i++){
		if(horses[i]->getPosition()>=track){
			return true;
		}
	}
	return false;
}
void Race::runRace(){
	cout<<"Race begins ---"<<endl;
	while (!isFinish()) {
            for (int i = 0; i < horse; i++) {
                horses[i]->move();
            }
            display();
        }

        int winner = -1;
        for (int i = 0; i < horse; i++) {
            if (horses[i]->getPosition() >= track) {
                winner = i;
                break;
	    }
	}
	cout<<"Horse "<<horses[winner]->getNumber()<<" wins!"<<endl;
}
void Race::display(){
        for (int i = 0; i <horse; i++) {
            for (int j = 0; j < track; j++) {
                if (j == horses[i]->getPosition()) {
                    cout << horses[i]->getNumber();
                } else {
                    cout << ".";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }

