// rea decompile_all
// name: FUN_00073958
// address: 0x73958
// body: available
// range: 0x73958-0x73b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00073958(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  FUN_001a6044();
  uVar3 = FUN_001c0580();
  FUN_00006604(param_3,uVar3);
  FUN_001a6044();
  uVar4 = FUN_001c0580();
  if (extraout_r1 + param_4 <= uVar4) {
    return param_3;
  }
  uVar4 = 0;
  uVar9 = 0;
  if (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(param_2 + 4) + uVar9 * 4);
      if (iVar6 != 0) {
        iVar5 = FUN_001c7218(iVar6,DAT_00073b2c,DAT_00073b28,0xffffffff);
        if (iVar5 != 0) {
          iVar7 = FUN_001b2330();
          if (iVar7 == 0) {
            iVar7 = 1;
          }
          else {
            iVar7 = 8;
          }
          iVar8 = FUN_001b233c(iVar5);
          uVar1 = iVar7 * iVar8 * 4;
          if (uVar4 <= uVar1 && uVar1 - uVar4 != 0) {
            uVar4 = uVar1;
          }
          FUN_00064130(iVar5,1);
          FUN_0006413c(iVar5,0);
          FUN_00063e50(iVar5);
        }
        iVar6 = FUN_001c7218(iVar6,DAT_00073b2c,DAT_00073b30,0xffffffff);
        if (iVar6 != 0) {
          iVar5 = FUN_001b2e90();
          if (iVar5 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = 8;
          }
          iVar7 = FUN_001b2e9c(iVar6);
          uVar1 = iVar5 * iVar7 * 4;
          if (uVar4 <= uVar1 && uVar1 - uVar4 != 0) {
            uVar4 = uVar1;
          }
          FUN_00075f2c(iVar6,1);
          FUN_00075ca4(iVar6);
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2));
    if (uVar4 != 0) goto LAB_00073aac;
  }
  uVar4 = param_4;
LAB_00073aac:
  FUN_001a6044();
  iVar6 = FUN_001c0580();
  if (iVar6 <= (int)uVar4) {
    return param_3;
  }
  FUN_001a6044();
  iVar6 = FUN_001c0580();
  FUN_001a6044();
  uVar3 = FUN_001c0580();
  FUN_00006604(param_3,uVar3);
  iVar7 = (iVar6 - extraout_r1_00) + param_3;
  iVar8 = 0;
  iVar5 = param_3 + uVar4 + 8;
  iVar6 = param_3;
  do {
    iVar2 = iVar5;
    if ((int)(param_3 + param_4) < iVar2) {
LAB_00073b20:
      return param_3 + iVar8;
    }
    if (iVar7 < iVar2) {
      iVar8 = iVar7 - iVar6;
      goto LAB_00073b20;
    }
    iVar5 = iVar2 + uVar4;
    iVar6 = iVar2;
  } while( true );
}

