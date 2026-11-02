// rea decompile_all
// name: FUN_00025032
// address: 0x25032
// body: available
// range: 0x25032-0x25223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00025032(undefined4 param_1,ushort *param_2,ushort *param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = 0;
  do {
    bVar1 = *(byte *)((int)param_2 + iVar5 + 2);
    bVar2 = *(byte *)((int)param_3 + iVar5 + 2);
    if ((bVar2 < bVar1) || (bVar1 < bVar2)) {
      iVar5 = 0;
      while( true ) {
        bVar1 = *(byte *)((int)param_2 + iVar5 + 0x10);
        bVar2 = *(byte *)((int)param_3 + iVar5 + 0x10);
        if ((bVar2 < bVar1) || (bVar1 < bVar2)) break;
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
        if (7 < iVar5) {
          uVar3 = CONCAT11((char)param_2[0x11],*(undefined1 *)((int)param_2 + 0x23));
          uVar4 = CONCAT11((char)param_3[0x11],*(undefined1 *)((int)param_3 + 0x23));
          if (uVar4 < uVar3) {
            return 4;
          }
          if (uVar4 <= uVar3) {
            return 6;
          }
          return 3;
        }
      }
      if ((byte)param_2[5] < (byte)param_3[5]) {
        return 1;
      }
      if ((byte)param_3[5] < (byte)param_2[5]) {
        return 2;
      }
      if ((byte)param_2[6] < (byte)param_3[6]) {
        return 1;
      }
      if ((byte)param_2[6] <= (byte)param_3[6]) {
        if (*(byte *)((int)param_2 + 0xd) < *(byte *)((int)param_3 + 0xd)) {
          return 1;
        }
        if (*(byte *)((int)param_3 + 0xd) < *(byte *)((int)param_2 + 0xd)) {
          return 2;
        }
        if (param_2[7] < param_3[7]) {
          return 1;
        }
        if (param_2[7] <= param_3[7]) {
          if (*(byte *)((int)param_2 + 0xb) < *(byte *)((int)param_3 + 0xb)) {
            return 1;
          }
          if (*(byte *)((int)param_2 + 0xb) <= *(byte *)((int)param_3 + 0xb)) {
            iVar5 = 0;
            do {
              bVar1 = *(byte *)((int)param_2 + iVar5 + 2);
              bVar2 = *(byte *)((int)param_3 + iVar5 + 2);
              if (bVar2 < bVar1) {
                return 2;
              }
            } while ((bVar2 <= bVar1) && (iVar5 = (iVar5 + 1) * 0x10000 >> 0x10, iVar5 < 8));
            return 1;
          }
          return 2;
        }
        return 2;
      }
      return 2;
    }
    iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
  } while (iVar5 < 8);
  uVar6 = (uint)*param_2;
  uVar7 = (uint)*param_3;
  if (uVar6 + 1 < uVar7) {
    return 1;
  }
  if (uVar6 <= uVar7 + 1) {
    if (uVar6 <= uVar7) {
      if (uVar6 < uVar7) {
        iVar5 = 0;
        do {
          bVar1 = *(byte *)((int)param_3 + iVar5 + 0x1a);
          bVar2 = *(byte *)((int)param_3 + iVar5 + 0x10);
          if (bVar2 < bVar1) {
            iVar5 = 1;
LAB_000250de:
            if (iVar5 == -1) {
              return 1;
            }
            if (iVar5 != 1) {
              return 6;
            }
            return 3;
          }
          if (bVar1 < bVar2) {
            iVar5 = -1;
            goto LAB_000250de;
          }
          iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
        } while (iVar5 < 8);
        uVar3 = CONCAT11((char)param_3[0x11],*(undefined1 *)((int)param_3 + 0x23));
        uVar4 = CONCAT11((char)param_3[0xc],*(undefined1 *)((int)param_3 + 0x19));
        if (uVar3 <= uVar4) {
          if (uVar3 < uVar4) {
            return 1;
          }
          return 6;
        }
      }
      else {
        iVar5 = 0;
        do {
          bVar1 = *(byte *)((int)param_2 + iVar5 + 0x10);
          bVar2 = *(byte *)((int)param_3 + iVar5 + 0x10);
          if (bVar2 < bVar1) {
            iVar5 = 1;
LAB_00025126:
            if (iVar5 == -1) {
              return 3;
            }
            if (iVar5 == 1) {
              return 4;
            }
            goto LAB_0002512e;
          }
          if (bVar1 < bVar2) {
            iVar5 = -1;
            goto LAB_00025126;
          }
          iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
        } while (iVar5 < 8);
        uVar3 = CONCAT11((char)param_2[0xc],*(undefined1 *)((int)param_2 + 0x19));
        uVar4 = CONCAT11((char)param_3[0xc],*(undefined1 *)((int)param_3 + 0x19));
        if (uVar4 < uVar3) {
          return 4;
        }
        if (uVar4 <= uVar3) {
LAB_0002512e:
          uVar3 = CONCAT11((char)param_2[0x11],*(undefined1 *)((int)param_2 + 0x23));
          uVar4 = CONCAT11((char)param_3[0x11],*(undefined1 *)((int)param_3 + 0x23));
          if (uVar4 < uVar3) {
            return 4;
          }
          if (uVar4 <= uVar3) {
            return 7;
          }
        }
      }
      return 3;
    }
    iVar5 = 0;
    do {
      bVar1 = *(byte *)((int)param_2 + iVar5 + 0x1a);
      bVar2 = *(byte *)((int)param_2 + iVar5 + 0x10);
      if (bVar2 < bVar1) {
        iVar5 = 1;
LAB_00025092:
        if (iVar5 == -1) {
          return 2;
        }
        if (iVar5 == 1) {
          return 4;
        }
        return 6;
      }
      if (bVar1 < bVar2) {
        iVar5 = -1;
        goto LAB_00025092;
      }
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 8);
    uVar3 = CONCAT11((char)param_2[0x11],*(undefined1 *)((int)param_2 + 0x23));
    uVar4 = CONCAT11((char)param_2[0xc],*(undefined1 *)((int)param_2 + 0x19));
    if (uVar4 < uVar3) {
      return 4;
    }
    if (uVar4 <= uVar3) {
      return 6;
    }
  }
  return 2;
}

