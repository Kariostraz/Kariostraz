#include <iostream>
#include <windows.h>
using namespace std;
void question(int Santorio) {
	if (Santorio == 1) {
		cout << "��� ���������� ����� �������� ���� � ����?" << endl;
	}
	else if (Santorio == 2) {
		cout << "��� ���������� ����� ����������� ���� � ����?" << endl;
	}
	else if (Santorio == 3) {
		cout << "��� ���������� ����� �������� ����� � ����?" << endl;
	}
	else if (Santorio == 4) {
		cout << "��� ���������� ����� �������� ���� � ����?" << endl;
	}
	else if (Santorio == 5) {
		cout << "������ ������� ������ ��������� ����?" << endl;
	}
	else if (Santorio == 6) {
		cout << "��� ���������� ������ ������ � ����?" << endl;
	}
	else if (Santorio == 7) {
		cout << "��� ���������� ����� ������� ���� � ����?" << endl;
	}
	else if (Santorio == 8) {
		cout << "��� ��� ��������� ����� �������� ������������ �������?" << endl;
	}
	else if (Santorio == 9) {
		cout << "��� ���������� ����� ������ ������� � ����?" << endl;
	}	
	else if (Santorio == 10) {
		cout << "��� ���������� ����� �������� ������� � ����?" << endl;
	}
	else if (Santorio == 11) {
		cout << "������� ��� � ���������?" << endl;
	}
	else if (Santorio == 12) {
		cout << "����� ������������ ������ ������� ����?" << endl;
	}
	else if (Santorio == 13) {
		cout << "��� ���������� ����� ������� ����� � ����?" << endl;
	}
	else if (Santorio == 14) {
		cout << "��� ���������� ����� ������� �������� ����� � ����?" << endl;
	}
	else if (Santorio == 15) {
		cout << "���� �� � �������� ������� ���������?" << endl;
	}
	else if (Santorio == 16) {
		cout << "��� �������� ����� ���?" << endl;
	}
	else if (Santorio == 17) {
		cout << "������ ������� ���� �� ����� ���� � ����?" << endl;
	}
	else if (Santorio == 18) {
		cout << "������� ����� �����?" << endl;
	}
	else if (Santorio == 19) {
		cout << "�� ���� �������� ������ ������?" << endl;
	}
	else if (Santorio == 20) {
		cout << "������� ���� � �����?" << endl;
	}
	else if (Santorio == 21) {
		cout << "��� ����� �������?" << endl;
	}
	else if (Santorio == 22) {
		cout << "����� ����������� ������ ����� �������� �������?" << endl;
	}
	else if (Santorio == 23) {
		cout << "����� ��������� ��������� '���������'?" << endl;
	}
	else if (Santorio == 24) {
		cout << "����� ����� ������ ��������� ���������?" << endl;
	}
	else if (Santorio == 25) {
		cout << "����� ������� ������ � ����� ��������� �������?" << endl;
	}
	else if (Santorio == 26) {
		cout << "��� ����� ������ ����������� ��������?" << endl;
	}
	else if (Santorio == 27) {
		cout << "��� ����� ������ ����������� ��������?" << endl;
	}
	else if (Santorio == 28) {
		cout << "��� �������� �������� ����� ����������� �������?" << endl;
	}
	else if (Santorio == 29) {
		cout << "�������� ��������� ��������� ������� �� �����?" << endl;
	}
	else if (Santorio == 30) {
		cout << "���� �� �������� � �������?" << endl;
	}
	else if (Santorio == 31) {
		cout << "��� ������ �������?" << endl;
	}
	else if (Santorio == 32) {
		cout << "��� ������ ������?" << endl;
	}
	else if (Santorio == 33) {
		cout << "��� ��������� �������?" << endl;
	}
	else if (Santorio == 34) {
		cout << "��� ��� ��������?" << endl;
	}
	else if (Santorio == 35) {
		cout << "��������� ��������� ������?" << endl;
	}
	else if (Santorio == 36) {
		cout << "����� ���������� ������� ���������?" << endl;
	}
	else if (Santorio == 37) {
		cout << "����� ��� �������� ����� � ����������� �����?" << endl;
	}
	else if (Santorio == 38) {
		cout << "���� ����������� ��������� ��������� '�� ������, � �������'?" << endl;
	}
	else if (Santorio == 39) {
		cout << "��� �� ������� ������� ����������� ���� ������ �� ������� �����?" << endl;
	}
	else if (Santorio == 40) {
		cout << "������� ���� � ����� � �����?" << endl;
	}
	else if (Santorio == 41) {
		cout << "������������ ������� ���������� �������?" << endl;
	}
	else if (Santorio == 42) {
		cout << "��� ���������� �������?" << endl;
	}
	else if (Santorio == 43) {
		cout << "��� ���������� ������������ �����?" << endl;
	}
	else if (Santorio == 44) {
		cout << "'�������' ���� ��������������?" << endl;
	}
	else if (Santorio == 45) {
		cout << "������� ���� � ����� � �����?" << endl;
	}
	else if (Santorio == 46) {
		cout << "��� ���������� �������� ��� ����������� � ���������� ����������� �����������" << endl;
	}
	else if (Santorio == 47) {
		cout << "���������� ����� �����?" << endl;
	}
	else if (Santorio == 48) {
		cout << "��� ��������� ���������� ������� �������?" << endl;
	}
	else if (Santorio == 49) {

	}
	else if (Santorio == 50) {

	}
}
void game(int menu, int complexity, int score) {
	system("cls");
	int score1 = 1;
	int Santorio = 0;
	int helpme = 400;
	int helpsum = 0;
	for (bool T = true; T = true;) {
		system("cls");
		Santorio = 1 + rand() % 50;
		cout << "[-] ���� ����: " << score;
		cout << "\n[-] ������ ����� " << score1 << endl;	
		cout << Santorio;		
		if (complexity == 1) {
			if (score1 >= 10) {
				system("cls");
				T = false;
			}
			else {
				question(Santorio);
			}
		}
		else if (complexity == 2) {
			if (score1 >= 15) {
				system("cls");
				T = false;
			}
			else {
				question(Santorio);
			}
		}
		else if (complexity == 3) {
			if (score1 >= 20) {
				system("cls");
				T = false;
			}
			else {
				question(Santorio);
			}
		}		
		if (Santorio == 1) {			
			helpme = 1 + rand() % 4;
			if (helpme == 1) {
				cout << "1. ����� \n";
				helpsum = 1;
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. ��� \n";
					
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ������� \n";
						cout << "4. ����� \n";
					}
					else if (helpme == 2) {
						cout << "3. ����� \n";
						cout << "4. ������� \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. ������� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ��� \n";
						
						cout << "4. ����� ";
					}
					else if (helpme == 2) {
						cout << "3. ����� \n";
						cout << "4. ��� \n";
						
					}
				}
				else if (helpme == 3) {
					cout << "2. ����� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ��� \n";
						helpsum = 3;
						cout << "4. ������� \n";
					}
					else if (helpme == 2) {
						cout << "3. ������� \n";
						cout << "4. ��� \n";
						
					}
				}
			}
			else if (helpme == 2) {
				cout << "1. ��� \n";
				
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. ����� \n";
					helpsum = 2;
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ������� \n";
						cout << "4. ����� \n";
					}
					else if (helpme == 2) {
						cout << "3. ����� \n";
						cout << "4. ������� \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. ������� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ����� \n";
						helpsum = 3;
						cout << "4. ����� \n";
					}
					else if (helpme == 2) {
						cout << "3. ����� \n";
						cout << "4. ����� \n";
						helpsum = 4;
					}
				}
				else if (helpme == 3) {
					cout << "2. ����� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ����� \n";
						helpsum = 3;
						cout << "4. ������� \n";
					}
					else if (helpme == 2) {
						cout << "3. ������� \n";
						cout << "4. ����� \n";
						helpsum = 4;
					}
				}				
			}
			else if (helpme == 3) {
				cout << "1. ������� \n";
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. ����� \n";
					helpsum = 2;
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ��� \n";
						cout << "4. ����� \n";
					}
					else if (helpme == 2) {
						cout << "3. ����� \n";
						cout << "4. ��� \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. ��� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ����� \n";
						helpsum = 3;
						cout << "4. ����� \n";
					}
					else if (helpme == 2) {
						cout << "3. ����� \n";
						cout << "4. ����� \n";
						helpsum = 4;
					}
				}
				else if (helpme == 3) {
					cout << "2. ����� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ����� \n";
						helpsum = 3;
						cout << "4. ��� \n";
					}
					else if (helpme == 2) {
						cout << "3. ��� \n";
						cout << "4. ����� \n";
						helpsum = 4;
					}
				}			

			}
			else if (helpme == 4) {
				cout << "1. ����� \n";
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. ����� \n";
					helpsum = 2;
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ������� \n";
						cout << "4. ��� \n";
					}
					else if (helpme == 2) {
						cout << "3. ��� \n";
						cout << "4. ������� \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. ������� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ����� \n";
						helpsum = 3;
						cout << "4. ��� \n";
					}
					else if (helpme == 2) {
						cout << "3. ��� \n";
						cout << "4. ����� \n";
						helpsum = 4;
					}
				}
				else if (helpme == 3) {
					cout << "2. ��� \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. ����� \n";
						helpsum = 3;
						cout << "4. ������� \n";
					}
					else if (helpme == 2) {
						cout << "3. ������� \n";
						cout << "4. ����� \n";
						helpsum = 4;
					}
				}			

			}
			cout << "��� �����: ";
			cin >> menu;
			if (menu = helpsum) {
				score = score + 1;
				score1 = score1 + 1;
			}
			else {
				score1 = score1 + 1;
			}
		}
	}
	cout << "��������� ���������! " << endl;
	cout << "��� ����: " << score << endl;
	if (score < 5 && complexity == 1) {

	}
	else if (score > 5 && score < 8 && complexity == 1) {

	}
	else if (score > 8 && score < 11 && complexity == 1) {

	}
	else if (score < 7 && complexity == 2) {

	}
	else if (score > 7 && score < 12 && complexity == 2) {

	}
	else if (score > 12 && complexity == 2) {

	}
	else if (score < 9 && complexity == 3) {

	}
	else if (score > 9 && score < 16 && complexity == 3) {

	}
	else if (score > 16 && complexity == 3) {

	}
	else {
		for (int i = 0; i < 100; i++) {
			cout << "ERROR! ERROR! ERROR! \n";
		}
	}
}
void setings(int menu, int complexity) {
	system("cls");	
	cout << "[+] �������� ������� ���������.\n";
	cout << "[1] �����\n";
	cout << "[2] ������\n";
	cout << "[3] ������\n";
	cout << "[-] �� �������:";
	cin >> complexity;
}
void rules() {
	system("cls");
	cout << "[+] � ��������� 50 ��������� ��������, �� ������ ������� ��������� ������ ����������.\n";
	cout << "[-] �� ������ 10\n";
	cout << "[-] �� ������� 15\n";
	cout << "[-] �� ������� 20\n";
	cout << "[+] �� ������ ���������� ����� +1 ����, �� ������ ������������ ����� -1 ����.\n";
	cout << "[+] ��� ������ ������ ����������� ��� �����.\n";
	cout << "[+] ������� �� ������ ����� � ����� �����������.\n";
	system("pause");
}
int main() {
	setlocale(0, "");
	int menu;
	int score = 0;
	int complexity = 1;
	for (bool HGM99999 = true; HGM99999 = true;) {
		system("cls");
		cout << "[-]����� ���������� �� ���������!\n";
		cout << "[1] ������ ����\n";
		cout << "[2] ���������\n";
		cout << "[3] �������\n";
		cout << "[4] �����\n";
		cout << "[+] �� �������:";		
		cin >> menu;
		if (menu == 1) {
			game(menu, complexity, score);
		}
		else if (menu == 2) {
			setings(menu, complexity);
		}
		else if (menu == 3) {
			rules();
		}
		else if (menu == 4) {
			system("cls");
			cout << "���� ��� �����!";
			HGM99999 = false;
		}
		else {
			system("cls");
			cout << "ERROR!";
			system("pause");
		}
	}
	return 0;
}