#include <iostream>
#include <windows.h>
using namespace std;
void question(int Santorio) {
	if (Santorio == 1) {
		cout << "Как называется самая глубокая река в мире?" << endl;
	}
	else if (Santorio == 2) {
		cout << "Как называется самая протяженная река в мире?" << endl;
	}
	else if (Santorio == 3) {
		cout << "Как называется самое глубокое озеро в мире?" << endl;
	}
	else if (Santorio == 4) {
		cout << "Как называется самая короткая река в мире?" << endl;
	}
	else if (Santorio == 5) {
		cout << "Какова глубина самого глубокого моря?" << endl;
	}
	else if (Santorio == 6) {
		cout << "Как называется низкий вулкан в мире?" << endl;
	}
	else if (Santorio == 7) {
		cout << "Как называется самая высокая гора в мире?" << endl;
	}
	else if (Santorio == 8) {
		cout << "Как где находится самая глубокая океаническая впадина?" << endl;
	}
	else if (Santorio == 9) {
		cout << "Как называется самая жаркая пустыня в мире?" << endl;
	}	
	else if (Santorio == 10) {
		cout << "Как называется самая холодная пустыня в мире?" << endl;
	}
	else if (Santorio == 11) {
		cout << "Сколько ног у дрозофилы?" << endl;
	}
	else if (Santorio == 12) {
		cout << "Каков максимальный размах крыльев орла?" << endl;
	}
	else if (Santorio == 13) {
		cout << "Как называется самая большая птица в мире?" << endl;
	}
	else if (Santorio == 14) {
		cout << "Как называется самая большая летающая птица в мире?" << endl;
	}
	else if (Santorio == 15) {
		cout << "Есть ли у микробов половой деморфизм?" << endl;
	}
	else if (Santorio == 16) {
		cout << "Чем питается синий кит?" << endl;
	}
	else if (Santorio == 17) {
		cout << "Почему морская рыба не может жить в реке?" << endl;
	}
	else if (Santorio == 18) {
		cout << "Сколько живет Осетр?" << endl;
	}
	else if (Santorio == 19) {
		cout << "Из чего ласточки делают гнезда?" << endl;
	}
	else if (Santorio == 20) {
		cout << "Сколько глаз у паука?" << endl;
	}
	else if (Santorio == 21) {
		cout << "Что такое пульсар?" << endl;
	}
	else if (Santorio == 22) {
		cout << "Какой космический объект имеет горизонт событий?" << endl;
	}
	else if (Santorio == 23) {
		cout << "Какое созвездие постоянно 'охотиться'?" << endl;
	}
	else if (Santorio == 24) {
		cout << "Самая яркая звезда Северного полушария?" << endl;
	}
	else if (Santorio == 25) {
		cout << "Самая близкая звезда к нашей солнечной системе?" << endl;
	}
	else if (Santorio == 26) {
		cout << "Что такое вторая космическая скорость?" << endl;
	}
	else if (Santorio == 27) {
		cout << "Что такое вторая космическая скорость?" << endl;
	}
	else if (Santorio == 28) {
		cout << "Что является эталоном одной космической единицы?" << endl;
	}
	else if (Santorio == 29) {
		cout << "Величина ускорение сободного падения на Марсе?" << endl;
	}
	else if (Santorio == 30) {
		cout << "Есть ли спутники у Плутона?" << endl;
	}
	else if (Santorio == 31) {
		cout << "Что открыл Галилей?" << endl;
	}
	else if (Santorio == 32) {
		cout << "Что открыл Ньютон?" << endl;
	}
	else if (Santorio == 33) {
		cout << "Чем занимался Плутарх?" << endl;
	}
	else if (Santorio == 34) {
		cout << "Где жил Авиценна?" << endl;
	}
	else if (Santorio == 35) {
		cout << "Последний правитель Египта?" << endl;
	}
	else if (Santorio == 36) {
		cout << "Самый знаменитый древний календарь?" << endl;
	}
	else if (Santorio == 37) {
		cout << "Какой был семейный уклад у первобытных людей?" << endl;
	}
	else if (Santorio == 38) {
		cout << "Кому принадлежит авторство поговорки 'Не числом, а умением'?" << endl;
	}
	else if (Santorio == 39) {
		cout << "Кто из великих русских полководцев сдал Москву но выиграл войну?" << endl;
	}
	else if (Santorio == 40) {
		cout << "Русская игра с битой и мячом?" << endl;
	}
	else if (Santorio == 41) {
		cout << "Национальный русский освежающий напиток?" << endl;
	}
	else if (Santorio == 42) {
		cout << "Где находиться нофелет?" << endl;
	}
	else if (Santorio == 43) {
		cout << "Как называется интегральная схема?" << endl;
	}
	else if (Santorio == 44) {
		cout << "'Змеиный' язык прграммирвания?" << endl;
	}
	else if (Santorio == 45) {
		cout << "Русская игра с битой и мячом?" << endl;
	}
	else if (Santorio == 46) {
		cout << "Как называется пластина для закрепления и соединения электронных компонентов" << endl;
	}
	else if (Santorio == 47) {
		cout << "Физический смысл цвета?" << endl;
	}
	else if (Santorio == 48) {
		cout << "Как называютя оптические иллюзии пустынь?" << endl;
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
		cout << "[-] Ваши очки: " << score;
		cout << "\n[-] Вопрос номер " << score1 << endl;	
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
				cout << "1. Конго \n";
				helpsum = 1;
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. Нил \n";
					
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Замбези \n";
						cout << "4. Нигер \n";
					}
					else if (helpme == 2) {
						cout << "3. Нигер \n";
						cout << "4. Замбези \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. Замбези \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Нил \n";
						
						cout << "4. Нигер ";
					}
					else if (helpme == 2) {
						cout << "3. Нигер \n";
						cout << "4. Нил \n";
						
					}
				}
				else if (helpme == 3) {
					cout << "2. Нигер \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Нил \n";
						helpsum = 3;
						cout << "4. Замбези \n";
					}
					else if (helpme == 2) {
						cout << "3. Замбези \n";
						cout << "4. Нил \n";
						
					}
				}
			}
			else if (helpme == 2) {
				cout << "1. Нил \n";
				
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. Конго \n";
					helpsum = 2;
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Замбези \n";
						cout << "4. Нигер \n";
					}
					else if (helpme == 2) {
						cout << "3. Нигер \n";
						cout << "4. Замбези \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. Замбези \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Конго \n";
						helpsum = 3;
						cout << "4. Нигер \n";
					}
					else if (helpme == 2) {
						cout << "3. Нигер \n";
						cout << "4. Конго \n";
						helpsum = 4;
					}
				}
				else if (helpme == 3) {
					cout << "2. Нигер \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Конго \n";
						helpsum = 3;
						cout << "4. Замбези \n";
					}
					else if (helpme == 2) {
						cout << "3. Замбези \n";
						cout << "4. Конго \n";
						helpsum = 4;
					}
				}				
			}
			else if (helpme == 3) {
				cout << "1. Замбези \n";
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. Конго \n";
					helpsum = 2;
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Нил \n";
						cout << "4. Нигер \n";
					}
					else if (helpme == 2) {
						cout << "3. Нигер \n";
						cout << "4. Нил \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. Нил \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Конго \n";
						helpsum = 3;
						cout << "4. Нигер \n";
					}
					else if (helpme == 2) {
						cout << "3. Нигер \n";
						cout << "4. Конго \n";
						helpsum = 4;
					}
				}
				else if (helpme == 3) {
					cout << "2. Нигер \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Конго \n";
						helpsum = 3;
						cout << "4. Нил \n";
					}
					else if (helpme == 2) {
						cout << "3. Нил \n";
						cout << "4. Конго \n";
						helpsum = 4;
					}
				}			

			}
			else if (helpme == 4) {
				cout << "1. Нигер \n";
				helpme = 1 + rand() % 3;
				if (helpme == 1) {
					cout << "2. Конго \n";
					helpsum = 2;
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Замбези \n";
						cout << "4. Нил \n";
					}
					else if (helpme == 2) {
						cout << "3. Нил \n";
						cout << "4. Замбези \n";
					}
				}
				else if (helpme == 2) {
					cout << "2. Замбези \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Конго \n";
						helpsum = 3;
						cout << "4. Нил \n";
					}
					else if (helpme == 2) {
						cout << "3. Нил \n";
						cout << "4. Конго \n";
						helpsum = 4;
					}
				}
				else if (helpme == 3) {
					cout << "2. Нил \n";
					helpme = 1 + rand() % 2;
					if (helpme == 1) {
						cout << "3. Конго \n";
						helpsum = 3;
						cout << "4. Замбези \n";
					}
					else if (helpme == 2) {
						cout << "3. Замбези \n";
						cout << "4. Конго \n";
						helpsum = 4;
					}
				}			

			}
			cout << "Ваш ответ: ";
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
	cout << "Викторина завершена! " << endl;
	cout << "Ваш счет: " << score << endl;
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
	cout << "[+] Выберите уровень сложности.\n";
	cout << "[1] Легко\n";
	cout << "[2] Средне\n";
	cout << "[3] Сложно\n";
	cout << "[-] Вы выбрали:";
	cin >> complexity;
}
void rules() {
	system("cls");
	cout << "[+] В викторине 50 рандомных вопросов, на разных уровнях сложности разное количество.\n";
	cout << "[-] На легком 10\n";
	cout << "[-] На среднем 15\n";
	cout << "[-] На трудном 20\n";
	cout << "[+] За каждый правильный ответ +1 балл, за каждый неправильный ответ -1 балл.\n";
	cout << "[+] Чем больше баллов заработаешь тем лучше.\n";
	cout << "[+] Вопросы по разным темам и могут повторяться.\n";
	system("pause");
}
int main() {
	setlocale(0, "");
	int menu;
	int score = 0;
	int complexity = 1;
	for (bool HGM99999 = true; HGM99999 = true;) {
		system("cls");
		cout << "[-]Добро пожаловать на Викторину!\n";
		cout << "[1] Начать игру\n";
		cout << "[2] Настройки\n";
		cout << "[3] Правила\n";
		cout << "[4] Выход\n";
		cout << "[+] Вы выбрали:";		
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
			cout << "Ждем вас снова!";
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