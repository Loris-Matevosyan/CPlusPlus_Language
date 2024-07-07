# To work with gcc(14.1.0 version) or clang(18.1.5 version) on windows

.PHONY: g++ clear_g++ execute 
# clang++ clear_clang++

g++:
	@g++ -fmodules-ts -x c++-system-header iostream
	@g++ -fmodules-ts -c -x c++ Point.ixx
	@g++ -fmodules-ts -c -x c++ Line.ixx
	@g++ -fmodules-ts main.cpp Point.o Line.o -o line.exe

# clang++:
# 	@clang++ -std=c++20 -x c++-system-header iostream --precompile -o iostream.pcm
# 	@clang++ -std=c++20 -x c++-module Point.ixx --precompile -o point.pcm
# 	@clang++ -std=c++20 -x c++-module Line.ixx -fmodule-file=point=point.pcm --precompile -o line.pcm
# 	@clang++ -std=c++20 -fmodule-file=iostream.pcm main.cpp -fprebuilt-module-path=. -c -o main.o
# 	@clang++ -std=c++20 point.pcm -c -o point.o
# 	@clang++ -std=c++20 line.pcm -c -o line.o
# 	@clang++ -std=c++20 main.o point.o line.o -o line

execute:
	@line.exe

clear_g++:
	@rmdir /S gcm.cache
	@del *.o
	@del *.exe

# clear_clang++:
# 	@del *.pcm
# 	@del *.o
# 	@del *.exe