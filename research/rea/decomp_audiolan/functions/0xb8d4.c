// rea decompile_all
// name: FUN_0000b8d4
// address: 0xb8d4
// body: available
// range: 0xb8d4-0xba63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xba60 to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000b8d4(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  int *piStack_30;
  int *piStack_2c;
  undefined1 auStack_28 [8];
  int *piStack_20;
  int *piStack_18;
  int *piStack_14;
  
  iVar2 = (**(code **)(*param_1 + 0x10))(param_1);
  if (iVar2 == 7) {
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  bVar6 = uVar3 != 9;
  if (bVar6) {
    uVar3 = (uint)*(byte *)(param_1 + 0x17);
  }
  if (!bVar6 || uVar3 == 0) {
    return;
  }
  iVar2 = param_1[2];
  FUN_001a0700(_DAT_0000bef0);
  piStack_30 = *(int **)(iVar2 + 0x148);
  piStack_2c = *(int **)(iVar2 + 0x14c);
  if (piStack_2c == (int *)0x0) {
    if (piStack_30 != (int *)0x0) goto LAB_0000ba60;
  }
  else {
    if (piStack_30 == (int *)0x0) goto LAB_0000ba60;
    *piStack_2c = *piStack_2c + 1;
  }
  FUN_001a0d18(_DAT_0000bef0);
  piVar1 = piStack_30;
  if (piStack_30 != (int *)0x0) {
    pcVar4 = (char *)FUN_0008b7dc(auStack_28,param_1[2] + 0x13c);
    *(undefined4 *)pcVar4 = s_A_X0__USBMidiInStreamBlock_0000bef2._2_4_;
    uVar5 = (**(code **)(*piStack_20 + 0x2c))();
    (**(code **)(*piVar1 + 0x3c))(piVar1,param_1[0x18],uVar5);
    FUN_0008b818(auStack_28);
    iVar2 = param_1[2];
    FUN_001a0700(_DAT_0000bef0);
    piStack_18 = *(int **)(iVar2 + 0x148);
    piStack_14 = *(int **)(iVar2 + 0x14c);
    if (piStack_14 == (int *)0x0) {
      if (piStack_18 != (int *)0x0) goto LAB_0000ba60;
    }
    else {
      if (piStack_18 == (int *)0x0) {
LAB_0000ba60:
                    /* WARNING: Subroutine does not return */
        FUN_000032f8();
      }
      *piStack_14 = *piStack_14 + 1;
    }
    FUN_001a0d18(_DAT_0000bef0);
    (**(code **)(*piStack_18 + 0x28))(piStack_18,param_1 + 0x16);
    FUN_001b995c(&piStack_18);
  }
  param_1[0x18] = -1;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_001b995c(&piStack_30);
  return;
}

