#include<iostream>
using namespace std;

int main()
{
	//A school maintains academic record of its students//
	const int size = 100;
	int Roll_Call[size];
	int size_1 = 5;
	float Mid_Marks[size];
	float Final_Marks[size];
	int Classes[size];
	char Grades[size];
	int choice = 0;

	for (int i = 0; i < size_1; i++)
	{
		Roll_Call[i] = i;
		Mid_Marks[i] = (float)(rand() % 50);
		Final_Marks[i] = (float)(rand() % 100);
		Classes[i] = rand() % 10;

		if (Final_Marks[i] >= 86 && Final_Marks[i] <= 100)
		{
			Grades[i] = 'A';
		}

		if (Final_Marks[i] >= 73 && Final_Marks[i] <= 85)
		{
			Grades[i] = 'B';
		}

		if (Final_Marks[i] >= 60 && Final_Marks[i] <= 72)
		{
			Grades[i] = 'C';
		}

		if (Final_Marks[i] >= 50 && Final_Marks[i] <= 59)
		{
			Grades[i] = 'D';
		}

		if (Final_Marks[i] < 50)
		{
			Grades[i] = 'F';
		}

		bool flag = true;
		while (true)
		{
			cout << "		            	/////*****Here is the MENU*****/////		" << endl;
			cout << endl;

			cout << "1.  Sort and display all the records roll number-wise in ascending order." << endl;
			cout << "2.  Sort and display all the records roll number-wise in descending order" << endl;
			cout << "3.  Sort and display all records in ascending order based on marks in Midterm." << endl;
			cout << "4.  Sort and display all records in descending order based on marks in Midterm." << endl;
			cout << "5.  Sort and display all records in ascending order based on marks in Final." << endl;
			cout << "6.  Sort and display all records in descending order based on marks in Final." << endl;
			cout << "7.  Sort and display all records in ascending order based on Grade." << endl;
			cout << "8.  Sort and display all records in descending order based on Grade." << endl;
			cout << "9.  Add a new entry of a student." << endl;
			cout << "10. Delete a student record based on his roll number." << endl;
			cout << "11. Display record of all the students greater than X marks in final exam (in descending order with respect to marks obtained in final exam).The value of X will be entered by the user." << endl;
			cout << "12. Display record of all the students greater than X marks in final exam (in ascending order with respect to marks obtained in final exam).The value of X will be entered by the user." << endl;
			cout << "13. Display record of all the students less than or equal to X marks in final exam (in descending order with respect to marks obtained in final exam).The value of X will be entered by the user." << endl;
			cout << "14. Display record of all the students less than or equal to X marks in final exam (in ascending order with respect to marks obtained in final exam).The value of X will be entered by the user." << endl;
			cout << "15. Display record of all the students greater than X grade (in descending order with respect to grade).The value of X (character) will be entered by the user." << endl;
			cout << "16. Display record of all the students greater than X grade (in ascending order with respect to grade).The value of X (character) will be entered by the user." << endl;
			cout << "17. Display record of all the students less than or equal to X grade (in descending order with respect to grade).The value of X (character) will be entered by the user." << endl;
			cout << "18. Display record of all the students less than or equal to X grade (in ascending order with respect to grade).The value of X (character) will be entered by the user." << endl;
			cout << "19. Enter E or e to EXIT";
			cout << "20. ERROR ";

			cout << endl << endl;
			cout << "Enter a choice =";
			cin >> choice;

			if (choice == 1)
			{
				cout << "Display ROLL NUMBER in Ascending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Roll_Call[i] > Roll_Call[j])
							{

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}
					cout << " Roll Number : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;
				}
			}

			if (choice == 2)
			{
				cout << endl << "Display ROLL NUMBER in Descending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1 - 1; i++)
						{
							if (Roll_Call[i] < Roll_Call[j])
							{
								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;
				}
			}

			if (choice == 3)
			{
				cout << endl << "Display MID-TERM MARKS in Ascending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Mid_Marks[i] > Mid_Marks[j])
							{
								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;

				}
			}

			if (choice == 4)
			{
				cout << endl << "Display MID-TERM MARKS in Descending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1 - 1; i++)
						{
							if (Mid_Marks[i] < Mid_Marks[j])
							{
								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;
				}
			}

			if (choice == 5)
			{
				cout << endl << "Display FINAL-TERM MARKS in Ascending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Final_Marks[i] > Final_Marks[j])
							{
								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;


								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;

				}
			}

			if (choice == 6)
			{
				cout << endl << "Display FINAL-TERM MARKS in Descending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;



				for (int i = 1; i < size_1; i++)
				{
					for (int j = 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1 - 1; i++)
						{
							if (Final_Marks[i] < Final_Marks[j])
							{
								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;

				}
			}

			if (choice == 7)
			{
				cout << endl << "Display GRADES in Ascending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Grades[i] > Grades[j])
							{
								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;
				}
			}

			if (choice == 8)
			{
				cout << endl << "Display GRADES in Descending Order: " << endl;

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Grades[i] < Grades[j])
							{
								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}
					cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
					cout << endl;
				}
			}

			if (choice == 9)
			{
				cout << endl << "ADD NEW ENTRY Of A STUDENT " << endl;

				int value = 0;
				cout << endl;

				if (size_1 == size)
				{
					cout << "Sorry boss , It Has Already Filled ....!";
				}
				else
				{
					cout << "Enter New STUDENT's Roll Number : ";
					cin >> value;

					Roll_Call[size_1] = value;
					size_1++;
				}

				cout << "					Your NEW STUDENT Is Successfully Entered." << endl << endl;

			}

			if (choice == 10)
			{
				cout << "  Delete A STUDENT Record " << endl;

				int value = 0;
				cout << "Enter The Roll Number You want to DELETE :";
				cin >> value;

				int i = 0;
				for (i = 0; i < size_1; i++)
				{
					if (Roll_Call[i] == value)
					{
						//cout << "Value is found at Index " << i << endl;

						for (int j = i; j < size_1 - 1; j++)
						{
							Roll_Call[j] = Roll_Call[j + 1];
						}
						Roll_Call[size_1 - 1] = 0;
						size_1--;

					}
					if (i == size_1)
						cout << "VALUE NOT FOUND";

				}

				cout << endl;


				cout << "					Your Entered STUDENT is Successfully Deleted." << endl << endl;

			}

			if (choice == 11)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				int X = 0;
				cout << "Enter X : ";
				cin >> X;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Final_Marks[i] < Final_Marks[j])
							{
								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}

					if (Final_Marks[i] > X)
					{
						cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
						cout << endl;
					}
				}

			}

			if (choice == 12)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				int X = 0;
				cout << "Enter X : ";
				cin >> X;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Final_Marks[i] > Final_Marks[j])
							{
								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}

					if (Final_Marks[i] > X)
					{
						cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
						cout << endl;
					}
				}
			}

			if (choice == 13)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				int X = 0;
				cout << "Enter X : ";
				cin >> X;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Final_Marks[i] < Final_Marks[j])
							{
								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}

					if (Final_Marks[i] <= X)
					{
						cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
						cout << endl;
					}
				}
			}

			if (choice == 14)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				int X = 0;
				cout << "Enter X : ";
				cin >> X;
				cout << endl;

				for (int i = 1; i < size_1; i++)
				{
					for (int j = i + 1; j < size_1; j++)
					{
						for (int i = 1; i < size_1; i++)
						{
							if (Final_Marks[i] > Final_Marks[j])
							{
								temp_character = Grades[i];
								Grades[i] = Grades[j];
								Grades[j] = temp_character;

								temp_integer = Roll_Call[i];
								Roll_Call[i] = Roll_Call[j];
								Roll_Call[j] = temp_integer;

								temp_float = Final_Marks[i];
								Final_Marks[i] = Final_Marks[j];
								Final_Marks[j] = temp_float;

								temp_float = Mid_Marks[i];
								Mid_Marks[i] = Mid_Marks[j];
								Mid_Marks[j] = temp_float;
							}
						}
					}

					if (Final_Marks[i] <= X)
					{
						cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
						cout << endl;
					}
				}
			}

			if (choice == 15)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				char X = '\0';
				cout << "Enter Grade X :";
				cin >> X;
				cout << endl;

				if (X >= 'A' && X <= 'Z')
				{

					for (int i = 1; i < size_1; i++)
					{
						for (int j = i + 1; j < size_1; j++)
						{
							for (int i = 1; i < size_1; i++)
							{
								if (Grades[i] < Grades[j])
								{
									temp_character = Grades[i];
									Grades[i] = Grades[j];
									Grades[j] = temp_character;

									temp_integer = Roll_Call[i];
									Roll_Call[i] = Roll_Call[j];
									Roll_Call[j] = temp_integer;

									temp_float = Final_Marks[i];
									Final_Marks[i] = Final_Marks[j];
									Final_Marks[j] = temp_float;

									temp_float = Mid_Marks[i];
									Mid_Marks[i] = Mid_Marks[j];
									Mid_Marks[j] = temp_float;
								}
							}
						}

						if (Grades[i] < X)
						{
							cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
							cout << endl;

						}
					}
				}

				else
				{
					cout << "Sorry, Please ENTER grade in CAPITAL LETTER : " << endl << endl;
				}

			}

			if (choice == 16)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				char X = '\0';
				cout << "Enter Grade X :";
				cin >> X;
				cout << endl;

				if (X >= 'A' && X <= 'Z')
				{
					for (int i = 1; i < size_1; i++)
					{
						for (int j = i + 1; j < size_1; j++)
						{
							for (int i = 1; i < size_1; i++)
							{
								if (Grades[i] > Grades[j])
								{
									temp_character = Grades[i];
									Grades[i] = Grades[j];
									Grades[j] = temp_character;

									temp_integer = Roll_Call[i];
									Roll_Call[i] = Roll_Call[j];
									Roll_Call[j] = temp_integer;

									temp_float = Final_Marks[i];
									Final_Marks[i] = Final_Marks[j];
									Final_Marks[j] = temp_float;

									temp_float = Mid_Marks[i];
									Mid_Marks[i] = Mid_Marks[j];
									Mid_Marks[j] = temp_float;
								}
							}
						}

						if (Grades[i] < X)
						{
							cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
							cout << endl;

						}
					}
				}

				else
				{
					cout << "Sorry, Please ENTER grade in CAPITAL LETTER : " << endl << endl;
				}

			}

			if (choice == 17)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				char X = '\0';
				cout << "Enter Grade X :";
				cin >> X;
				cout << endl;

				if (X >= 'A' && X <= 'Z')
				{
					for (int i = 1; i < size_1; i++)
					{
						for (int j = i + 1; j < size_1; j++)
						{
							for (int i = 1; i < size_1; i++)
							{
								if (Grades[i] < Grades[j])
								{
									temp_character = Grades[i];
									Grades[i] = Grades[j];
									Grades[j] = temp_character;

									temp_integer = Roll_Call[i];
									Roll_Call[i] = Roll_Call[j];
									Roll_Call[j] = temp_integer;

									temp_float = Final_Marks[i];
									Final_Marks[i] = Final_Marks[j];
									Final_Marks[j] = temp_float;

									temp_float = Mid_Marks[i];
									Mid_Marks[i] = Mid_Marks[j];
									Mid_Marks[j] = temp_float;
								}
							}
						}

						if (Grades[i] > X)
						{
							cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
							cout << endl;

						}
					}
				}

				else
				{
					cout << "Sorry Boss, Please Enter GRADE in CAPITAL LETTER : " << endl << endl;
				}


			}

			if (choice == 18)
			{

				int temp_integer = 0;
				float temp_float = 0;
				char temp_character = 0;
				char X = '\0';
				cout << "Enter Grade X :";
				cin >> X;
				cout << endl;

				if (X >= 'A' && X <= 'Z')
				{

					for (int i = 1; i < size_1; i++)
					{
						for (int j = i + 1; j < size_1; j++)
						{
							for (int i = 1; i < size_1; i++)
							{
								if (Grades[i] > Grades[j])
								{
									temp_character = Grades[i];
									Grades[i] = Grades[j];
									Grades[j] = temp_character;

									temp_integer = Roll_Call[i];
									Roll_Call[i] = Roll_Call[j];
									Roll_Call[j] = temp_integer;

									temp_float = Final_Marks[i];
									Final_Marks[i] = Final_Marks[j];
									Final_Marks[j] = temp_float;

									temp_float = Mid_Marks[i];
									Mid_Marks[i] = Mid_Marks[j];
									Mid_Marks[j] = temp_float;
								}
							}
						}

						if (Grades[i] > X)
						{
							cout << " Roll No : " << Roll_Call[i] << "    " << " Mid Marks : " << Mid_Marks[i] << "    " << " Final Marks : " << Final_Marks[i] << "    " << " Class : " << Classes[i] << "     " << " Grade : " << Grades[i] << "    " << endl;
							cout << endl;

						}
					}
				}

				else
				{
					cout << "Sorry Boss, Please ENTER grade in CAPITAL LETTER : " << endl << endl;
				}

			}

			if (choice == 19)
			{
				char value = 0;
				cout << "Enter E or e to EXIT " << endl;
				cin >> value;

				if (value == 'E' || value == 'e')
				{
					cout << "EXIT " << endl;
				}

			}

			if (choice >= 20)
			{
				cout << " ERROR " << endl;
				flag = false;
				break;
			}
		}
	}
		return 0;
}
