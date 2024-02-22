TARGET = Zadanie1-4-output
CC = g++

$(TARGET) : Zadanie1-4.o CheckSorts.o work_array.o QuickSort_error_fixed.o merge.o BubbleSort.o ShellSort.o
	$(CC) Zadanie1-4.o CheckSorts.o work_array.o QuickSort_error_fixed.o merge.o BubbleSort.o ShellSort.o -o $(TARGET)

Zadanie1-4.o : Zadanie1-4.cpp
	$(CC) -c Zadanie1-4.cpp -o Zadanie1-4.o

CheckSorts.o : CheckSorts.cpp
	$(CC) -c CheckSorts.cpp -o CheckSorts.o

ShellSort.o: ShellSort.cpp
	$(CC) -c ShellSort.cpp -o ShellSort.o 

BubbleSort.o: BubbleSort.cpp
	$(CC) -c BubbleSort.cpp -o BubbleSort.o 

merge.o : merge.cpp
	$(CC) -c merge.cpp -o merge.o

work_array.o : work_array.cpp
	$(CC) -c work_array.cpp -o work_array.o

QuickSort_error_fixed.o : QuickSort_error_fixed.cpp 
	$(CC) -c QuickSort_error_fixed.cpp -o QuickSort_error_fixed.o 

clean : 
	rm $(TARGET) *.o 

