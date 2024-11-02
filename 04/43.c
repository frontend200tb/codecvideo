#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE nPrevInstance, LPSTR lpCmdLine, int CmdShow)
{
  char strMes[] = "Hello from frontend200tb";
  char strAut[] = "Author Ivan";
  MessageBox(NULL, strMes, strAut, MB_YESNO | MB_ICONEXCLAMATION);

  return 0;
}

// 43. WinAPI в СИ
/*
windows.h содержит заголовки функций для работы с winAPI
hInstance дескриптор, ссылка на нашу программу
hWnd дескриптор, ссылка на родительский файл

int MessageBox(HWND hWnd, LPCTSTR lpText, LPCTSTR lpCaption, UINT uType) прототип функции
MB_OK кнопка OK
MB_YESNO кнопки Да Нет
MB_ICONEXCLAMATION иконка восклицательного знака

Чтобы вместе с программой не открывалась консоль, нужно при компиляции добавить флаг -mwindows
gcc -Wall 43.c -mwindows
*/