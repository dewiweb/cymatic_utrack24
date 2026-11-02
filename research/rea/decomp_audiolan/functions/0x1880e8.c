// rea decompile_all
// name: FUN_001880e8
// address: 0x1880e8
// body: available
// range: 0x1880e8-0x18834b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001880e8(char *param_1,int param_2,byte *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint local_3c;
  
  iVar7 = 0xe0;
  cVar1 = *param_1;
  uVar4 = (uint)(byte)(cVar1 - 2);
  FUN_00187fac(uVar4,param_1,param_1 + uVar4);
  cVar3 = '\x02';
LAB_00188324:
  do {
    while( true ) {
      cVar6 = cVar3 + -1;
      if (cVar3 == '\0') {
        return iVar7;
      }
      if (iVar7 == 0) {
        return 0;
      }
      iVar7 = FUN_001889b0(cVar1,param_1);
      cVar3 = cVar6;
      if (iVar7 == 0) break;
      iVar5 = FUN_00188094(param_2,param_3);
      if (iVar5 == 0xe7) {
        return iVar7;
      }
    }
    FUN_00182740(param_4);
    cVar6 = '\x02';
LAB_00188300:
    do {
      if (cVar6 == '\0') goto LAB_00188324;
      for (uVar4 = 0; local_3c = param_5 * 1000 + 0x25, (int)uVar4 < param_2;
          uVar4 = uVar4 + 1 & 0xff) {
        param_3[uVar4] = 0;
      }
      do {
        iVar7 = FUN_00188884(param_2,param_3);
        if (local_3c - 0x25 < 0x26) break;
        local_3c = local_3c - 0x25;
      } while (iVar7 == 0xe7);
      if (iVar7 == 0xe7) {
        iVar5 = FUN_00188094(param_2,param_3);
        if (iVar5 == 0xe7) {
          return 0xe7;
        }
        goto LAB_00188324;
      }
      if (iVar7 != 0xe4) {
        iVar7 = FUN_0018803c(param_3);
        if (iVar7 == 0) {
          if (4 < *param_3) {
            return 0;
          }
          bVar2 = param_3[1];
          if (bVar2 == 3) {
            return 0xd2;
          }
          if (bVar2 == 0xf) {
            return 0xd3;
          }
          if (bVar2 == 0xff) {
            iVar7 = 0xd4;
          }
          else {
            if (bVar2 != 5) {
              return 0;
            }
            iVar7 = 0xd6;
          }
          goto LAB_00188324;
        }
        iVar5 = FUN_00188094(param_2,param_3);
        cVar6 = cVar6 + -1;
        if (iVar5 != 0) {
          if (iVar5 != 0xe8) {
            return iVar7;
          }
          goto LAB_00188324;
        }
        goto LAB_00188300;
      }
      iVar5 = FUN_00188094(param_2,param_3);
      cVar6 = cVar6 + -1;
    } while (iVar5 == 0);
    if (iVar5 != 0xe8) {
      return 0xe4;
    }
  } while( true );
}

