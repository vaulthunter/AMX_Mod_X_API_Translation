// vim: set ts=4 sw=4 tw=99 noet:
//
// AMX Mod X, based on AMX Mod by Aleksander Naszko ("OLO").
// Copyright (C) The AMX Mod X Development Team.
//
// This software is licensed under the GNU General Public License, version 3 or higher.
// Additional exceptions apply. For full license details, see LICENSE.txt or visit:
//     https://alliedmods.net/amxmodx-license

//
// Функции хранилища
//

#if defined _vault_included
  #endinput
#endif
#define _vault_included

/* Считывает данные из данного ключа.
* Если длина сообщения равна нулю, тогда get_vaultdata
* возвращает значение как число. */
native get_vaultdata(const key[], data[] = "", len = 0);

/* Устанавливает данные по заданному ключу. */
native set_vaultdata(const key[], const data[] = "");

/* Удаляет ключ из хранилища. */
native remove_vaultdata(const key[]);

/* Проверяет, существует ли ключ в хранилище. */
native vaultdata_exists(const key[]);
