project(eos_chess)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( eos_chess eos_chess eos_chess.cpp )
target_include_directories( eos_chess PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( eos_chess ${CMAKE_SOURCE_DIR}/../ricardian )