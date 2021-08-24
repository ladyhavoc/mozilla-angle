// GENERATED FILE - DO NOT EDIT.
// Generated by gen_restricted_traces.py using data from restricted_traces.json
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// restricted_traces_autogen: Types and enumerations for trace tests.

#ifndef ANGLE_RESTRICTED_TRACES_AUTOGEN_H_
#define ANGLE_RESTRICTED_TRACES_AUTOGEN_H_

#include <EGL/egl.h>
#include <KHR/khrplatform.h>
#include <cstdint>
#include <vector>

#include "restricted_traces_export.h"

namespace trace_angle
{
using GenericProc = void (*)();
using LoadProc    = GenericProc(KHRONOS_APIENTRY *)(const char *);
ANGLE_TRACE_LOADER_EXPORT void LoadEGL(LoadProc loadProc);
ANGLE_TRACE_LOADER_EXPORT void LoadGLES(LoadProc loadProc);
}  // namespace trace_angle

namespace angle
{
enum class RestrictedTraceID
{
    aliexpress,
    among_us,
    angry_birds_2_1500,
    arena_of_valor,
    asphalt_8,
    avakin_life,
    aztec_ruins,
    beach_buggy_racing,
    brawl_stars,
    bricks_breaker_quest,
    bubble_shooter,
    bus_simulator_indonesia,
    call_break_offline_card_game,
    candy_crush_500,
    candy_crush_soda_saga,
    car_parking_multiplayer,
    clash_of_clans,
    clash_royale,
    cod_mobile,
    coin_master,
    command_and_conquer_rivals,
    cookie_run_kingdom,
    disney_tsum_tsum,
    dr_driving,
    dragon_ball_legends,
    dragon_raja,
    efootball_pes_2021,
    egypt_1500,
    eight_ball_pool,
    extreme_car_driving_simulator,
    fallout_shelter_online,
    farm_heroes_saga,
    fate_grand_order,
    fifa_mobile,
    final_fantasy,
    free_fire,
    gardenscapes,
    genshin_impact,
    google_maps,
    happy_color,
    hay_day,
    hearthstone,
    higgs_domino_island,
    hill_climb_racing,
    homescapes,
    idle_heroes,
    junes_journey,
    kartrider_rush,
    klondike_adventures,
    league_of_legends_wild_rift,
    lego_legacy,
    lineage_m,
    ludo_king,
    magic_tiles_3,
    manhattan_10,
    manhattan_31,
    mario_kart_tour,
    marvel_contest_of_champions,
    messenger_lite,
    minecraft,
    mobile_legends,
    nba2k20_800,
    one_punch_man,
    plants_vs_zombies_2,
    pokemon_go,
    professional_baseball_spirits,
    pubg_mobile_battle_royale,
    pubg_mobile_lite,
    pubg_mobile_skydive,
    ragnarok_m_eternal_love,
    raid_shadow_legends,
    real_commando_secret_mission,
    real_cricket_20,
    real_gangster_crime,
    rise_of_kingdoms,
    romancing_saga,
    rope_hero_vice_town,
    saint_seiya_awakening,
    sakura_school_simulator,
    scrabble_go,
    shadow_fight_2,
    slingshot_test1,
    slingshot_test2,
    sniper_3d,
    sonic_the_hedgehog,
    standoff_2,
    subway_princess_runner,
    subway_surfers,
    summoners_war,
    talking_tom_hero_dash,
    temple_run_2,
    temple_run_300,
    toon_blast,
    township,
    trex_200,
    whatsapp,
    world_of_tanks_blitz,
    world_war_doh,
    worms_zone_io,
    InvalidEnum,
    EnumCount = InvalidEnum
};

static constexpr size_t kTraceInfoMaxNameLen = 32;

static constexpr uint32_t kDefaultReplayContextClientMajorVersion = 3;
static constexpr uint32_t kDefaultReplayContextClientMinorVersion = 1;
static constexpr uint32_t kDefaultReplayDrawSurfaceColorSpace     = EGL_COLORSPACE_LINEAR;

struct TraceInfo
{
    uint32_t contextClientMajorVersion;
    uint32_t contextClientMinorVersion;
    uint32_t startFrame;
    uint32_t endFrame;
    uint32_t drawSurfaceWidth;
    uint32_t drawSurfaceHeight;
    uint32_t drawSurfaceColorSpace;
    char name[kTraceInfoMaxNameLen];
};

ANGLE_TRACE_EXPORT const TraceInfo &GetTraceInfo(RestrictedTraceID traceID);
}  // namespace angle

#endif  // ANGLE_RESTRICTED_TRACES_AUTOGEN_H_
