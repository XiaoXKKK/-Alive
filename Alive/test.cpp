#include"UI.h"
#include<iostream>
#include<windows.h>
using namespace std;

void init_window() {
	// srand(time(NULL));
	Winset(150,500);
	//SetConsoleTitle("Alive");
	system("mode con cols=50 lines=37");
	system("chcp 936");
	system("cls");
	//�����ǹص����ٱ༭ģʽ
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
	DWORD mode;
	GetConsoleMode(hIn, &mode);
	mode &= ~ENABLE_QUICK_EDIT_MODE;
	mode &= ~ENABLE_INSERT_MODE;
	SetConsoleMode(hIn, mode);
	CloseHandle(&hIn);
	return;
}

Weapon MG3("MG3", 25, 200, 2, 120, 200);

int main()
{
    init_window();
    UI ui;
	if (0) {
		ui.print_Frame();
		ui.print_Button(10, 15, "EXIT");
		getchar();
	}
	if (1) {
		MG3.pic.pic[0] = "[/=#######=";
		MG3.pic.pic[1] = "   \"\"\" / \\ ";
		MG3.upg[0] = Upgrade("ǹ��ṹ��", "�������� ��������", 250, 2500);
		MG3.upg[1] = Upgrade("M993���׵�", "��������˺�", 250, 2000);
		MG3.upg[2] = Upgrade("���ݵ�����", "���ӵ����������ܵ�ҩ", 150, 1500);
		MG3.upg[3] = Upgrade("���ż�", "�����ȶ��� ��������", 120, 1200);
		MG3.upg[4] = Upgrade("�����׼��", "������׼�� �����˺�", 100, 1000);
		ui.print_Upgrade(MG3);
		getchar();
	}

}