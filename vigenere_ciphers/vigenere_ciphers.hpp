#ifndef VIGENERE_CIPHERS_HPP
#define VIGENERE_CIPHERS_HPP

#include "exceptions.hpp"
#include <algorithm>
#include <iostream>
#include <string>

/**
 * \file vigenere_ciphers.hpp
 *
 * This file contains definition all of functions
 *
 */

void vigenere_data_is_valid(const std::string &text, const std::string &key,
                            const std::string &alphabet);
std::string repeat_key_ciphering(const std::string &text,
                                 const std::string &key,
                                 const std::string &alphabet);
std::string repeat_key_deciphering(const std::string &ciphertext,
                                   const std::string &key,
                                   const std::string &alphabet);
std::string self_open_key_ciphering(const std::string &text,
                                    const std::string &key,
                                    const std::string &alphabet);
std::string self_open_key_deciphering(const std::string &ciphertext,
                                      const std::string &key,
                                      const std::string &alphabet);
std::string self_cipher_key_ciphering(const std::string &text,
                                      const std::string &key,
                                      const std::string &alphabet);
std::string self_cipher_key_deciphering(const std::string &ciphertext,
                                        const std::string &key,
                                        const std::string &alphabet);

#endif