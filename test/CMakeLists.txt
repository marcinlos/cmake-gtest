add_executable(runTest
    PersonData.cpp
    Employee.cpp
    Database.cpp
    Report.cpp
    main.cpp)

target_link_libraries(runTest libcompany libgtest)

add_test(allTests runTest)
