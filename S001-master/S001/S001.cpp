// S001.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>


int main()
{
    std::cout << "Hello World!\n";
    char s[256];
    char s1[256];
    char s2[512];
    char f[] = "%s";
    char fd[] = "%d\n";
    _asm {

        lea ebx, s
        push ebx
        lea ecx, f
        push ecx
        call scanf
        add esp, 8

        lea ebx, s1
        push ebx
        lea ecx, f
        push ecx
        call scanf
        add esp, 8

        lea ebx, s
        mov ecx, -1
        dec ebx
        lea edx, s2
        dec edx

        b1 :
        inc ecx
            inc ebx
            inc edx
            mov al, [ebx]
            mov[edx], al
            cmp al, 0
            jnz b1

            lea ebx, s1
            dec edx
            dec ebx

            b2 :
        inc edx
            inc ebx
            mov al, [ebx]
            mov[edx], al
            cmp al, 0
            jnz b2

            lea ebx, s2
            push ebx
            lea ecx, f
            push ecx
            call printf
            add esp, 8

    }
    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
