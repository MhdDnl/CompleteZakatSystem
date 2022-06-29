#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;


void Mainmenu() {
	cout << "============================================" << endl;
	cout << "      Welcome to Daniel Zakat System        " << endl;
	cout << "============================================" << endl;
	cout << "1.Emas                6.Business            " << endl;
	cout << "2.Perak               0.Exit                " << endl;
	cout << "3.Fidyah                                    " << endl;
	cout << "4.Fidyah(Gandaan)                           " << endl;
	cout << "5.Income                                    " << endl;
	cout << " Note:This system only usable in 2021/2022  " << endl;
	cout << "============================================" << endl;
	cout << "Please enter you choice:  ";
}
void GoldMenu() {
	cout << "============================================" << endl;
	cout << "   Welcome to Daniel Zakat System(Gold)     " << endl;
	cout << "============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu " << endl;
	cout << "5.Selangor  11.Putrajaya                    " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
	cout << "============================================" << endl;
}
void SilverMenu() {
	cout << "============================================" << endl;
	cout << "   Welcome to Daniel Zakat System(Silver)   " << endl;
	cout << "============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu " << endl;
	cout << "5.Selangor  11.Putrajaya                    " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
	cout << "============================================" << endl;
}
void FidyahMenu() {
	cout << "============================================" << endl;
	cout << "   Welcome to Daniel Zakat System(Fidyah)   " << endl;
	cout << "============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan" << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah    " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis   " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu " << endl;
	cout << "5.Selangor  11.Putrajaya                    " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan              " << endl;
	cout << "============================================" << endl;
}
void FidyahsMenu() {
	cout << "===============================================" << endl;
	cout << " Welcome to Daniel Zakat System(Fidyah Gandaan)" << endl;
	cout << "===============================================" << endl;
	cout << "1.Perak     7.Johor             13.WP Labuan  " << endl;
	cout << "2.Kedah     8.Terengganu        14.Sabah      " << endl;
	cout << "3.Pahang    9.Sarawak           15.Perlis     " << endl;
	cout << "4.P.Pinang  10.Melaka           0.Main Menu   " << endl;
	cout << "5.Selangor  11.Putrajaya                      " << endl;
	cout << "6.Kelantan  12.Negeri Sembilan                " << endl;
	cout << "===============================================" << endl;
}
void IncomeMenu() {
	cout << "============================================" << endl;
	cout << "       Welcome to Income Zakat System       " << endl;
	cout << "============================================" << endl;
	cout << "            Type Of Calculations            " << endl;
	cout << "            1. Without Deduction            " << endl;
	cout << "            2. With Deduction               " << endl;
	cout << "============================================" << endl;
	cout << "Please Enter Your Choice:";
}


