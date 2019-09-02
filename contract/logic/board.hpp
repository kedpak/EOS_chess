#pragma once

#include <algorithm>  // std::min
#include <string>

#include <eosio/asset.hpp>
#include <eosio/eosio.hpp>
#include <eosio/time.hpp>
#include <eosio/eos_chess.hpp>


namespace logic {
    static const uint8_t BOARD_WIDTH = 8;
    static const uint8_t TILES_SIZE = BOARD_WIDTH * BOARD_WIDTH;

    enum tile : uint8_t {
        UNKNOWN,
        MOVE,
        CAPTURE,
        CASTLE,
        REVIVE,
        CHECK,
        CHECKMATE
    };

    

}