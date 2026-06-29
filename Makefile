CXX = g++
CXXFLAGS = -Wall -std=c++17

all: student_system test

student_system: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o student_system.exe

test: test.cpp
	$(CXX) $(CXXFLAGS) test.cpp -o test.exe

run:
	./student_system.exe

test-run:
	./test.exe

clean:
	rm -f *.exe *.txt