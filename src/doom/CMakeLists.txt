add_library(doom STATIC
            am_map.cpp        am_map.h
            deh_ammo.cpp
            deh_bexincl.cpp
            deh_bexpars.cpp   deh_bexpars.h
            deh_bexptr.cpp
            deh_bexstr.cpp
            deh_cheat.cpp
            deh_doom.cpp
            deh_frame.cpp
            deh_misc.cpp      deh_misc.h
            deh_ptr.cpp
            deh_sound.cpp
            deh_thing.cpp
            deh_weapon.cpp
                            d_englsh.h
            d_items.cpp       d_items.h
            d_main.cpp        d_main.h
            d_net.cpp
            d_pwad.cpp        d_pwad.h
                            doomdata.h
            doomdef.cpp       doomdef.h
            doomstat.cpp      doomstat.h
                            d_player.h
            dstrings.cpp      dstrings.h
                            d_textur.h
                            d_think.h
            f_finale.cpp      f_finale.h
            f_wipe.cpp        f_wipe.h
            g_game.cpp        g_game.h
            hu_lib.cpp        hu_lib.h
            hu_stuff.cpp      hu_stuff.h
            info.cpp          info.h
                            m_background.h
            m_crispy.cpp      m_crispy.h
            m_menu.cpp        m_menu.h
            m_random.cpp      m_random.h
            p_bexptr.cpp
            p_blockmap.cpp
            p_ceilng.cpp
            p_doors.cpp
            p_enemy.cpp
            p_extnodes.cpp    p_extnodes.h
            p_extsaveg.cpp    p_extsaveg.h
            p_floor.cpp
            p_inter.cpp       p_inter.h
            p_lights.cpp
                            p_local.h
            p_map.cpp
            p_maputl.cpp
            p_mobj.cpp        p_mobj.h
            p_plats.cpp
            p_pspr.cpp        p_pspr.h
            p_saveg.cpp       p_saveg.h
            p_setup.cpp       p_setup.h
            p_sight.cpp
            p_spec.cpp        p_spec.h
            p_switch.cpp
            p_telept.cpp
            p_tick.cpp        p_tick.h
            p_user.cpp
            r_bmaps.cpp       r_bmaps.h
            r_bsp.cpp         r_bsp.h
            r_data.cpp        r_data.h
                            r_defs.h
            r_draw.cpp        r_draw.h
                            r_local.h
            r_main.cpp        r_main.h
            r_plane.cpp       r_plane.h
            r_segs.cpp        r_segs.h
            r_sky.cpp         r_sky.h
                            r_state.h
            r_swirl.cpp       r_swirl.h
            r_things.cpp      r_things.h
            s_musinfo.cpp     s_musinfo.h
            s_sound.cpp       s_sound.h
            sounds.cpp        sounds.h
            statdump.cpp      statdump.h
            st_lib.cpp        st_lib.h
            st_stuff.cpp      st_stuff.h
            v_snow.cpp        v_snow.h
            wi_stuff.cpp      wi_stuff.h "event_function_decls.h")

target_include_directories(doom PRIVATE "../" "${CMAKE_CURRENT_BINARY_DIR}/../../")
target_link_libraries(doom SDL2::SDL2)
if(ENABLE_SDL2_MIXER)
    target_link_libraries(doom SDL2_mixer::SDL2_mixer)
endif()
if(ENABLE_SDL2_NET)
    target_link_libraries(doom SDL2_net::SDL2_net)
endif()
