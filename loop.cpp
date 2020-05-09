#include "loop.h"

using namespace std;

void for_loop() {
	int a[] = { 1,2,3,4,5,6,7 };
	for (int i = 0; i < 7; i++) {
		cout << a[i] << endl;
	}
}

void foreach_loop() {
	int a[] = { 1,2,3,4,5,6,7,8 };
	for (int& k:a){
		cout << "K:" << k << endl;
	}
}

void while_loop() {
	int a[] = { 1,2,3,4,5,6,7 };
	int i = 0;
	while (i < 7) {
		cout << a[i++] << endl;
	}
}


void do_while_loop(){
	int a[] = { 7,6,5,4,3,2,1,0 };
	int i = 0;
	do {
		cout << a[i++] << endl;
	} while (i < 9);
}

void loop_show() {
	for_loop();
	foreach_loop();
	while_loop();
	do_while_loop();
}