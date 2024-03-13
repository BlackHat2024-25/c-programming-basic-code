#include <stdio.h>
#include <math.h>

int main()
{
	float parasantage;
	float sum_of_all_sub_mark;
	float chem, phy, eng, hin, mat;

	printf("enter physics marks :");
	scanf("%f", &phy);

	printf("enter chemistry marks :");
	scanf("%f", &chem);
	printf("enter hindi marks :");
	scanf("%f", &hin);
	printf("enter maths marks :");
	scanf("%f", &mat);

	printf("enter english marks :");
	scanf("%f", &eng);
	printf("\n");

	sum_of_all_sub_mark = phy + chem + eng + mat + hin;

	parasantage = sum_of_all_sub_mark * 100 / 500;

	if (phy < 33)
	{
		printf("Physics :: Stupid you are fail in physics\n");
		printf("\n");
	}

	else if (phy > 32 && phy < 60)
	{
		printf("physics :: your physics's marks are like you have not done study in your school only sleeping in classroom\n");
		printf("\n");
	}

	else if (phy >= 60 && phy < 80)
	{
		printf("Physics :: you have good score in physics. beacause you have  hard worked your exam time\n");
		printf("\n");
	}
	else
	{
		printf("physics :: you have give awosome perfomance in physics\n");
			printf("\n");
	}

	if (chem < 33)
	{
		printf("chemistry :: Stupid you are fail in chemistry\n");
		printf("\n");
	}
	else if (chem > 32 && chem < 60)
	{
		printf("chemistry :: your chemistry's marks are like you have not done study in your school only sleeping in classroom\n");
		printf("\n");
	}
	else if (chem >= 60 && chem <= 80)
	{
		printf("chemistry :: you have good score in chemistry. beacause you have  hard worked your exam time\n");
		printf("\n");
	}
	else
	{
		printf("chemistry :: you have give awosome perfomance in chemistry\n");
			printf("\n");
	}
	if (hin < 33)
	{
		printf("hindi :: Stupid you are fail in hindi\n");
		printf("\n");
	}
	else if (hin > 32 && hin < 60)
	{
		printf("hindi :: your Hindi's marks are like you have not done study in your school only sleeping in classroom\n");
		printf("\n");
	}
	else if (hin >= 60 && hin <= 80)
	{
		printf("hindi :: you have good score in hindi. beacause you have  hard worked your exam time\n");
		printf("\n");
	}
	else
	{
		printf("hindi :: you have give awosome perfomance in hindi\n");
			printf("\n");
	}
	if (mat < 33)
	{
		printf("Math :: Stupid you are fail in Math\n");
		printf("\n");
	}
	else if (mat > 32 && mat < 60)
	{
		printf("Math :: your Math's marks are like you have not done study in your school only sleeping in classroom\n");
		printf("\n");
	}
	else if (mat >= 60 && mat <= 80)
	{
		printf("Math :: you have good score in math . beacause you have  hard worked your exam time\n");
		printf("\n");
	}
	else
	{
		printf("Math :: you have give awosome perfomance in math\n");
			printf("\n");
	}
	if (eng < 33)
	{
		printf("English :: stupid you are fail in english\n");
		printf("\n");
	}
	else if (eng > 32 && eng < 60)
	{
		printf("English :: your English's marks are like you have not done study in your school only sleeping in classroom\n");
		printf("\n");
	}
	else if (eng >= 60 && eng <= 80)
	{
		printf("English :: you have good score in English. beacause you have  hard worked your exam time\n");
		printf("\n");
	}
	else
	{
		printf("English :: you have give awosome perfomance in English\n");
			printf("\n");
	}
    printf("Maximum Marks : 500\n");
	printf("Minimum Marks :%.f\n", sum_of_all_sub_mark);
	printf("your parsantage is:%.2f\n", parasantage);

	printf("\n");

	if (parasantage <= 100)
	{
		if (parasantage == 100)
		{
			printf("Massage :: WOW ! you have done top in india");

			printf("\n");
		}

		else if (parasantage >= 90 && parasantage < 100)
		{
			printf("Massage :: welldone, you have done top in our state , now your family is felling proud of you\n");
			printf("\n");
			printf("\n");
		}

		else if (parasantage >= 80 && parasantage < 90)
		{
			printf("Massage :: nice work, you are top 10 in your school, now your friends are jelousing to you\n");
			printf("\n");
			printf("\n");
		}

		else if (parasantage >= 70 && parasantage < 80)
		{
			printf("Massage :: you are Well student because you have extra skill compare to other student");
			printf("\n");
			printf("\n");
		}

		else if (parasantage >= 55 && parasantage < 70)
		{
			printf("Massage :: you are a average student. you need to improve yourself , best of luck");
			printf("\n");
			printf("\n");
		}

		else if (parasantage >= 0 && parasantage < 55)
		{
			printf("Massage :: you are fail Stupid, shame on you,  hatttttttt ");
			printf("\n");
			printf("\n");
		}
	}

	else
	{

		printf("Massage :: Stupid !  you have cheated during exam , pulice can may be arrest you\n");
		printf("\n");
		printf("\n");
	}

	return 0;
}
