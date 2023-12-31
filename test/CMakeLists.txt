cmake_minimum_required(VERSION 3.20)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")
add_subdirectory(googletest)

add_executable(runAllTests
    testEnemyClass.cpp
    testGoblinClass.cpp
    testBanditClass.cpp
    testGolemClass.cpp
    testGiantClass.cpp
    testEnemyTeamClass.cpp
    testCharacterClass.cpp
    testCharacterTeamClass.cpp
    testSamuraiClass.cpp
    testMageClass.cpp
    testPlayerClass.cpp
    testPlayerTeam.cpp
    testCombat.cpp
    testSubChapter.cpp
    testChapter.cpp
    testCh1Part1.cpp
    testCh1Part2.cpp
    testCh1Part3.cpp
    testChapter1.cpp
    testStartNewGame.cpp 
    testshowDevelopers.cpp
    testHelpClass.cpp
    testMenuClass.cpp
)

target_link_libraries(runAllTests gmock gtest gtest_main)
target_link_libraries(runAllTests)
TARGET_COMPILE_DEFINITIONS(runAllTests PRIVATE gtest_disable_pthreads=ON)
