#include <iostream>
#include "name.h"
#include "name2.h"
#include "house.h"

#include "employee.h"
#include "department.h"

#include "employee2.h"
#include "department2.h"

int main() {
    std::cout << "1.3 Старые имена:\n";
    Name old1("Клеопатра");
    Name old2("Александр", "Пушкин", "Сергеевич");
    Name old3("Владимир", "Маяковский");

    old1.print();
    old2.print();
    old3.print();
    std::cout << "\n";

    House h1(1);
    House h2(5);
    House h3(23);

    std::cout << "1.5 Дома:\n";
    h1.print();
    h2.print();
    h3.print();
    std::cout << "\n";

    // === Старая версия сотрудников ===
    Department it_old("IT");
    Employee petrov("Петров", &it_old);
    Employee kozlov("Козлов", &it_old);
    Employee sidorov("Сидоров", &it_old);
    it_old.set_manager(&kozlov);

    std::cout << "2.4 Старая версия сотрудников:\n";
    petrov.print();
    kozlov.print();
    sidorov.print();
    std::cout << "\n";

    // === Новая версия сотрудников ===
    Department2 it_new("IT");
    Employee2 petrov2("Петров", &it_new);
    Employee2 kozlov2("Козлов", &it_new);
    Employee2 sidorov2("Сидоров", &it_new);
    it_new.set_manager(&kozlov2);

    std::cout << "3.4 Новая версия сотрудников (с коллегами):\n";
    petrov2.print();
    kozlov2.print();
    sidorov2.print();

    std::cout << "\nСписок коллег:\n";
    for (auto e : {&petrov2, &kozlov2, &sidorov2}) {
        std::cout << e->get_name() << " коллеги: ";
        auto colleagues = e->get_colleagues();
        for (size_t i = 0; i < colleagues.size(); ++i) {
            std::cout << colleagues[i]->get_name();
            if (i != colleagues.size() - 1) std::cout << ", ";
        }
        std::cout << std::endl;
    }

    std::cout << "4.5 Новые имена\n";
    Name2 new1("Клеопатра");
    Name2 new2("Александр", "Пушкин", "Сергеевич");
    Name2 new3("Владимир", "Маяковский");
    Name2 new4("Христофор", "Бонифатьевич");

    new1.print();
    new2.print();
    new3.print();
    new4.print();
    std::cout << "\n";

    return 0;
}
