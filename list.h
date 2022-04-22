#pragma once
#include <iostream>
using namespace std;
struct elem {
	int a; //поле для хранения данных
	elem* next = nullptr;//указатель на следующий элемент
};

void add(elem*& list, int data);// добавить элемент в конец списка
void insert(elem*& list, int data, int position);//добавить элемент в сптсок на какое-то место
const int* get(const elem* list, int position);//получить значение элемента
int count(const elem* list); //сколько элементов в списке
bool remove(elem*& list, int position);//удалить элемент
void clear(elem*& list);//удалить весь список
void show_list(elem*& list);
void show_odd(elem*& list);
bool is_get();
void get_form_data(char*& data);
void str_decode(char*& dec_str, const char* enc_str);
void get_param_value(char*& value, const char* param_name, const char* data);
