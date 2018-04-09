#include <iostream>
#include<windows.h>
#include"console.h"
using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main() {

	int player = 1,choice;
    int i,j;
    for(j=1;j<=10;j++) {
    system("cls");
    TextColor(j);
    gotoXY(0,2);
    cout<<char(201);
    for(i=1;i<50;i++)
    cout<<char(205);
    cout<<char(187)<<endl;
    cout<<char(186)<<"             welcom to my game !!                "<<char(186)<<endl;
    cout<<char(186)<<"                       Develop by Do Ngoc Thuyet "<<char(186)<<endl;
    cout<<char(186)<<"                     To future..........!!       "<<char(186)<<endl;
    cout<<char(186)<<"                                                 "<<char(186)<<endl;
    cout<<char(186)<<"                                                 "<<char(186)<<endl;
    cout<<char(200);
    for(i=1;i<50;i++)
    cout<<char(205);
    cout<<char(188)<<endl;
    Sleep(200);}
	char mark,hoi,hoi1;
	cout<<"ban muon bat dau chu ? <Y/N>"<<"\n";
	cin>>hoi;
	if(hoi=='Y' || hoi=='y'  )
	while(1){
	do {
		board();
		player=(player%2)?1:2;

		cout<<"\n\n";
		cout << "Player " << player << ", nhap so ma ban muon danh:  ";
		cin >> choice;
		TextColor(10);
		mark=(player == 1) ? 'X' : 'O';
		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
		else
		{
			cout<<"o da duoc danh ";

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	   }
	    while(i==-1);
	    board();
	    if(i==1){
        cout<<"\n\n";
        cout<<"Gameover !!\n";
        cout<<"==>\aPlayer "<<--player<<" <<<win>>> \n";
	}
	else
		cout<<"==>\aCo hoa !! \n";

        cout<<"ban co muon tiep tuc ?<Y/N>";
        cin>>hoi1;

        if(hoi1=='Y' ||hoi1=='y')
           {
            square[1] = '1';
            square[2] = '2';
            square[3] = '3';
            square[4] = '4';
            square[5] = '5';
            square[6] = '6';
            square[7] = '7';
            square[8] = '8';
            square[9] = '9';
           }
           else
            break;
	}
}

int checkwin() {
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
            && square[4] != '4' && square[5] != '5' && square[6] != '6'
            && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}

void board() {
      system("cls");
            cout << "\n\ntic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
    cout <<char(218)<<char(196)<<char(196)<<char(196)<<char(196)<<char(194)<<char(196)<<char(196)<<char(196)<<char(196)<<char(194)<<char(196)<<char(196)<<char(196)<<char(196)<<char(191)<<endl;
    cout <<char(179)<<"  "<<square[1]<<" "<<char(179)<<"  "<<square[2]<<" "<<char(179)<<"  "<<square[3]<<" "<<char(179)<<endl;
    cout <<char(195)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(180)<<endl;
    cout <<char(179)<<"  "<<square[4]<<" "<<char(179)<<"  "<<square[5]<<" "<<char(179)<<"  "<<square[6]<<" "<<char(179)<<endl;
    cout <<char(195)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(197)<<char(196)<<char(196)<<char(196)<<char(196)<<char(180)<<endl;
    cout <<char(179)<<"  "<<square[7]<<" "<<char(179)<<"  "<<square[8]<<" "<<char(179)<<"  "<<square[9]<<" "<<char(179)<<endl;
    cout <<char(192)<<char(196)<<char(196)<<char(196)<<char(196)<<char(193)<<char(196)<<char(196)<<char(196)<<char(196)<<char(193)<<char(196)<<char(196)<<char(196)<<char(196)<<char(217)<<endl;

}
