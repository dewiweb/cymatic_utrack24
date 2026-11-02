// rea decompile_all
// name: FUN_00037a00
// address: 0x37a00
// body: available
// range: 0x37a00-0x37bc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037a00(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_2 + 200);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30) + 1) {
    FUN_00024642(0,DAT_00037bc4);
  }
  iVar3 = param_2 + 0x130;
  if (*(int *)(param_2 + 200) == 0) {
    uVar4 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
    FUN_00024642(0,s_Dc__PenalizeDNSServer__ERROR___N_00037c08 + 4,iVar3,uVar4,
                 *(undefined1 *)(param_2 + 0xd8));
  }
  else {
    if (*DAT_00037bc8 != 0) {
      uVar4 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
      iVar5 = *(int *)(param_2 + 200);
      FUN_00024642(3,_DAT_00037bcc,iVar5 + 8,
                   (*(uint *)(iVar5 + 0x1c) & 0xff) << 8 | (*(uint *)(iVar5 + 0x1c) & 0xffff) >> 8,
                   iVar5 + 0x2c,param_2,iVar3,uVar4,*(undefined4 *)(param_2 + 0x244));
    }
    piVar1 = DAT_00037bc8;
    if (*(int *)(s_b__P1__PenalizeDNSServer__Strict_00037bcd._3_4_ + 8) == 0) {
      if (*DAT_00037bc8 != 0) {
        FUN_00024642(3,s_PenalizeDNSServer__Strict_Unicas_00037c48);
      }
      if (*(short *)(param_2 + 0x230) == 0xc) {
        if (*piVar1 != 0) {
          FUN_00024642(3,s___PenalizeDNSServer__Not_Penaliz_00037cae + 2);
        }
      }
      else {
        if (*piVar1 != 0) {
          FUN_00024642(3,s_PenalizeDNSServer__Penalizing_qu_00037c7c);
        }
        iVar5 = *(int *)(param_1 + 0xdc) + *_DAT_00037cac * 0x3c;
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        *(int *)(*(int *)(param_2 + 200) + 300) = iVar5;
      }
    }
    else if (*DAT_00037bc8 != 0) {
      FUN_00024642(3,s_b__P1__PenalizeDNSServer__Strict_00037bcd + 7);
    }
  }
  iVar5 = FUN_00022b4c(param_1,param_2);
  if (iVar5 == iVar2) {
    if (iVar5 == 0) {
      FUN_00024642(0,DAT_00037ce0);
    }
    else {
      FUN_00024642(0,s_Dc__PenalizeDNSServer__ERROR___N_00037c08._0_4_,iVar5 + 8,
                   (*(uint *)(iVar5 + 0x1c) & 0xff) << 8 | (*(uint *)(iVar5 + 0x1c) & 0xffff) >> 8);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  FUN_0001f48c(param_1,param_2,iVar5);
  if (iVar5 == 0) {
    if (*DAT_00037bc8 != 0) {
      uVar4 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
      FUN_00024642(3,DAT_00037ce8,param_2,iVar3,uVar4,*(undefined4 *)(param_2 + 0x10));
    }
  }
  else {
    if (*DAT_00037bc8 != 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 200) + 0x1c);
      uVar4 = FUN_000203e4(*(undefined2 *)(param_2 + 0x230));
      FUN_00024642(3,DAT_00037ce4,iVar3,uVar4,*(int *)(param_2 + 200) + 8,
                   (uVar6 & 0xff) << 8 | (uVar6 & 0xffff) >> 8,*(int *)(param_2 + 200) + 0x2c);
    }
    if (*(short *)(param_2 + 0xd6) == 0) {
      FUN_0016db4c(*_DAT_00037cac + 2);
      *(int *)(param_2 + 0x10) = extraout_r1;
      *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0xdc) - extraout_r1;
      FUN_0003f5f0(param_1,param_2);
    }
  }
  *(undefined1 *)(param_2 + 0xd8) = 0;
  return;
}

