#pragma once

#include <string>

#include <eosio/asset.hpp>
#include <eosio/eosio.hpp>
#include <eosio/time.hpp>

namespace fsm {
    enum state : uint8_t {
        //running game states
        P1_MOVE,
        P2_MOVE,

        // game over game states
        CREATED,
        P1_DEPOSITED,
        ALL_DEPOSITED,

        //winning states
        P1_WIN,
        P2_WIN,
        DRAW,

        //won by no action
        P1_WIN_EXPIRED,
        P2_WIN_EXPIRED,
        NEVER_STARTED

    }

    struct game_data {
        // default constructor needed for multi_index default initialization
        game_data() : board1(), state(CREATED) {}
        game_data(const eosio::checksum256 &commitment)
            : board1(commitment), board2(), state(CREATED) {}
        // is used as state struct, but cannot be serialized by EOS
        uint8_t state;
        logic::board board1;

        EOSLIB_SERIALIZE(game_data, (state)(board1)(board2))
    };

}