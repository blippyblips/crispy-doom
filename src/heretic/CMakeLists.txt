add_library(heretic STATIC
            am_data.h
            am_map.cpp            am_map.h
            ct_chat.cpp           ct_chat.h
            deh_ammo.cpp
            deh_frame.cpp
            deh_htext.cpp
            deh_htic.cpp          deh_htic.h
            deh_sound.cpp
            deh_thing.cpp
            deh_weapon.cpp
            d_main.cpp
            d_net.cpp
                                doomdata.h
                                doomdef.h
                                dstrings.h
            f_finale.cpp
            g_game.cpp
            info.cpp              info.h
            in_lude.cpp
            m_random.cpp          m_random.h
            mn_menu.cpp
                                p_action.h
            p_blockmap.cpp
            p_ceilng.cpp
            p_doors.cpp
            p_enemy.cpp
            p_extnodes.cpp        p_extnodes.h
            p_floor.cpp
            p_inter.cpp
            p_lights.cpp
            p_local.h
            p_map.cpp
            p_maputl.cpp
            p_mobj.cpp
            p_plats.cpp
            p_pspr.cpp
            p_saveg.cpp
            p_setup.cpp
            p_sight.cpp
            p_spec.cpp            p_spec.h
            p_switch.cpp
            p_telept.cpp
            p_tick.cpp
            p_user.cpp
            r_bmaps.cpp           r_bmaps.h
            r_bsp.cpp
            r_data.cpp
            r_draw.cpp
                                r_local.h
            r_main.cpp
            r_plane.cpp
            r_segs.cpp
            r_swirl.cpp           r_swirl.h
            r_things.cpp
            sb_bar.cpp
            sounds.cpp            sounds.h
            s_sound.cpp           s_sound.h "p_inter.h")

target_include_directories(heretic PRIVATE "../" "${CMAKE_CURRENT_BINARY_DIR}/../../")
target_link_libraries(heretic textscreen SDL2::SDL2)
if(ENABLE_SDL2_MIXER)
    target_link_libraries(heretic SDL2_mixer::SDL2_mixer)
endif()
if(ENABLE_SDL2_NET)
    target_link_libraries(heretic SDL2_net::SDL2_net)
endif()
