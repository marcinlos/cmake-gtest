add_executable(test
    example.cpp
    rational.cpp
    main.cpp)

target_link_libraries(test libstuff libgtest)
