#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include "CS.h"
#include "Pipe.h"
#include "header.h"
#include "Graph.h"

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    System network;
    int option = -1;
    while (option) {
        cout << "\n1. �������� �����\n" <<
            "2. �������� ��\n" <<
            "3. �������� ���� ��������\n" <<
            "4. ������������� �����\n" <<
            "5. ������������� ��\n" <<
            "6. ���������\n" <<
            "7. ���������\n" <<
            "8. ����� �����\n" <<
            "9. ����� ��\n" <<
            "10. ������� ���������������� ����\n" <<
            "11. ����������\n" <<
            "0. �����\n" <<
            "������� ��� �����: ";

        switch (correctnumber(0, 11)) {
        case 1: {
            Pipe p;
            cin >> p;
            network.pipe_group.insert({ p.get_id(), p });
            break;
        }
        case 2: {
            CS cs;
            cin >> cs;
            network.cs_group.insert({ cs.get_id(), cs });
            break;
        }
        case 3: {
            network.information();
            break;
        }
        case 4: {
            network.edit();
            break;
        }
        case 5: {
            network.editcs();
            break;
        }
        case 6: {
            network.save();
            break;
        }
        case 7: {
            network.load();
            break;
        }
        case 8: {
            findPipe();
            break;
        }
        case 9: {
            findCS();
            break;
        }
        case 10: {
            CreateGTsys();
            break;
        }
        case 11: {
            network.sorting();
            break;
        }
        case 0: {
            return 0;
        }
        }
    }

    return 0;
}