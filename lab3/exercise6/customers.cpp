#include <iostream>
#include <string>
#include "customers.h"

customer *create_list(std::string name){
	customer *c = new customer;
	c->name = name;
	return c;
}

void insert_name(customer *head, std::string name){
	while(cur->next != head){
		//std::cout << cur->next << std::endl;
		cur = cur.next;
	}
	cur->next = create_list(name);
}

int list_lenght(customer *head){
	int count = 0;
	customer *cur = head;
	while(cur->next != NULL){
		count++
		//std::cout << cur->next << std::endl;
		cur = cur.next;
	}
	return count;
}

void print_customers(customer *head){
	customer *cur = head;
	while(cur->next != head){
		std::cout << cur->next << std::endl;
		cur = cur.next;
	}
}