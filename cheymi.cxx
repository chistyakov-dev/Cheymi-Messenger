#include <iostream>
#include <string>
#include <vector>

int main() {

 std::string otvet;
 std::string name = "Егор";
 std::string username = "chistcode";

 std::vector<std::string> notes;

 while (true) {

  std::cout << "\n=====================================\n";
  std::cout << "       CHEYMI MESSENGER\n";
  std::cout << "=====================================\n\n";

  std::cout << "Выберите:\n";
  std::cout << "1 - Чаты\n";
  std::cout << "2 - Профиль\n";
  std::cout << "3 - Настройки\n";
  std::cout << "4 - Заметки\n";
  std::cout << "5 - Выход\n";

  int vybor;
  std::cin >> vybor;

  if (vybor == 1) {

   std::cout << "БОТ: Привет, Егор!\n";
   std::cin >> otvet;

   if (otvet == "привет") {
    std::cout << "БОТ: Удачи в изучении C++!\n";
   }

   else {
    std::cout << "БОТ: Я пока не знаю такой команды.\n";
   }
  }

  else if (vybor == 2) {

   std::cout << "\n========== ПРОФИЛЬ ==========\n";
   std::cout << "Имя: " << name << "\n";
   std::cout << "Юзернейм: @" << username << "\n";
  }

  else if (vybor == 3) {

   std::cout << "\n========== НАСТРОЙКИ ==========\n";
   std::cout << "Тестовая версия\n";
   std::cout << "Версия: V1.1.2\n";
   std::cout << "Проверка обновлений: последняя версия\n";
  }

  else if (vybor == 4) {

   int noteChoice;

   std::cout << "\n===== ЗАМЕТКИ =====\n";
   std::cout << "1 - Добавить заметку\n";
   std::cout << "2 - Посмотреть заметки\n";

   std::cin >> noteChoice;

   if (noteChoice == 1) {

    std::string note;

    std::cout << "Введите заметку:\n";

    std::cin.ignore();
    getline(std::cin, note);

    notes.push_back(note);

    std::cout << "Заметка сохранена!\n";
   }

   else if (noteChoice == 2) {

    std::cout << "\n===== ВАШИ ЗАМЕТКИ =====\n";

    for (int i = 0; i < notes.size(); i++) {
     std::cout << i + 1 << ". " << notes[i] << "\n";
    }
   }
  }

  else if (vybor == 5) {

   std::cout << "Выход...\n";
   break;
  }

  else {
   std::cout << "Error!\n";
  }
 }

 return 0;
}