/*
 * my_hash_BHAA.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Thomas Murgia <garuda1@protonmail.com>
 *
 */

#include <stdint.h>
#include <sys/types.h>
#include <unixlib-math.h>

uint64_t my_hash_BHAA(uint8_t *buf, size_t nb)
{
  uint64_t val;
  size_t i;

  val = nb % 0x10;
  i = 0;
  while (i < nb)
  {
    val &= ((buf[i] >> 5) + 0xA1B2) % 256;
    val ^= ((buf[i] << 5) + 0xC3D4) % 256;
    ++i;
  }
  val ^= ~(val & 8);
  return (val);
}
