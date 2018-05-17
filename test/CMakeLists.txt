add_executable(runTest
    example.cpp
    rational.cpp
    main.cpp)

target_link_libraries(runTest libstuff libgtest)
