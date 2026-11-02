// rea decompile_all
// name: FUN_001a5110
// address: 0x1a5110
// body: available
// range: 0x1a5110-0x1a52ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a5110(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 auStack_b0 [99];
  undefined1 uStack_4d;
  undefined1 auStack_4c [48];
  
  piVar8 = *(int **)(param_1 + 8);
  piVar7 = *(int **)(param_1 + 0xc);
  if (piVar7 != piVar8) {
    do {
      piVar2 = (int *)*piVar8;
      if (piVar2 != param_2) {
        piVar8 = piVar8 + 2;
      }
    } while (piVar2 != param_2 && piVar7 != piVar8);
  }
  if (piVar7 == piVar8) {
    return -0x7b;
  }
  if (piVar8[1] == 0) {
    uVar3 = (**(code **)(*param_2 + 8))(param_2);
    FUN_001a4cc0(auStack_4c,uVar3);
    uVar3 = FUN_001b2c38(param_2);
    puVar1 = _DAT_001a52ac;
    FUN_000028f8(auStack_b0,99,s_T___s___s_001a52ad + 3,uVar3);
    uStack_4d = 0;
    uVar3 = FUN_001c02d4(auStack_4c,*puVar1);
    iVar4 = FUN_0005d7d0(*(undefined4 *)(param_1 + 0x20),uVar3,0xffffffff,0);
    if (iVar4 == 0) {
      FUN_001a506c(auStack_4c);
      return -0x67;
    }
    iVar5 = FUN_001c0318(auStack_4c,*puVar1);
    if (iVar4 == -1) {
      iVar6 = FUN_001c046c(auStack_4c);
      iVar6 = *(int *)(iVar5 + 0x10) + iVar6;
      uVar3 = *(undefined4 *)(iVar5 + 0x14);
      iVar5 = *(int *)(param_1 + 4) + *(int *)(iVar5 + 0xc);
    }
    else {
      iVar6 = FUN_001c046c(auStack_4c);
      uVar3 = *(undefined4 *)(iVar5 + 0x14);
      iVar6 = *(int *)(iVar5 + 0x10) + iVar6;
      iVar5 = iVar4;
    }
    FUN_000039e0(iVar5,iVar6,uVar3);
    iVar5 = FUN_001a4a20(auStack_4c,iVar4,param_1 + 0x128,*(undefined4 *)(param_1 + 0x144));
    if (iVar5 != 0) {
      FUN_001a506c(auStack_4c);
      return iVar5;
    }
    FUN_00073264(param_2,iVar4);
    FUN_001a506c(auStack_4c);
  }
  piVar8[1] = piVar8[1] + 1;
  return 0;
}