int main()
{
	int cr[15] = { 500,170,500,165,800,0,850,850,90,180,850,200,800,152,85 };
	int crs[1] = { 595 };
	int g, c, d, y;
	float total = 0, total1 = 0, total2 = 0, total3 = 0, total4 = 0, total5 = 0, totals = 0;
	int ask, a, b;
	float rate = 0.25;
	float r = 239.80;
	float pen_kasar = 0, gaji = 0, total_a = 0, diri = 0, isteri = 0, kwsp = 0, ibubapa = 0, caruman = 0, spending = 0, t_spending = 0, y_zakat = 0, m_zakat = 0, income_month = 0;
	int anak, ch;
	int k;
	string b_name, r_number, add, tel_no;
	float k_1year = 0, h_1year = 0, u_rugi = 0;
	float c_aset = 0, c_liabi = 0, mo_kerja = 0;

retry:

	Mainmenu();
	cin >> c;
	system("cls");
	if (c == 1) {
		GoldMenu();
		cout << "Please enter your choice:  "; cin >> a;
		if (a == 0) { system("cls"); goto retry; }
		cout << "Please enter your weight(g): "; cin >> g;
		system("cls");
		switch (a) {
		case 1:
			total = (g - cr[0]) * r * rate;
			break;

		case 2:
			total = (g - cr[1]) * r * rate;
			break;

		case 3:
			total = (g - cr[2]) * r * rate;
			break;

		case 4:
			total = (g - cr[3]) * r * rate;
			break;

		case 5:
			total = (g - cr[4]) * r * rate;
			break;

		case 6:
			total = (g)*r * rate;
			break;

		case 7:
			total = (g - cr[6]) * r * rate;
			break;

		case 8:
			total = (g - cr[7]) * r * rate;
			break;

		case 9:
			total = (g - cr[8]) * r * rate;
			break;

		case 10:
			total = (g - cr[9]) * r * rate;

			break;

		case 11:
			total = (g - cr[10]) * r * rate;
			break;

		case 12:
			total = (g - cr[11]) * r * rate;

			break;

		case 13:
			total = (g - cr[12]) * r * rate;
			break;

		case 14:
			total = (g - cr[13]) * r * rate;

			break;

		case 15:
			total = (g - cr[14]) * r * rate;
			break;
		}






	}
	else if (c == 2) {
		SilverMenu();
		cout << "Please enter you choice:  "; cin >> b;
		if (b == 0) { system("cls"); goto retry; }
		cout << "Please enter your weight(g): "; cin >> g;
		system("cls");
		if (b <= 15) {
			total1 = (g - crs[0]) * r * rate;

		}

	}
	else if (c == 3) {
		FidyahMenu();
		cout << "Please enter your choice:  "; cin >> a;
		if (a == 0) { system("cls"); goto retry; }
		cout << "Please enter your day leaves: "; cin >> d;
		system("cls");

		switch (a) {
		case 1:
			total2 = d * 1.90;
			break;

		case 2:
			total2 = d * 1.80;
			break;

		case 3:
			total2 = d * 1.75;
			break;

		case 4:
			total2 = d * 1.75;
			break;

		case 5:
			total2 = d * 1.80;
			break;

		case 6:
			total2 = d * 1.75;
			break;

		case 7:
			total2 = d * 1.90;
			break;

		case 8:
			total2 = d * 1.75;
			break;

		case 9:
			total2 = d * 1.75;
			break;

		case 10:
			total2 = d * 1.80;
			break;

		case 11:
			total2 = d * 4.00;
			break;

		case 12:
			total2 = d * 1.75;
			break;

		case 13:
			total2 = d * 1.80;
			break;

		case 14:
			total2 = d * 1.90;

			break;

		case 15:
			total2 = d * 5.00;
			break;
		}










	}
	else if (c == 4) {
		FidyahsMenu();
		cout << "Please enter your choice:  "; cin >> a;
		if (a == 0) { system("cls"); goto retry; }
		cout << "Please enter your day leave: "; cin >> d;
		cout << "Please enter your year leave: "; cin >> y;
		system("cls");

		if (a == 1) {
			total = d * 1.90 * y;

		}
		else if (a == 2) {
			total3 = d * 1.80 * y;
		}
		else if (a == 3) {
			total3 = d * 1.75 * y;
		}
		else if (a == 4) {
			total3 = d * 1.75 * y;
		}
		else if (a == 5) {
			total3 = d * 1.80 * y;
		}
		else if (a == 6) {
			total3 = d * 1.75 * y;
		}
		else if (a == 7) {
			total3 = d * 1.90 * y;
		}
		else if (a == 8) {
			total3 = d * 1.75 * y;
		}
		else if (a == 9) {
			total3 = d * 1.75 * y;
		}
		else if (a == 10) {
			total3 = d * 1.80 * y;
		}
		else if (a == 11) {
			total3 = d * 4.00 * y;
		}
		else if (a == 12) {
			total3 = d * 1.75 * y;
		}
		else if (a == 13) {
			total3 = d * 1.80 * y;
		}
		else if (a == 14) {
			total3 = d * 1.90 * y;
		}
		else if (a == 15) {
			total3 = d * 5.00 * y;
		}
	}
	else if (c == 5) {
		IncomeMenu();
		cin >> ch;
		if (ch == 1)
		{

			cout << "ENTER THE GROSS INCOME: RM";
			cin >> pen_kasar;
			system("cls");
			gaji = pen_kasar * 12;
			total_a = gaji * 0.025;
			total4 = total_a
				;
		}

		else if (ch == 2)
		{

			cout << "ENTER YOUR INCOME FOR A MONTH    : RM";
			cin >> income_month;
			cout << "ENTER YOUR SELF-EXPENDITURE      : RM";
			cin >> diri;
			cout << "ENTER YOUR WIFE'S EXPENSES       : RM";
			cin >> isteri;
			cout << "ENTER TOTAL NUMBER OF CHILD      :   ";
			cin >> anak;
			cout << "ENTER AMOUNT OF KWSP SPENDING    : RM";
			cin >> kwsp;
			cout << "ENTER AMOUNT OF PARENTS SPENDING : RM";
			cin >> ibubapa;
			cout << "ENTER CARUMAN (TABUNG HAJI)      : RM";
			cin >> caruman;

			spending = diri + isteri + (anak * 1000) + kwsp + ibubapa + caruman;
			t_spending = income_month - spending;
			y_zakat = t_spending * 0.025;
			m_zakat = y_zakat / 12;
			total5 = m_zakat + y_zakat;


		}

	}
	else if (c == 6) {
		cout << "============================================" << endl;
		cout << "      Welcome to Business Zakat System         " << endl;
		cout << "============================================" << endl;
		cout << " Year : 2022" << endl;
		cout << " Nisab Amount : RM 20361.00" << endl;
		cout << "============================================" << endl;
		cout << "            Business Detail             " << endl;
		cout << " Business Name :";
		cin >> b_name;
		cout << " Registration Number :";
		cin >> r_number;
		cout << " Address :";
		cin >> add;
		cout << " Phone Number :";
		cin >> tel_no;
		system("cls");
		cout << "============================================" << endl;
		cout << "     Welcome to Business Zakat System       " << endl;
		cout << "============================================" << endl;
		cout << "1.Kaedah Modal Kerja                        " << endl;
		cout << "2.Kaedah Untung Rugi                        " << endl;
		cout << "                                            " << endl;
		cout << "                                            " << endl;
		cout << "                                            " << endl;
		cout << "============================================" << endl;

		cout << "     Please Enter Your Choice:";
		cin >> k;

		if (k == 1)
		{
			cout << "==============================================" << endl;
			cout << "Welcome to Business Zakat System (Modal Kerja)" << endl;
			cout << "==============================================" << endl;
			cout << "Please Enter Your Current Asset    : RM ";
			cin >> c_aset;
			cout << "Please Enter Your Current Liabities: RM ";
			cin >> c_liabi;
			cout << "Your Muslim Shareholding           : 100% " << endl;
			system("cls");

			mo_kerja = (c_aset - c_liabi) * 0.025;

		}

		else if (k == 2)
		{
			cout << "==============================================" << endl;
			cout << "Welcome to Business Zakat System (Untung Rugi)" << endl;
			cout << "==============================================" << endl;
			cout << "Please Enter Your Revenue For One Year : RM ";
			cin >> h_1year;
			cout << "Please Enter Your Cost For One Year    : RM ";
			cin >> k_1year;
			system("cls");
			u_rugi = (h_1year - k_1year) * 0.025;


		}
	}
	else {
		return 0;
	}
	totals = total + total1 + total2 + total2 + total3 + total4 + total5 + mo_kerja + u_rugi;
	if (totals > 0) {
		cout << "=========================================================" << endl;
		cout << "              Thanks For using our system                " << endl;
		cout << "=========================================================" << endl;
		cout << "ZAKAT OF GOLD TO BE PAID :RM" << total << endl;
		cout << "ZAKAT OF SILVER:RM" << total1 << endl;
		cout << "ZAKAT OF FIDYAH:RM" << total2 << endl;
		cout << "ZAKAT OF FIDYAH GANDAAN :RM" << total3 << endl;
		cout << "ZAKAT OF INCOME TO BE PAID (YEAR) :RM" << total4 << endl;
		cout << "ZAKAT OF INCOME TO BE PAID TOTAL: RM" << total5 << endl;
		cout << "-ZAKAT OF INCOME TO BE PAID (YEAR) :RM" << y_zakat << endl;
		cout << "-ZAKAT OF INCOME TO BE PAID (MONTH):RM" << m_zakat << endl;
		cout << "Zakat Perniagaan (Modal Kerja): RM " << mo_kerja << endl;
		cout << "Zakat Perniagaan (Untung Rugi): RM " << u_rugi << endl;
		cout << "                                                         " << endl;
		cout << "The price that you need to pay is:RM" << totals << endl;
		cout << "=========================================================" << endl;

	}
	else if (totals < 0) {
		cout << "=========================================================" << endl;
		cout << "              Thanks For using our system                " << endl;
		cout << "=========================================================" << endl;
		cout << "“Ambillah (sebahagian) dari harta mereka menjadi sedekah," << endl;
		cout << "supaya dengannya engkau  membersihkan  mereka (dari dosa)" << endl;
		cout << "dan   mensucikan  mereka (dari  akhlak yang  buruk),  dan" << endl;
		cout << "doakanlah untuk  mereka,  kerana sesungguhnya  doamu  itu" << endl;
		cout << "menjadi ketenteraman bagi  mereka, dan  (ingatlah) Allah”" << endl;
		cout << "Maha Mendengar Lagi Maha Mengetahui.                     " << endl;
		cout << "                                                         " << endl;
		cout << "Note:you don't need to pay for this                      " << endl;
		cout << "=========================================================" << endl;
	}
	cout << "Do you want to continue(1(yes)/0(no)) ? :  "; cin >> ask;
	if (ask == 1) { system("cls"); goto retry; }
	else { return 0; }
}