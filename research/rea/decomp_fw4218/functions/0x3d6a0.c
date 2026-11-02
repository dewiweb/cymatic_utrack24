// rea decompile_all
// name: FUN_0003d6a0
// address: 0x3d6a0
// body: available
// range: 0x3d6a0-0x3d863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003d6a0(int param_1,int param_2)

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
    FUN_0002a1c6(0,DAT_0003d864);
  }
  iVar3 = param_2 + 0x130;
  if (*(int *)(param_2 + 200) == 0) {
    uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x230));
    FUN_0002a1c6(0,s___PenalizeDNSServer__ERROR___Nul_0003d8aa + 2,iVar3,uVar4,
                 *(undefined1 *)(param_2 + 0xd8));
  }
  else {
    if (*DAT_0003d868 != 0) {
      uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x230));
      iVar5 = *(int *)(param_2 + 200);
      FUN_0002a1c6(3,DAT_0003d86c,iVar5 + 8,
                   (*(uint *)(iVar5 + 0x1c) & 0xff) << 8 | (*(uint *)(iVar5 + 0x1c) & 0xffff) >> 8,
                   iVar5 + 0x2c,param_2,iVar3,uVar4,*(undefined4 *)(param_2 + 0x244));
    }
    piVar1 = DAT_0003d868;
    if (*(int *)(_DAT_0003d870 + 8) == 0) {
      if (*DAT_0003d868 != 0) {
        FUN_0002a1c6(3,s_PenalizeDNSServer__Strict_Unicas_0003d8e8);
      }
      if (*(short *)(param_2 + 0x230) == 0xc) {
        if (*piVar1 != 0) {
          FUN_0002a1c6(3,s_LW__PenalizeDNSServer__Not_Penal_0003d94c + 4);
        }
      }
      else {
        if (*piVar1 != 0) {
          FUN_0002a1c6(3,s_PenalizeDNSServer__Penalizing_qu_0003d91c);
        }
        iVar5 = *(int *)(param_1 + 0xdc) +
                *(int *)s_LW__PenalizeDNSServer__Not_Penal_0003d94c._0_4_ * 0x3c;
        if (iVar5 == 0) {
          iVar5 = 1;
        }
        *(int *)(*(int *)(param_2 + 200) + 300) = iVar5;
      }
    }
    else if (*DAT_0003d868 != 0) {
      FUN_0002a1c6(3,s_Q__PenalizeDNSServer__Strict_Uni_0003d871 + 3);
    }
  }
  iVar5 = FUN_000286a8(param_1,param_2);
  if (iVar5 == iVar2) {
    if (iVar5 == 0) {
      FUN_0002a1c6(0,DAT_0003d980);
    }
    else {
      FUN_0002a1c6(0,_DAT_0003d8a8,iVar5 + 8,
                   (*(uint *)(iVar5 + 0x1c) & 0xff) << 8 | (*(uint *)(iVar5 + 0x1c) & 0xffff) >> 8);
    }
    *(undefined4 *)(param_2 + 0x10) = 0;
    return;
  }
  FUN_0002525c(param_1,param_2,iVar5);
  if (iVar5 == 0) {
    if (*DAT_0003d868 != 0) {
      uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x230));
      FUN_0002a1c6(3,DAT_0003d988,param_2,iVar3,uVar4,*(undefined4 *)(param_2 + 0x10));
    }
  }
  else {
    if (*DAT_0003d868 != 0) {
      uVar6 = *(uint *)(*(int *)(param_2 + 200) + 0x1c);
      uVar4 = FUN_00025930(*(undefined2 *)(param_2 + 0x230));
      FUN_0002a1c6(3,DAT_0003d984,iVar3,uVar4,*(int *)(param_2 + 200) + 8,
                   (uVar6 & 0xff) << 8 | (uVar6 & 0xffff) >> 8,*(int *)(param_2 + 200) + 0x2c);
    }
    if (*(short *)(param_2 + 0xd6) == 0) {
      FUN_001c6ed0(*(int *)s_LW__PenalizeDNSServer__Not_Penal_0003d94c._0_4_ + 2);
      *(int *)(param_2 + 0x10) = extraout_r1;
      *(int *)(param_2 + 0xc) = *(int *)(param_1 + 0xdc) - extraout_r1;
      FUN_00044250(param_1,param_2);
    }
  }
  *(undefined1 *)(param_2 + 0xd8) = 0;
  return;
}

