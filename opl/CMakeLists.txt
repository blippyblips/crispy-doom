add_library(opl STATIC
            opl_internal.h
            opl.cpp          opl.h
            opl_linux.cpp
            opl_obsd.cpp
            opl_queue.cpp     opl_queue.h
            opl_sdl.cpp
            opl_timer.cpp     opl_timer.h
            opl_win32.cpp
            ioperm_sys.cpp    ioperm_sys.h
            opl3.cpp          opl3.h)
target_include_directories(opl
                           INTERFACE "."
                           PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/../")
target_link_libraries(opl SDL2::SDL2)
if(ENABLE_SDL2_MIXER)
    target_link_libraries(opl SDL2_mixer::SDL2_mixer)
endif()
