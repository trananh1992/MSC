#ifndef MEMORY_H
#define MEMORY_H

#include "basic.h"

const DWORD characterBase = 0x019B3C34; //A1 ? ? ? ? 85 C0 75 ? 5F C3 8D 48
const DWORD characterX = 0xB73C; //89 8E ? ? ? ? 8B 50 ? 8B 06 89 96 ? ? ? ? 8B 50
const DWORD characterY = characterX + 4;

const DWORD guiBase = 0x019B3C38; //8B ? ? ? ? ? 56 E8 ? ? ? ? C7 ? ? ? FF FF FF FF 3B ? 74 ? 83 ? ? 56 E8
const DWORD guiHealth = 0x2574; //89 8E ? ? 00 00 80 BE ? ? 00 00 00 75
const DWORD guiMana = guiHealth + 4;

const DWORD alertBase = 0x019B838C; //8B 15 ? ? ? ? 8B 4A ? 8D 0C 89
const WORD hpAlert = 0x50;
const DWORD mpAlert = hpAlert + 4;

const DWORD mapBase = 0x019B8908; //8B 0D ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ? 85 C9 ? ? ? ? ? ? E8
const DWORD mapId = 0x1378; //8B 8F ? ? ? ? ? ? 8B 0D ? ? ? ? 8D 54

const DWORD wallBase = 0x019B82E0; //A1 ? ? ? ? 8B 50 ? 83 C0
const WORD leftWall = 0x1C;
const WORD topWall = 0x20; // leftWall + 4
const WORD rightWall = 0x24; // topWall + 4
const WORD bottomWall = 0x28; // rightWall + 4

const DWORD monsterBase = 0x019B82D8; //8B 0D ? ? ? ? ? E8 ? ? ? ? 8B ? 85 ? 74 ? 8B ? ? 8B ? ? 8D
const WORD monsterCount = 0x10; //8B 52 ? 83 C7 ? 8D 44 24 ? 50 8B CF FF D2 8B 00 89
const WORD monster1 = 0x28; //89 7E ? 89 7E ? ? ? ? ? ? 89 46
const BYTE monster2 = 0x4; //89 7B ? 89 ? 24 ? 0F ? D6
const DWORD monster3 = 0x194; //89 ? ? ? ? 00 89 ? ? ? ? 00 89 ? ? ? ? 00 89 ? ? ? ? 00 89 ? ? ? ? 00 89 ? ? ? ? 00 89 ? ? ? ? 00 C7 ? ? ? ? 00 ? ? ? ? 89 ? ? ? ? 00 89 ? ? ? ? 00 89 ? ? ? ? 00 8B ? 24 [1st Result]
const WORD monster4 = 0x24; //89 ? 24 ? C7 01 ? ? ? ? 89 59 ? C7
const WORD monsterX = 0x58; //89 ? ? 8D ? ? 89 ? 8D ? ? 89 ? 8D
const WORD monsterY = monsterX + 4;
const DWORD monsterDeath = 0x560; //89 86 ? ? ? ? 89 86 ? ? ? ? 33 C0 89 86

const DWORD platformBase = 0x019B82E0; //8B ? ? ? ? ? E8 ? ? ? ? 89 ? ? ? E8 ? ? ? ? 8D

const DWORD dwNewTeleportXYCall1 = 0x0119B890; // 8B ? ? ? ? ? 85 ? 74 ? 83 ? ? 74 ? 83 ? ? C3 33 ? C3 CC CC CC CC CC CC CC CC CC CC 8B 44 [Third Result]
const DWORD dwNewTeleportXYCall2 = 0x012D3B40; // 8B ? ? ? 8B ? ? 8B ? ? 56 8D ? ? 8B ? ? ? 51 52 56 FF ? 85 ? 7D ? 68 ? ? ? ? 56 50 E8 ? ? ? ? 5E C2 [First Result]

#endif