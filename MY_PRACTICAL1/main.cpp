
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
struct Person {
	int id{};
	char* name = nullptr;
	char* last_name = nullptr;
	int age{};
};


int main() {
	int nums[5] = { 1,2,3,4,5 };
	

	FILE* file = fopen("my_test.bin", "wb");

	if (file) {
		fwrite(nums, sizeof(int), 5, file);
		fclose(file);
	}

	int nums2[5]{};
	FILE* file = fopen("my_test.bin", "rb");

	if (file) {
		fread(nums2, sizeof(int), 5, file);
		fclose(file);
	}

	for (int i = 0; i < 5; i++) {
		cout << nums2[i] << ' ';
	}

	srand(time(0));
	int size = rand() % 20 + 5;

	int* p_arr = new int[size];

	for (int i = 0; i < size; i++) {
		p_arr[i] = rand() % 20 + 1;
	}

	for (int i = 0; i < size; i++) {
		cout << p_arr[i] << ' ';
	}

	FILE* file = fopen("test2.bin", "wb");

	if (file) {
		fwrite(&size, sizeof(int), 1, file);
		fwrite(p_arr, sizeof(int), size, file);
		fclose(file);
	}

	FILE* file = fopen("test2.bin", "rb");
	int size{};
	int* p_arr = nullptr;

	if (file) {
		fread(&size, sizeof(int), 1, file);
		p_arr = new int[size];
		fread(p_arr, sizeof(int), size, file);
		fclose(file);
	}

	for (int i = 0; i < size; i++) {
		cout << p_arr[i] << ' ';
	

	Person person{};

	person.id = 123;
	person.name = new char[5];
	strcpy(person.name, "sana");
	person.last_name = new char[5];
	strcpy(person.last_name, "shup");
	person.age = 38;


	FILE* file = fopen("person.bin", "wb");

	if (file) {
		int size{};
		fwrite(&person.id, sizeof(int), 1, file);
		size = strlen(person.name) + 1;
		fwrite(&size, sizeof(int), 1, file);
		fwrite(person.name, sizeof(char), size, file);
		size = strlen(person.last_name) + 1;
		fwrite(&size, sizeof(int), 1, file);
		fwrite(person.last_name, sizeof(char), size, file);
		fwrite(&person.age, sizeof(int), 1, file);
		fclose(file);
	}

	delete[] person.name;
	delete[] person.last_name;

	Person person{};

	FILE* file = fopen("person.bin", "rb");

	if (file) {
		int size{};
		fread(&person.id, sizeof(int), 1, file);
		fread(&size, sizeof(int), 1, file);
		person.name = new char[size];
		fread(person.name, sizeof(char), size, file);
		fread(&size, sizeof(int), 1, file);
		person.last_name = new char[size];
		fread(person.last_name, sizeof(char), size, file);
		fread(&person.age, sizeof(int), 1, file);
		fclose(file);
	}

	cout << person.id << endl;
	cout << person.name << endl;
	cout << person.last_name << endl;
	cout << person.age << endl;



}*/

#include <iomanip>
#include <string>

int main() {
	string secret = "password";

	cout << secret.capacity() << endl;
}
