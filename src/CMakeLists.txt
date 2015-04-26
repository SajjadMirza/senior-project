# src

add_executable(myapp main.cpp)

add_subdirectory(sound)


target_link_libraries(myapp sound glfw ${GLFW_LIBRARIES} ${IRRKLANG_LIBRARY} ${FMOD})

install(TARGETS myapp DESTINATION bin) 
