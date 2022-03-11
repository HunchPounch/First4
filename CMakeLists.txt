cmake_minimum_required(VERSION 2.8)

project(First4)

set(KR1_src test.cpp CComplexVector.cpp CComplexVector1.cppCComplexVector0.cpp functions.cpp main.cpp)
set(KR1_hdr CComplexVector.h CComplexVector1.h CComplexVector0.h test.h)

add_executable(${PROJECT_NAME} ${First4_src} ${First4_hdr})