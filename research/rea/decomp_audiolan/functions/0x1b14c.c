// rea decompile_all
// name: FUN_0001b14c
// address: 0x1b14c
// body: available
// range: 0x1b14c-0x1b2c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001b14c(int param_1,int param_2,int param_3)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x138);
  if (iVar8 == 0) {
    uVar4 = FUN_0002272c(param_2 + 4,*(int *)(param_2 + 0x24) + 4,param_1 + 0x37);
    FUN_00024642(0,DAT_0001b310,uVar4);
    return;
  }
  if ((((param_3 == 0) || (*(short *)(iVar8 + 0x230) == 5)) || (*(char *)(param_2 + 4) == -0x10)) ||
     (*(short *)(param_2 + 6) != 5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((*(byte *)(param_2 + 4) & 0x3f) >> 2 != 0) {
    if (param_3 != 0) {
      *(undefined1 *)(param_2 + 0x7d) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar3;
    if (*(int *)(param_1 + 0x2c) != iVar3) {
      FUN_00024642(0,s____s__Locking_Failure__mDNS_busy_0001b2ce + 2,_DAT_0001b2cc,
                   *(int *)(param_1 + 0x2c),iVar3);
    }
    pcVar5 = *(code **)(iVar8 + 600);
    if ((pcVar5 != entry) && (*(char *)(iVar8 + 0xfe) == '\0')) {
      iVar7 = -1;
      iVar3 = iVar7;
      if (param_3 != 0) {
        iVar3 = 1;
      }
      *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + iVar3;
      if (((*(char *)(param_2 + 0x78) == '\x02') && ((*(byte *)(param_2 + 4) & 0x32) != 0)) &&
         ((sVar1 = *(short *)(param_2 + 6), sVar1 == 1 || ((sVar1 == 0x1c || (sVar1 == 5)))))) {
        if ((!bVar2) || (*(int *)(iVar8 + 0x240) != 0)) {
          *(undefined4 *)(iVar8 + 0x10) = 0;
          if (param_3 != 0) {
            iVar7 = 1;
          }
          *(char *)(iVar8 + 0xb8) = *(char *)(iVar8 + 0xb8) + (char)iVar7;
          (*pcVar5)(param_1,iVar8,param_2 + 4,param_3);
        }
        if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
          FUN_00024642(0,s____s__Unlocking_Failure__mDNS_bu_0001b31e + 2,_DAT_0001b2cc,
                       *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
        if (!bVar2) {
          return;
        }
        if (*(int *)(param_1 + 0x138) != iVar8) {
          return;
        }
        FUN_0001b360(param_1,iVar8,param_2 + 4);
        return;
      }
      (*pcVar5)(param_1,iVar8,param_2 + 4,param_3);
    }
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
      FUN_00024642(0,s____s__Unlocking_Failure__mDNS_bu_0001b31e + 2,_DAT_0001b2cc,
                   *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    return;
  }
  uVar4 = FUN_0002272c(param_2 + 4,*(int *)(param_2 + 0x24) + 4,param_1 + 0x37);
  if (param_3 == 0) {
    puVar6 = &DAT_0001b318;
  }
  else {
    puVar6 = &DAT_0001b314;
  }
  FUN_00024642(0,_DAT_0001b31c,puVar6,*(undefined1 *)(param_2 + 4),uVar4);
  return;
}

