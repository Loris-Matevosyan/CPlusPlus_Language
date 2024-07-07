# To work with gcc(14.1.0 version) or clang(18.1.5 version) on windows

.PHONY: g++ clang++ clear_g++ clear_clang++ execute 


g++:
	@g++ -fmodules-ts -x c++-system-header string
	@g++ -fmodules-ts -c -x c++ print.ixx
	@g++ -fmodules-ts main.cpp print.o -o hello.exe

clang++:
	@clang++ -std=c++20 -x c++-system-header string --precompile -o string.pcm
	@clang++ -std=c++20 -fmodule-file=string.pcm -x c++-module print.ixx --precompile -o printHello.pcm
	@clang++ -std=c++20 -fmodule-file=string.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
	@clang++ -std=c++20 printHello.pcm -c -o printHello.o
	@clang++ -std=c++20 main.o printHello.o -o hello

execute:
	@hello.exe

clear_g++:
	@rmdir /S gcm.cache
	@del *.o
	@del *.exe

clear_clang++:
	@del *.pcm
	@del *.o
	@del *.exe