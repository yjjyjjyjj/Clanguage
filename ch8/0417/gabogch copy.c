#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
void LEVEL(void);
void LEVEL1(void);
void LEVEL2(void);
void LEVEL3(void);
void LEVEL4(void);
void LEVEL5(void);
void LEVEL6(void);
void LEVEL7(void);
void LEVEL8(void);
void DIEME(void);
void DIEME2(void);

int main(void)
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	srand(time(NULL));

	printf("~!~~~~~~^^^^~~::^^^^^^^^^^^^^^^^^^^^^.^^^^^^^^^^^^^^^^^^^:.^^^^^^^^^^.^^:^^^^^^^^^^^:!?7:...:7~~~~~\n");
	printf("~!~!!!~~::::~!:^!^!!~~^^~^:7~^~^!~~^~^!^:^!!^^^!!^~~!~^~~~.!~~~!!~~!!:!~^~!~^~^^~!^!.::...~777!!!!!\n");
	printf("~!!!!!!!~~~~!!:^~^^^^~~~:~~^^^~~~^^~~:^^~~~~^^^~~~~~!~~~!^.~~^~~^~~^^:^^^~~~^^~~^~~^::..:!77J!!!!!!\n");
	printf("~!!!!!!~~~^^^~!~~~~!~^~^~~~~~~~~~~~~~~~~:^::~~~~~~~~~~~~~~~~~~!!!~~~!!!!~~~~~~~!!~..:7~~?7!!7!!!!!!\n");
	printf("~!!!!!!!!~:^^:!!~!!~~!!!!!!~~~~!!~~!!!~!~~~~!!!!!!!!!!!!!!!!!!!!!!!!!!!!7777!!!?7!~^~?J?!!!!!!!!!!!\n");
	printf("~!!!!!7~^:^^^!7?7!!!!~~~~~~~~~~!!!!!!~~!~!~~~~~~~~!!~!!!!!!!!~!!!!!!!!!!!!!!!!!7?!?777?7!!!!!!77!!!\n");
	printf("~!!!!77^~:~~^~!7?!~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!!!~~~!~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
	printf("~!!!~77~^~^~777??1~~~~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7JP7!!!!!!!!!!!!!!!!!!!!!!!!!!!~~~!!!!!!\n");
	printf("~!!!!!?J7??J7777?!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7?!!P7!!!!!!!!!!!!!!!!!!!!!!!!!!^:^:~!!!!!\n");
	printf("~!!!!!7??????77?!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!??~^~?P7!!!!!!!!!!!!!!!!!!!!!!!!!!~^^^~!!!!!\n");
	printf("~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~~!!!!!!!!!??7~~?J5G7~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?77\n");
	printf("~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7?????????7!~~!JYY55???7!!!!!!!!!!!!!!!!!!!!!!!!!!!!!??17\n");
	printf("~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7??7!!!^~^^^^^~~~^^^^^~~7???JJ7!!!!!!!!!!!!!!!!!~~~!!!!!7Y?!7\n");
	printf("7777777777!!!!!!!!!!!!!!!!!!!!!!!!!!??1~~~~~~~~~~~~~~~~~~~~~~!~^~!JPP?!!!!!!!!!!!!!!!^:^:~!!!!!JJJJ\n");
	printf("7??????????77777777??777!!!!!!!!!~!Y!~~~!!~~~~~~~~~~~!~!!!!!!!!!7?JJY5!!!!!!!!!!!!!!!^^^^!!!!!!!!77\n");
	printf("7????????YJYJYYYJJJJJJJ???????7?JY5!~~~~YG!~~!!!!!!!!!!!!!777777?JYYPP7!!!!!!!!!!!!!!!!!!!!!!!!!7??\n");
	printf("7????????5YY?YJJ?JJJJJYJ??????JY!5J~!!!!!!!!!!!!!!!!!!7777777??JYYYY5P5!!!!!!!!!!!!!!!!7???????????\n");
	printf(".7?????7~~~7JJ??77?7?7?755?????YY^57:~!!!777777777777777??????JYYYYYYYPP!!!!!!!!!!!!!!!!~~~~???????\n");
	printf(".77777?7:^^~?JYPPPPP55Y??5J????J5JP7    .:::!???????????J?JJYYYYYYYJJPGJ?????77777777777^^~^7?????J\n");
	printf(":::::^^^^^~!!!77????755JY???????J?Y!:.      ::::::.^!!!!!!!!!!!!!~^7Y5??????????????????77?????????\n");
	printf(".::::::::::::::!7???Y5Y?~^^^^^^^^^~J7~~::::::::::::::::::::::::::^!5PJ?JJ??????????????????????????\n");
	printf(":::::::.:::::.:~~!JJ77J~.:::::::::::~77????7~~~~~~~^^:::^^^^~7777JY5Y??????JJJJJJ?????7!!!!!!!~~~~~\n");
	printf(":::::::.::::::::::::..:::::..:::..:.::::~777JY55YYYJ????????JY5Y55?~^^~^^~7!77!77!~~~~~~:::::::::::\n");
	printf(":::::::::::::.....:::::::::::::::::.........:^^7?777?7?5?7J5PGP~~^:^^^^^^7JJ?7??77??????~^^^^~~~~~~\n");
	printf("^^^^^^^^^:::::...::::::::::::::::^^^^^^^:::::..........^J7^7YGP::::::::::^~~????7??77?!J57^!?JJ????\n");
	printf("^^^^^^^^^^^!7?~::^^^^^::::::::::^!..::!7^::::::::::::::::~!7J5~::::::::::::::~YPPP5PYYY?YJ:::^!?JJJ\n");
	printf(".~^^^^^^^~!7JJ~^^^^^^^^^^^^^^^^::^7^~...:^^^::::::::::::::::^?~:::::::^^^^^^^^^^~77^^::YYY!......:?\n");
	printf(".7!^~~~!7?!^!^^^^^^^~~^^^^^^^^^^^^?77!:...:~!~^^^::::::^^^^^^^^^^^^^^^^^^^^^::::...:~!?YYY:..::::.:\n");
	printf(".7?7!!7??J!^^.^^^^^^7?7?7~^^^^^^^^^^^!7~:~~^:~7?~^^^^^^^^^^^^^^^^^:::.............:7JJ?JJ?~.:::::::\n");
	printf(".77????JYJ7!~^^^~~^!J!77Y?^^^^^^^^^^^^~7?J!..~!7~^^^^^^^^^^:::::::::::....:::...:::::..::...:::::::\n");
	printf(".???JJYJ7!?Y!~!???1YY77JY7~7!^^^^^^^^^^^??1!?7!?^^^::::::::::::::::::::::::::::::::::::::^!77!~^^::\n");
	printf(".JYJ!^7J7?YY!--------------------:::::::^~77:::::::::::::::::::--------------------^^^^^^^!77~^~JY?\n");
	printf(".??^::7??JYJ?|                  |:::^77J?~^:::::^^^:^^^^^^^^^^^|                  |^^^^^^~~^^~~75Y?\n");
	printf(".^^^!7?JYJJ77|    시    작(S)   |^^!??J?^:^^^^^^^^^^^:::^~~^^~^|    종    료(X)   |!?7^~7J7!7J?!?YJ\n");
	printf("~!!7?YJ?!!~~~|                  |7??JY~:::^7!:^:^^^:.:.:^^^^^~~|                  |J!~?JJ!?JY??JYYY\n");
	printf(".!7777??7!^^~--------------------J?7JY?::~7?7^::^7?!^^::^!!^^~!--------------------YJ~??YJ77JYYY555\n");
	printf("77777?????7~!!^7J??1^~??YJ~7?J7~?7?JY!^^??Y~^^!??~~^^^^!J?~7J?!^~^^~^~??JYJ~~~~???YJ!??J?^~~?JJJ???\n");
	printf("~!!!~!??77?JY?JJYJ?7!??JYJ?JY?^7?7?JY!^!??Y!!7JJ?7J7~7?J?7??Y7:~??1~:!???JYJ!!????YYJ?JY?!!~!?77777\n");
	printf(" ~~!!~~77777???YJYJJJJ?JYY??YJ~^7???JY!^7?7JY?YJ??JJ?JJJJ^~??YY?JYJ7?7!???JYYYYJ7??JYYYY5YJ?7777777\n");

	printf("입력: ");
	scanf("%c", &o); // 메뉴선택

	while (1)
	{
		if (o == 83) // 시작선택시 실행
		{
			system("clear");

			printf("~!~~~~~~^^^^~~::^^^^^^^^^^^^^^^^^^^^^.^^^^^^^^^^^^^^^^^^^:.^^^^^^^^^^.^^:^^^^^^^^^^^:!?7:...:7~~~~~\n");
			printf("~!~!!---------------!!~~^^~^:---------------^^^!!^~~!---------------!:!~^~!~^~^---------------!!!!!\n");
			printf("~!!!!|  1.먹  이   |^~~~:~~^^|  2.모  험    |^^^~~~~~!|  3.상  점   |^:^^^~~~^^~|  X.종  료    |!!!!!\n");
			printf("~!!!!---------------^~^~~~~~~---------------~~~~~~~~~---------------!!!~~~~~~~!---------------!!!!!\n");
			printf("~!!!!!!!!~:^^:!!~!!~~!!!!!!~~~~!!~~!!!~!~~~~!!!!!!!!!!!!!!!!!!!!!!!!!!!!7777!!!?7!~^~?J?!!!!!!!!!!!\n");
			printf("~!!!!!7~^:^^^!7?7!!!!~~~~~~~~~~!!!!!!~~!~!~~~~~~~~!!~!!!!!!!!~!!!!!!!!!!!!!!!!!7?!?777?7!!!!!!77!!!\n");
			printf("~!!!!77^~:~~^~!7?!~~~~~~~~~~~~~~~~~~~!!!!!!!!!!!!!!!!!!~~~!~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
			printf("~!!!~77~^~^~777??1~~~~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7JP7!!!!!!!!!!!!!!!!!!!!!!!!!!!~~~!!!!!!\n");
			printf("~!!!!!?J7??J7777?!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7?!!P7!!!!!!!!!!!!!!!!!!!!!!!!!!^:^:~!!!!!\n");
			printf("~!!!!!7??????77?!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!??~^~?P7!!!!!!!!!!!!!!!!!!!!!!!!!!~^^^~!!!!!\n");
			printf("~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~~!!!!!!!!!??7~~?J5G7~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!?77\n");
			printf("~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7?????????7!~~!JYY55???7!!!!!!!!!!!!!!!!!!!!!!!!!!!!!??17\n");
			printf("~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!7??7!!!^~^^^^^~~~^^^^^~~7???JJ7!!!!!!!!!!!!!!!!!~~~!!!!!7Y?!7\n");
			printf("7777777777!!!!!!!!!!!!!!!!!!!!!!!!!!??1~~~~~~~~~~~~~~~~~~~~~~!~^~!JPP?!!!!!!!!!!!!!!!^:^:~!!!!!JJJJ\n");
			printf("7??????????77777777??777!!!!!!!!!~!Y!~~~!!~~~~~~~~~~~!~!!!!!!!!!7?JJY5!!!!!!!!!!!!!!!^^^^!!!!!!!!77\n");
			printf("7????????YJYJYYYJJJJJJJ???????7?JY5!~~~~YG!~~!!!!!!!!!!!!!777777?JYYPP7!!!!!!!!!!!!!!!!!!!!!!!!!7??\n");
			printf("7????????5YY?YJJ?JJJJJYJ??????JY!5J~!!!!!!!!!!!!!!!!!!7777777??JYYYY5P5!!!!!!!!!!!!!!!!7???????????\n");
			printf(".7?????7~~~7JJ??77?7?7?755?????YY^57:~!!!777777777777777??????JYYYYYYYPP!!!!!!!!!!!!!!!!~~~~???????\n");
			printf(".77777?7:^^~?JYPPPPP55Y??5J????J5JP7    .:::!???????????J?JJYYYYYYYJJPGJ?????77777777777^^~^7?????J\n");
			printf(":::::^^^^^~!!!77????755JY???????J?Y!:.      ::::::.^!!!!!!!!!!!!!~^7Y5??????????????????77?????????\n");
			printf(".::::::::::::::!7???Y5Y?~^^^^^^^^^~J7~~::::::::::::::::::::::::::^!5PJ?JJ??????????????????????????\n");
			printf(":::::::.:::::.:~~!JJ77J~.:::::::::::~77????7~~~~~~~^^:::^^^^~7777JY5Y??????JJJJJJ?????7!!!!!!!~~~~~\n");
			printf(":::::::.::::::::::::..:::::..:::..:.::::~777JY55YYYJ????????JY5Y55?~^^~^^~7!77!77!~~~~~~:::::::::::\n");
			printf(":::::::::::::.....:::::::::::::::::.........:^^7?777?7?5?7J5PGP~~^:^^^^^^7JJ?7??77??????~^^^^~~~~~~\n");
			printf("^^^^^^^^^:::::...::::::::::::::::^^^^^^^:::::..........^J7^7YGP::::::::::^~~????7??77?!J57^!?JJ????\n");
			printf("^^^^^^^^^^^!7?~::^^^^^::::::::::^!..::!7^::::::::::::::::~!7J5~::::::::::::::~YPPP5PYYY?YJ:::^!?JJJ\n");
			printf(".~^^^^^^^~!7JJ~^^^^^^^^^^^^^^^^::^7^~...:^^^::::::::::::::::^?~:::::::^^^^^^^^^^~77^^::YYY!......:?\n");
			printf(".7!^~~~!7?!^!^^^^^^^~~^^^^^^^^^^^^?77!:...:~!~^^^::::::^^^^^^^^^^^^^^^^^^^^^::::...:~!?YYY:..::::.:\n");
			printf(".7?7!!7??J!^^.^^^^^^7?7?7~^^^^^^^^^^^!7~:~~^:~7?~^^^^^^^^^^^^^^^^^:::.............:7JJ?JJ?~.:::::::\n");
			printf(".77????JYJ7!~^^^~~^!J!77Y?^^^^^^^^^^^^~7?J!..~!7~^^^^^^^^^^:::::::::::....:::...:::::..::...:::::::\n");
			printf(".???JJYJ7!?Y!~!???1YY77JY7~7!^^^^^^^^^^^??1!?7!?^^^::::::::::::::::::::::::::::::::::::::^!77!~^^::\n");
			printf(".JYJ!^7J7?YY!--------------------:::::::^~77:::::::::::::::::::--------------------^^^^^^^!77~^~JY?\n");
			printf(".??^::7??JYJ?|                  |:::^77J?~^:::::^^^:^^^^^^^^^^^|                  |^^^^^^~~^^~~75Y?\n");
			printf(".^^^!7?JYJJ77|   kg  %.1f        |^^!??J?^:^^^^^^^^^^^:::^~~^^~^|   MP %d        |!?7^~7J7!7J?!?YJ\n", kg, MP);
			printf("~!!7?YJ?!!~~~|       %d  대      |7??JY~:::^7!:^:^^^:.:.:^^^^^~~|    모험P   %d    |J!~?JJ!?JY??JYYY\n", gen, mp);
			printf(".!7777??7!^^~--------------------J?7JY?::~7?7^::^7?!^^::^!!^^~!--------------------YJ~??YJ77JYYY555\n");
			printf("77777?????7~!!^7J??1^~??YJ~7?J7~?7?JY!^^??Y~^^!??~~^^^^!J?~7J?!^~^^~^~??JYJ~~~~???YJ!??J?^~~?JJJ???\n");
			printf("~!!!~!??77?JY?JJYJ?7!??JYJ?JY?^7?7?JY!^!??Y!!7JJ?7J7~7?J?7??Y7:~??1~:!???JYJ!!????YYJ?JY?!!~!?77777\n");
			printf(" ~~!!~~77777???YJYJJJJ?JYY??YJ~^7???JY!^7?7JY?YJ??JJ?JJJJ^~??YY?JYJ7?7!???JYYYYJ7??JYYYY5YJ?7777777\n");

			printf("입력: \n");

			scanf("%c", &n); // 메뉴선택
		}
		switch (n)
		{
		case 49:		  // 먹이
			if (eat == 1) // 동물성플랑크톤   100%
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 10) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
				else if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						kg += 0.1;
						life = 0;
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						LEVEL();
					}
				}
			}
			else if (eat == 2) // 해파리  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE1();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL1();
								}
							}
						}
					}
				}
			}
			else if (eat == 3) // 오징어  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE2();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL2();
								}
							}
						}
					}
				}
			}
			else if (eat == 4) // 새우  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE3();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL3();
								}
							}
						}
					}
				}
			}
			else if (eat == 5) // 정어리  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE4();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL4();
								}
							}
						}
					}
				}
			}
			else if (eat == 6) // 게  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE5();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL5();
								}
							}
						}
					}
				}
			}
			else if (eat == 7) // 가리비  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE6();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL6();
								}
							}
						}
					}
				}
			}
			else if (eat == 8) // 굴  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}

				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE7();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL7();
								}
							}
						}
					}
				}
			}
			else if (eat == 9) // 닭새우  처음92%생존 돌연사시 99.9%생존
			{
				if (eat1 == 1) // 7번 먹음
				{
					for (j = 0; j < 7; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 2) // 8번 먹음
				{
					for (j = 0; j < 8; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 3) // 9번 먹음
				{
					for (j = 0; j < 9; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 4) // 10번 먹음
				{
					for (j = 0; j < 10; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 5) // 11번 먹음
				{
					for (j = 0; j < 11; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 6) // 12번 먹음
				{
					for (j = 0; j < 12; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 7) // 13번 먹음
				{
					for (j = 0; j < 13; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 8) // 14번 먹음
				{
					for (j = 0; j < 14; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 9) // 15번 먹음
				{
					for (j = 0; j < 15; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 10) // 16번 먹음
				{
					for (j = 0; j < 16; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 11) // 17번 먹음
				{
					for (j = 0; j < 17; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 12) // 18번 먹음
				{
					for (j = 0; j < 18; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 13) // 19번 먹음
				{
					for (j = 0; j < 19; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
				if (eat1 == 14) // 20번 먹음
				{
					for (j = 0; j < 20; j++)
					{
						eat_count++;
						if (eat_count % 3 == 0)
						{
							mp += 1;
						}
						if (life == 0)
						{
							i = rand() % 100 + 1;
							if (i > 0 && i <= 92) // 먹이 먹고 92% 생존확률
							{
								LEVLE8();
							}
							else
							{
								DIEME();
								continue;
							}
							if (life == 1) // 돌연사 후 먹이 먹을 생존확률
							{
								i = rand() % 1000 + 1;
								if (i == 1)
								{
									DIEME();
									continue;
								}
								else
								{
									LEVEL8();
								}
							}
						}
					}
				}
			}
			break;

		case 50:				  // 모험
			if (p == 1 && mp > 0) // 50프로생존
			{
				mp--;
				p1 = rand() % 2 + 1;
				if (p1 == 1)
				{
					if (moh == 1)
					{
						kg += 2.6;
						MP += 30;
						p = 1;
					}
					else if (moh == 2)
					{
						kg += 3.9;
						MP += 30;
						p = 1;
					}
					else if (moh == 3)
					{
						kg += 4.9;
						MP += 40;
						p = 1;
					}
					else if (moh == 4)
					{
						kg += 11.8;
						MP += 40;
						p = 1;
					}
					else if (moh == 5)
					{
						kg += 21.5;
						MP += 50;
						p = 1;
					}
					else if (moh == 6)
					{
						kg += 33.7;
						MP += 60;
						p = 1;
					}
					else if (moh == 7)
					{
						kg += 49.9;
						MP += 110;
						p = 1;
					}
					else if (moh == 8)
					{
						kg += 87.4;
						MP += 220;
						p = 1;
					}
					else if (moh == 9)
					{
						kg += 120;
						MP += 300;
						p = 1;
					}
					if (kg > 1.9)
					{
						if (lvup_p1 == 1)
						{
							lvup_p1++;
							MP += 40;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 1 && die == 1)
						{
							lvup_p2++;
							MP += 20;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 19.9)
					{
						if (lvup_p1 == 2)
						{
							lvup_p1++;
							MP += 70;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 2 && die == 1)
						{
							lvup_p2++;
							MP += 60;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 89.9)
					{
						if (lvup_p1 == 3)
						{
							lvup_p1++;
							MP += 230;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 3 && die == 1)
						{
							lvup_p2++;
							MP += 90;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 320)
					{
						if (lvup_p1 == 4)
						{
							lvup_p1++;
							MP += 600;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 4 && die == 1)
						{
							lvup_p2++;
							MP += 140;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 999.9)
					{
						if (lvup_p1 == 5)
						{
							lvup_p1++;
							MP += 1950;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 5 && die == 1)
						{
							lvup_p2++;
							MP += 360;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 2499.9)
					{
						if (lvup_p1 == 6)
						{
							lvup_p1++;
							MP += 3340;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 6 && die == 1)
						{
							lvup_p2++;
							MP += 680;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						break;
					}
				}
				if (p1 == 2)
				{
					DIEME2();
				}
				break;
			}
			if (p == 2 && mp > 0) // 75프로생존
			{
				mp--;
				p1 = rand() % 100 + 1;
				if (p1 >= 1 && p1 <= 75)
				{
					if (moh == 1)
					{
						kg += 2.6;
						MP += 30;
						p = 1;
					}
					else if (moh == 2)
					{
						kg += 3.9;
						MP += 30;
						p = 1;
					}
					else if (moh == 3)
					{
						kg += 4.9;
						MP += 40;
						p = 1;
					}
					else if (moh == 4)
					{
						kg += 11.8;
						MP += 40;
						p = 1;
					}
					else if (moh == 5)
					{
						kg += 21.5;
						MP += 50;
						p = 1;
					}
					else if (moh == 6)
					{
						kg += 33.7;
						MP += 60;
						p = 1;
					}
					else if (moh == 7)
					{
						kg += 49.9;
						MP += 110;
						p = 1;
					}
					else if (moh == 8)
					{
						kg += 87.4;
						MP += 220;
						p = 1;
					}
					else if (moh == 9)
					{
						kg += 120;
						MP += 300;
						p = 1;
					}
					if (kg > 1.9)
					{
						if (lvup_p1 == 1)
						{
							lvup_p1++;
							MP += 40;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 1 && die == 1)
						{
							lvup_p2++;
							MP += 20;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 19.9)
					{
						if (lvup_p1 == 2)
						{
							lvup_p1++;
							MP += 70;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 2 && die == 1)
						{
							lvup_p2++;
							MP += 60;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 89.9)
					{
						if (lvup_p1 == 3)
						{
							lvup_p1++;
							MP += 230;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 3 && die == 1)
						{
							lvup_p2++;
							MP += 90;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 320)
					{
						if (lvup_p1 == 4)
						{
							lvup_p1++;
							MP += 600;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 4 && die == 1)
						{
							lvup_p2++;
							MP += 140;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 999.9)
					{
						if (lvup_p1 == 5)
						{
							lvup_p1++;
							MP += 1950;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 5 && die == 1)
						{
							lvup_p2++;
							MP += 360;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 2499.9)
					{
						if (lvup_p1 == 6)
						{
							lvup_p1++;
							MP += 3340;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 6 && die == 1)
						{
							lvup_p2++;
							MP += 680;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						break;
					}
				}
				if (p1 > 75)
				{
					DIEME2();
				}
				break;
			}
			if (p == 3 && mp > 0) // 95프로생존
			{
				mp--;
				p1 = rand() % 100 + 1;
				if (p1 >= 1 && p1 <= 95)
				{
					if (moh == 1)
					{
						kg += 2.6;
						MP += 30;
						p = 1;
					}
					else if (moh == 2)
					{
						kg += 3.9;
						MP += 30;
						p = 1;
					}
					else if (moh == 3)
					{
						kg += 4.9;
						MP += 40;
						p = 1;
					}
					else if (moh == 4)
					{
						kg += 11.8;
						MP += 40;
						p = 1;
					}
					else if (moh == 5)
					{
						kg += 21.5;
						MP += 50;
						p = 1;
					}
					else if (moh == 6)
					{
						kg += 33.7;
						MP += 60;
						p = 1;
					}
					else if (moh == 7)
					{
						kg += 49.9;
						MP += 110;
						p = 1;
					}
					else if (moh == 8)
					{
						kg += 87.4;
						MP += 220;
						p = 1;
					}
					else if (moh == 9)
					{
						kg += 120;
						MP += 300;
						p = 1;
					}
					if (kg > 1.9)
					{
						if (lvup_p1 == 1)
						{
							lvup_p1++;
							MP += 40;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 1 && die == 1)
						{
							lvup_p2++;
							MP += 20;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 19.9)
					{
						if (lvup_p1 == 2)
						{
							lvup_p1++;
							MP += 70;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 2 && die == 1)
						{
							lvup_p2++;
							MP += 60;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 89.9)
					{
						if (lvup_p1 == 3)
						{
							lvup_p1++;
							MP += 230;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 3 && die == 1)
						{
							lvup_p2++;
							MP += 90;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 320)
					{
						if (lvup_p1 == 4)
						{
							lvup_p1++;
							MP += 600;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 4 && die == 1)
						{
							lvup_p2++;
							MP += 140;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 999.9)
					{
						if (lvup_p1 == 5)
						{
							lvup_p1++;
							MP += 1950;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 5 && die == 1)
						{
							lvup_p2++;
							MP += 360;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 2499.9)
					{
						if (lvup_p1 == 6)
						{
							lvup_p1++;
							MP += 3340;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 6 && die == 1)
						{
							lvup_p2++;
							MP += 680;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						break;
					}
				}
				if (p1 > 95)
				{
					DIEME2();
				}
				break;
			}
			if (p == 4 && mp > 0) // 99.9프로생존
			{
				mp--;
				p1 = rand() % 100 + 1;
				if (p1 >= 1 && p1 <= 99)
				{
					if (moh == 1)
					{
						kg += 2.6;
						MP += 30;
						p = 1;
					}
					else if (moh == 2)
					{
						kg += 3.9;
						MP += 30;
						p = 1;
					}
					else if (moh == 3)
					{
						kg += 4.9;
						MP += 40;
						p = 1;
					}
					else if (moh == 4)
					{
						kg += 11.8;
						MP += 40;
						p = 1;
					}
					else if (moh == 5)
					{
						kg += 21.5;
						MP += 50;
						p = 1;
					}
					else if (moh == 6)
					{
						kg += 33.7;
						MP += 60;
						p = 1;
					}
					else if (moh == 7)
					{
						kg += 49.9;
						MP += 110;
						p = 1;
					}
					else if (moh == 8)
					{
						kg += 87.4;
						MP += 220;
						p = 1;
					}
					else if (moh == 9)
					{
						kg += 120;
						MP += 300;
						p = 1;
					}
					if (kg > 1.9)
					{
						if (lvup_p1 == 1)
						{
							lvup_p1++;
							MP += 40;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 1 && die == 1)
						{
							lvup_p2++;
							MP += 20;
							if (kg > 1.9 && kg <= 2)
							{
								printf("아기가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 19.9)
					{
						if (lvup_p1 == 2)
						{
							lvup_p1++;
							MP += 70;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 2 && die == 1)
						{
							lvup_p2++;
							MP += 60;
							if (kg > 19.9 && kg <= 20.5)
							{
								printf("어린이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 89.9)
					{
						if (lvup_p1 == 3)
						{
							lvup_p1++;
							MP += 230;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 3 && die == 1)
						{
							lvup_p2++;
							MP += 90;
							if (kg > 89.9 && kg <= 90.5)
							{
								printf("젊은이가 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 320)
					{
						if (lvup_p1 == 4)
						{
							lvup_p1++;
							MP += 600;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 4 && die == 1)
						{
							lvup_p2++;
							MP += 140;
							if (kg > 320 && kg <= 325)
							{
								printf("사회의 일원이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 999.9)
					{
						if (lvup_p1 == 5)
						{
							lvup_p1++;
							MP += 1950;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 5 && die == 1)
						{
							lvup_p2++;
							MP += 360;
							if (kg > 999.9 && kg <= 1050)
							{
								printf("개복치왕이 되었습니다 \n");
								sleep(1);
							}
						}
					}
					if (kg > 2499.9)
					{
						if (lvup_p1 == 6)
						{
							lvup_p1++;
							MP += 3340;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						if (lvup_p2 == 6 && die == 1)
						{
							lvup_p2++;
							MP += 680;
							if (kg > 2499.9 && kg <= 2550)
							{
								printf("수족관 주인이 되었습니다 \n");
								sleep(1);
							}
						}
						break;
					}
				}
				if (p1 > 99)
				{
					DIEME2();
				}
				break;
			}
			else
			{
				printf("모험포인트가 부족합니다 \n");
				sleep(1);
			}
			break;

		case 51: // 상점
			printf("1.먹이 업그래이드 2.먹이 갯수 업그래이드 3.모험 업그래이드");
			scanf("%d", &k);
			if (k == 1)
			{
				if (eat == 1 && MP >= 110)
				{
					eat++;
					MP -= 110;
					printf("먹이를 해파리로 업그래이드 하였습니다. 110MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat == 2 && MP >= 220)
				{
					eat++;
					MP -= 220;
					printf("먹이를 오징어로 업그래이드 하였습니다. 220MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat == 3 && MP >= 600)
				{
					eat++;
					MP -= 600;
					printf("먹이를 새우로 업그래이드 하였습니다. 600MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat == 4 && MP >= 1200)
				{
					eat++;
					MP -= 1200;
					printf("먹이를  정어리로 업그래이드 하였습니다. 1200MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat == 5 && MP >= 3200)
				{
					eat++;
					MP -= 3200;
					printf("먹이를 게로 업그래이드 하였습니다. 3200MP가 차감되었습니다\n");
					sleep(1);
				}
				else if (eat == 6 && MP >= 6500)
				{
					eat++;
					MP -= 6500;
					printf("먹이를 가리비로 업그래이드 하였습니다. 6500MP가 차감되었습니다.\n");
				}
				else if (eat == 7 && MP >= 11000)
				{
					eat++;
					MP -= 11000;
					printf("먹이를 굴로 업그래이드 하였습니다. 11000MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat == 8 && MP >= 23000)
				{
					eat++;
					MP -= 23000;
					printf("먹이를 닭새우로 업그래이드 하였습니다. 23000MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat > 8)
				{
					printf("더이상 업그래이드 할 것이 없습니다.\n");
					sleep(1);
				}
				else
					printf("MP가 부족합니다.\n");
				sleep(1);
			}
			else if (k == 2)
			{
				if (eat1 == 1 && MP >= 24)
				{
					eat1++;
					MP -= 24;
					printf("먹이 갯수를 8개로 업그래이드 하였습니다. 24MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 2 && MP >= 64)
				{
					eat1++;
					MP -= 64;
					printf("먹이 갯수를 9개로 업그래이드 하였습니다. 64MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 3 && MP >= 96)
				{
					eat1++;
					MP -= 96;
					printf("먹이 갯수를 10개로 업그래이드 하였습니다. 96MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 4 && MP >= 128)
				{
					eat1++;
					MP -= 128;
					printf("먹이 갯수를 11개로 업그래이드 하였습니다. 128MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 5 && MP >= 192)
				{
					eat1++;
					MP -= 192;
					printf("먹이 갯수를 12개로 업그래이드 하였습니다. 192MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 6 && MP >= 400)
				{
					eat1++;
					MP -= 400;
					printf("먹이 갯수를 13개로 업그래이드 하였습니다. 400MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 7 && MP >= 600)
				{
					eat1++;
					MP -= 600;
					printf("먹이 갯수를 14개로 업그래이드 하였습니다. 600MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 8 && MP >= 800)
				{
					eat1++;
					MP -= 800;
					printf("먹이 갯수를 15개로 업그래이드 하였습니다. 800MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 9 && MP >= 1200)
				{
					eat1++;
					MP -= 1200;
					printf("먹이 갯수를 16개로 업그래이드 하였습니다. 1200MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 10 && MP >= 2080)
				{
					eat1++;
					MP -= 2080;
					printf("먹이 갯수를 17개로 업그래이드 하였습니다. 2080MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 11 && MP >= 3120)
				{
					eat1++;
					MP -= 3120;
					printf("먹이 갯수를 18개로 업그래이드 하였습니다. 3120MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 12 && MP >= 4000)
				{
					eat1++;
					MP -= 4000;
					printf("먹이 갯수를 19개로 업그래이드 하였습니다. 4000MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 == 13 && MP >= 6000)
				{
					eat1++;
					MP -= 6000;
					printf("먹이 갯수를 20개로 업그래이드 하였습니다. 6000MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (eat1 > 13)
				{
					printf("더이상 업그래이드 할 것이 없습니다.\n");
					sleep(1);
				}
				else
					printf("MP가 부족합니다. \n");
				sleep(1);
			}
			else
			{
				if (moh == 1 && MP >= 100)
				{
					moh++;
					MP -= 100;
					printf("해저에는 진수성찬이로 업그래이드 하였습니다. 100MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 2 && MP >= 260)
				{
					moh++;
					MP -= 260;
					printf("바위의 그림자에는 보물이로 업그래이드 하였습니다. 260MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 3 && MP >= 800)
				{
					moh++;
					MP -= 800;
					printf("햇볕 쬐기로 업그래이드 하였습니다. 800MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 4 && MP >= 1600)
				{
					moh++;
					MP -= 1600;
					printf("바다거북아, 안녕으로 업그래이드 하였습니다. 1600MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 5 && MP >= 4200)
				{
					moh++;
					MP -= 4200;
					printf("물고기 천국으로 업그래이드 하였습니다. 4200MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 6 && MP >= 8300)
				{
					moh++;
					MP -= 8300;
					printf("새들은 친구들로 업그래이드 하였습니다. 8300MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 7 && MP >= 15000)
				{
					moh++;
					MP -= 15000;
					printf("동료를 구하라!로 업그래이드 하였습니다. 15000MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh == 8 && MP >= 24000)
				{
					moh++;
					MP -= 24000;
					printf("빛의 방향으로 업그래이드 하였습니다. 24000MP가 차감되었습니다.\n");
					sleep(1);
				}
				else if (moh > 8)
				{
					printf("더이상 업그래이드 할 것이 없습니다.\n");
					sleep(1);
				}
				else
					printf("MP가 부족합니다. \n");
				sleep(1);
			}
			break;

		case 88: // 종료
			break;
		}

		if (n == 88) // 종료선택시 실행
			break;
	}
	printf("게임종료\n");
	return 0;
}

void LEVEL(void) // 플랑크톤
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL2(void) // 오징어
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 0.4;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL3(void) // 새우
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 0.7;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL4(void) // 정어리
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 1.0;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL5(void) // 게
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 1.4;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL6(void) // 가리비
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 2.5;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL7(void) // 굴
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 4.0;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void LEVEL8(void) // 닭새우
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;

	kg += 5.5;
	life = 0;
	if (kg > 1.9)
	{
		if (lvup_p1 == 1)
		{
			lvup_p1++;
			MP += 40;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 1 && die == 1)
		{
			lvup_p2++;
			MP += 20;
			if (kg > 1.9 && kg <= 2)
			{
				printf("아기가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 19.9)
	{
		if (lvup_p1 == 2)
		{
			lvup_p1++;
			MP += 70;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 2 && die == 1)
		{
			lvup_p2++;
			MP += 60;
			if (kg > 19.9 && kg <= 20.5)
			{
				printf("어린이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 89.9)
	{
		if (lvup_p1 == 3)
		{
			lvup_p1++;
			MP += 230;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 3 && die == 1)
		{
			lvup_p2++;
			MP += 90;
			if (kg > 89.9 && kg <= 90.5)
			{
				printf("젊은이가 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 320)
	{
		if (lvup_p1 == 4)
		{
			lvup_p1++;
			MP += 600;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 4 && die == 1)
		{
			lvup_p2++;
			MP += 140;
			if (kg > 320 && kg <= 325)
			{
				printf("사회의 일원이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 999.9)
	{
		if (lvup_p1 == 5)
		{
			lvup_p1++;
			MP += 1950;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 5 && die == 1)
		{
			lvup_p2++;
			MP += 360;
			if (kg > 999.9 && kg <= 1050)
			{
				printf("개복치왕이 되었습니다 \n");
				sleep(1);
			}
		}
	}
	if (kg > 2499.9)
	{
		if (lvup_p1 == 6)
		{
			lvup_p1++;
			MP += 3340;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
		if (lvup_p2 == 6 && die == 1)
		{
			lvup_p2++;
			MP += 680;
			if (kg > 2499.9 && kg <= 2550)
			{
				printf("수족관 주인이 되었습니다 \n");
				sleep(1);
			}
		}
	}
}

void DIEME(void)
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;


	i = rand() % 1000 + 1;
	if (i == 1)
	{
		die = 1;
		lvup_p2 = 1;
		gen++;

		if (kg < 2)
		{
			MP += 30;
		}
		if (kg >= 2 && kg < 20)
		{
			MP += 120;
		}
		if (kg >= 20 && kg < 90)
		{
			MP += 560;
		}
		if (kg >= 90 && kg < 320)
		{
			MP += 560;
		}
		if (kg >= 320 && kg < 1000)
		{
			MP += 900;
		}
		if (kg >= 1000 && kg < 2500)
		{
			MP += 1950;
		}
		if (kg >= 2500)
		{
			MP += 3340;
		}
		kg = 0;
		eat_die = rand() % 8 + 1; // 죽음메시지
		if (eat_die == 1)
		{
			printf("개복치는 해파리와 비닐봉투를 착각하여 잘 질식하여 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 2)
		{
			printf("개복치는 내장도 약하여 정말 좋아하는 오징어를 너무 많이 먹어 소화를 전혀 시키지 못해서 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 3)
		{
			printf("개복치는 내장도 약하여 새우를 완전히 삼켜 그 껍질이 식도를 찔러 가끔 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 4)
		{
			printf("개복치는 식도도 약해서 정어리의 작은 뼈가 찔러서 고름이 생겨 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 5)
		{
			printf("개복치는 내장도 약하여 게의 다리가 찔러서 고름이 생겨 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 6)
		{
			printf("개복치는 내장도 약하여 가리비의 껍질이 찔러 고름이 생겨 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 7)
		{
			printf("아마 개복치가 아니라도 껍질을 먹으면 내장을 찔러서 고름이 생겨 죽을 것이다. \n");
			sleep(1);
			life = 1;
		}
		else
		{
			printf("개복치는 수족관에서 닭새우를 먹는 등 아주 비용이 많이 든다. 껍질이 남아있으면, 물론 죽을 것이다. \n");
			sleep(1);
			life = 1;
		}
	}
}


void DIEME2(void)
{
	int i, j = 0, eat = 1, eat1 = 1, life, MP = 0, eat_die, mp = 0, eat_count = 0, die, gen = 1;
	int a, b, c, k;				  // 상점용
	int lvup_p1 = 1, lvup_p2 = 1; // 레벨업시얻는 포인트용
	int moh = 1, p = 1, p1;		  // 모험용
	double l, m, kg = 0;
	char o, n;



		p++;
		lvup_p2 = 1;
		die = 1;
		gen++;
		if (kg < 2)
		{
			MP += 30;
		}
		if (kg >= 2 && kg < 20)
		{
			MP += 120;
		}
		if (kg >= 20 && kg < 90)
		{
			MP += 560;
		}
		if (kg >= 90 && kg < 320)
		{
			MP += 560;
		}
		if (kg >= 320 && kg < 1000)
		{
			MP += 900;
		}
		if (kg >= 1000 && kg < 2500)
		{
			MP += 1950;
		}
		if (kg >= 2500)
		{
			MP += 3340;
		}
		kg = 0;
		eat_die = rand() % 8 + 1; // 죽음메시지
		if (eat_die == 1)
		{
			printf("개복치는 해파리와 비닐봉투를 착각하여 잘 질식하여 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 2)
		{
			printf("개복치는 내장도 약하여 정말 좋아하는 오징어를 너무 많이 먹어 소화를 전혀 시키지 못해서 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 3)
		{
			printf("개복치는 내장도 약하여 새우를 완전히 삼켜 그 껍질이 식도를 찔러 가끔 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 4)
		{
			printf("개복치는 식도도 약해서 정어리의 작은 뼈가 찔러서 고름이 생겨 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 5)
		{
			printf("개복치는 내장도 약하여 게의 다리가 찔러서 고름이 생겨 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 6)
		{
			printf("개복치는 내장도 약하여 가리비의 껍질이 찔러 고름이 생겨 죽는다. \n");
			sleep(1);
			life = 1;
		}
		else if (eat_die == 7)
		{
			printf("아마 개복치가 아니라도 껍질을 먹으면 내장을 찔러서 고름이 생겨 죽을 것이다. \n");
			sleep(1);
			life = 1;
		}
		else
		{
			printf("개복치는 수족관에서 닭새우를 먹는 등 아주 비용이 많이 든다. 껍질이 남아있으면, 물론 죽을 것이다. \n");
			sleep(1);
			life = 1;
		}
	
}