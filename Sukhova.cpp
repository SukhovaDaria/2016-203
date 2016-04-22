#include "sukhova.h"

/**
 * Метод Гаусса
 */
void Sukhova ::lab1(){

//Приведение к нижне треугольному виду матрицы A
float q=0; //итспользуется для фиксированного коэффициента, на который мы домножаем строку при приведении матрцы А к треугольному виду
    for(int k=0; k<N; k++)
        for(int i=k+1; i<N;i++)
           {
               q=(A[i][k]/A[k][k]);
               b[i]-=b[k]*q; //изменяем столбец свободных членов параллельно с приведением матрицы А к треугольному виду
            for(int j=0;j<N;j++)
                {
                    A[i][j]=A[i][j]-A[k][j]*q;

                }
           }


//Вычисление корней
double s=0; //s- используется для нахожения i-ого неизвестного за счет уже найденных N-i неизвестных

    for(int i=N-1;i>=0;i--)
    {

        for (int j=i+1; j<N;j++)
            s=s+A[i][j]*x[j];
        x[i]=(b[i]-s)/A[i][i];
        s=0;

    }


/**
 * Метод Гаусса с выбором главного элемента
 */
void ivanovii::lab2()
{
 float x[N];
 //выводим столбец свободных членов
cout<<endl;
    float x[N],b[N];
    for(int i=0; i<N;i++)
        {f>>b[i]; cout<<b[i]<<" ";}
        cout<<endl<<endl;





//находим максимальный элемент в столбце
for (int k = 0; k < N; k++)
  	{
  		double max = abs(A[k][k]);
          int index = k;
          for (int i = k+1; i < N; i++)
  		{
  			if (abs(A[i][k]) > max)
  			{
  				max = abs(A[i][k]);
  				index = i;
  			}
  		}
  		//меняем строчки
  		for (int j = 0; j < N; j++) swap(A[k][j], A[index][j]);
  		swap(b[k], b[index]);

  		for (int i = k; i < N; i++)
  		{
  			double temp = A[i][k];
  			if (temp != 0)
  			for (int j = 0; j < N; j++) A[i][j] = A[i][j] / temp;
  			b[i] = b[i] / temp;
  			if (i == k) continue;
  			for (int j = 0; j < N; j++) {A[i][j] = A[i][j] - A[k][j];}

  			b[i] = b[i] - b[k];

  		}
  	}
  	for (int k = N-1; k >= 0; k--)
  	{
  		x[k] = b[k];
  		for (int i = 0; i < k; i++) b[i] = b[i] - A[i][k] * x[k];
  	}
}



/**
 * Метод квадратного корня (метод Холецкого)
 */
void ivanovii::lab3()
{

}



/**
 * Метод прогонки
 */
void ivanovii::lab4()
{

}



/**
 * Метод Якоби
 */
void ivanovii::lab5()
{

}



/**
 * Метод Зейделя
 */
void ivanovii::lab6()
{

}



/**
 * Один из градиентных методов
 */
void ivanovii::lab7()
{

}
Status API Training Shop Blog About Pricing
© 2016 GitHub, Inc. Terms Privacy Security Co
