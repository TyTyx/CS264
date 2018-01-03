#pragma once
#include <string>
struct customer{
	std:: string name,
	customer *head;
}

customer *create_list(string name);
void insert_name(customer* name, string name);
int list_length(customer* head);
void print_customers(customer *head);