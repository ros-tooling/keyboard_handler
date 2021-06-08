// Copyright 2021 Apex.AI, Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "keyboard_handler/keyboard_handler_windows_impl.hpp"

// ch == 0 for F1 - F10 keys, ch == 0xE0 == 224 for all other control keys.
//* *INDENT-OFF* */

const KeyboardHandlerWindowsImpl::KeyMap KeyboardHandlerWindowsImpl::DEFAULT_STATIC_KEY_MAP[]  = {
  {KeyCode::CURSOR_UP,        {0xE0, 72}},
  {KeyCode::CURSOR_DOWN,      {0xE0, 80}},
  {KeyCode::CURSOR_RIGHT,     {0xE0, 77}},
  {KeyCode::CURSOR_LEFT,      {0xE0, 75}},
  {KeyCode::SPACE,            {32,   WinKeyCode::NOT_A_KEY}},
  {KeyCode::ESCAPE,           {27,   WinKeyCode::NOT_A_KEY}},
  {KeyCode::ENTER,            {13,   WinKeyCode::NOT_A_KEY}},
  {KeyCode::BACK_SPACE,       {8,    WinKeyCode::NOT_A_KEY}},

  {KeyCode::DELETE,           {0xE0, 83}},
  {KeyCode::END,              {0xE0, 79}},
  {KeyCode::PG_DOWN,          {0xE0, 81}},
  {KeyCode::PG_UP,            {0xE0, 73}},
  {KeyCode::HOME,             {0xE0, 71}},
  {KeyCode::INSERT,           {0xE0, 82}},

  {KeyCode::F1,               {0,    59}},
  {KeyCode::F2,               {0,    60}},
  {KeyCode::F3,               {0,    61}},
  {KeyCode::F4,               {0,    62}},
  {KeyCode::F5,               {0,    63}},
  {KeyCode::F6,               {0,    64}},
  {KeyCode::F7,               {0,    65}},
  {KeyCode::F8,               {0,    66}},
  {KeyCode::F9,               {0,    67}},
  {KeyCode::F10,              {0,    68}},
  {KeyCode::F11,              {0xE0, 133}},
  {KeyCode::F12,              {0xE0, 134}},

  {KeyCode::A,                {'a', WinKeyCode::NOT_A_KEY}},
  {KeyCode::B,                {'b', WinKeyCode::NOT_A_KEY}},
  {KeyCode::C,                {'c', WinKeyCode::NOT_A_KEY}},
  {KeyCode::D,                {'d', WinKeyCode::NOT_A_KEY}},
  {KeyCode::E,                {'e', WinKeyCode::NOT_A_KEY}},
  {KeyCode::F,                {'f', WinKeyCode::NOT_A_KEY}},
  {KeyCode::G,                {'g', WinKeyCode::NOT_A_KEY}},
  {KeyCode::H,                {'h', WinKeyCode::NOT_A_KEY}},
  {KeyCode::I,                {'i', WinKeyCode::NOT_A_KEY}},
  {KeyCode::J,                {'j', WinKeyCode::NOT_A_KEY}},
  {KeyCode::K,                {'k', WinKeyCode::NOT_A_KEY}},
  {KeyCode::L,                {'l', WinKeyCode::NOT_A_KEY}},
  {KeyCode::M,                {'m', WinKeyCode::NOT_A_KEY}},
  {KeyCode::N,                {'n', WinKeyCode::NOT_A_KEY}},
  {KeyCode::O,                {'o', WinKeyCode::NOT_A_KEY}},
  {KeyCode::P,                {'p', WinKeyCode::NOT_A_KEY}},
  {KeyCode::Q,                {'q', WinKeyCode::NOT_A_KEY}},
  {KeyCode::R,                {'r', WinKeyCode::NOT_A_KEY}},
  {KeyCode::S,                {'s', WinKeyCode::NOT_A_KEY}},
  {KeyCode::T,                {'t', WinKeyCode::NOT_A_KEY}},
  {KeyCode::U,                {'u', WinKeyCode::NOT_A_KEY}},
  {KeyCode::V,                {'v', WinKeyCode::NOT_A_KEY}},
  {KeyCode::W,                {'w', WinKeyCode::NOT_A_KEY}},
  {KeyCode::X,                {'x', WinKeyCode::NOT_A_KEY}},
  {KeyCode::Y,                {'y', WinKeyCode::NOT_A_KEY}},
  {KeyCode::Z,                {'z', WinKeyCode::NOT_A_KEY}},

  {KeyCode::NUMBER_1,         {'1', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_2,         {'2', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_3,         {'3', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_4,         {'4', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_5,         {'5', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_6,         {'6', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_7,         {'7', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_8,         {'8', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_9,         {'9', WinKeyCode::NOT_A_KEY}},
  {KeyCode::NUMBER_0,         {'0', WinKeyCode::NOT_A_KEY}},
  {KeyCode::MINUS,            {'-', WinKeyCode::NOT_A_KEY}},
  {KeyCode::EQUAL_SIGN,       {'=', WinKeyCode::NOT_A_KEY}},
};
/* *INDENT-ON* */

const size_t KeyboardHandlerWindowsImpl::STATIC_KEY_MAP_LENGTH =
  sizeof(KeyboardHandlerWindowsImpl::DEFAULT_STATIC_KEY_MAP) /
  sizeof(KeyboardHandlerWindowsImpl::KeyMap);
