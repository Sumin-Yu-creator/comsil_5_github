#include <stdio.h>
<<<<<<< HEAD
#include "Stack.h"
void prnMenu(){
	cout<<"*******************************************"<<endl;
	cout<<"* 1. 삽입    2. 삭제    3. 출력   4. 종료 *"<<endl;
<<<<<<< HEAD
	cout<<"****************************************"<<endl;

=======
	cout<<"***************************************"<<endl;
	cout<<endl;
<<<<<<< HEAD
	cout<<"원하시는 메뉴를 골라주세요: ";
>>>>>>> test2
=======
	cout<<"원하시는 메뉴를";
>>>>>>> test3
}

int main(){
	    int mode, selectNumber, tmpItem;
		LinkedList<int> *p;
		bool flag = false;

		cout<<"자료구조 선택(1: Stack, Other: Linked List): ";
		cin>>mode;
						    
		if(mode == 1)
			p = new Stack<int>();    // 정수를 저장하는 스택
			
		else
			p = new LinkedList<int>();
=======
>>>>>>> test2

int main() {
	printf("Hi");
	return 0;
}
