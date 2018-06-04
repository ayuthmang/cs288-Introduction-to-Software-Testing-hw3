cmake_minimum_required(VERSION 3.10)
project(Playground)


#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -lstdc++")

set(CMAKE_CXX_STANDARD 11)

#file(
#        GLOB SRC_FILES
#        "./src/employee.cpp"
#        "./src/employee.h"
#        "./src/commission.h"
#        "./src/commission.cpp"
#        "./src/baseplus.h"
#        "./src/baseplus.cpp"
#)
file(GLOB SRC_FILES
        "./src/*.h"
        "./src/*.cpp")

#set(SOURCES src/baseplus.cpp src/baseplus.h src/commission.h src/commission.cpp src/employee.h src/employee.cpp)
add_executable(testDriverOne ${SRC_FILES} "./test/driver1.cpp")
add_executable(testBaseplusClass ${SRC_FILES} "test/TestBasePlus.cpp")
add_executable(testCommissionEmployeeClass ${SRC_FILES} "./test/TestCommissionEmployeeClass.cpp")
add_executable(testBasePlusCommissionEmployeeClass ${SRC_FILES} "./test/TestBasePlusCommissionEmployee.cpp")
