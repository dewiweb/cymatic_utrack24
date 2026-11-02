// rea decompile_all
// name: FUN_0016e08c
// address: 0x16e08c
// body: available
// range: 0x16e08c-0x16e257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0016e08c(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_34 [2];
  int local_2c;
  int local_28;
  int *piStack_24;
  int iStack_20;
  int iStack_1c;
  int local_18;
  
  *param_1 = 0;
  if (param_3 == 0) {
    return -2;
  }
  if (((*(int *)(param_3 + 0x70) == 0) || (param_4 == 0)) || (param_5 == 0)) {
    return -5;
  }
  piStack_24 = param_1;
  iStack_20 = param_2;
  iStack_1c = param_3;
  local_18 = param_4;
  if ((code *)*DAT_0016e258 == entry) {
    iVar1 = FUN_0019b388(0x38);
  }
  else {
    iVar1 = (*(code *)*DAT_0016e258)(0x38);
  }
  *param_1 = iVar1;
  if (iVar1 == 0) {
    return -4;
  }
  FUN_000038a0(iVar1,0x38);
  *(undefined4 *)(*param_1 + 0x34) = 0;
  if (*(int *)(param_3 + 0xc) - 200U < 100) {
    *(undefined1 *)(*param_1 + 0x31) = 0x15;
  }
  else {
    *(undefined1 *)(*param_1 + 0x31) = 0x14;
  }
  iVar1 = FUN_001a2e10(*(undefined4 *)(param_3 + 0x4c),*param_1);
  if ((iVar1 != 0) || (iVar1 = FUN_001a7c44(local_18 + 8,&DAT_0016e25c,&local_28), iVar1 != 0)) {
    FUN_001a3a18(*param_1);
    *param_1 = 0;
    return iVar1;
  }
  uVar2 = FUN_001a6f50(*(undefined4 *)(local_28 + 4));
  *(undefined4 *)(*param_1 + 4) = uVar2;
  iVar1 = FUN_001a7c44(param_5 + 8,&DAT_0016e25c,&local_28);
  if (iVar1 == 0) {
    uVar2 = FUN_001a6f50(*(undefined4 *)(local_28 + 4));
    *(undefined4 *)(*param_1 + 8) = uVar2;
  }
  if (((param_2 != 0) &&
      (iVar1 = FUN_001a7c44(*(int *)(param_2 + 4) + 0x14,&DAT_0016e260,local_34), iVar1 == 0)) &&
     ((local_34[0] != 0 && (*(int *)(local_34[0] + 4) != 0)))) {
    uVar2 = FUN_001a6f50();
    *(undefined4 *)(*param_1 + 0xc) = uVar2;
  }
  FUN_001a4c50(*param_1 + 0x10);
  iVar1 = 0;
  local_2c = param_3 + 0x9c;
  while (iVar3 = FUN_001a4bc4(local_2c,iVar1), iVar3 == 0) {
    uVar2 = FUN_001a4bdc(local_2c,iVar1);
    iVar3 = FUN_001a3ee4(uVar2,local_34);
    if (iVar3 != 0) {
      FUN_001a3a18(*param_1);
      *param_1 = 0;
      return iVar3;
    }
    if (param_2 == 0) {
      FUN_001a4a80(*param_1 + 0x10,local_34[0],0);
    }
    else {
      FUN_001a4a80(*param_1 + 0x10,local_34[0],0xffffffff);
    }
    iVar1 = iVar1 + 1;
  }
  uVar2 = FUN_001a1aa8(*(undefined4 *)(*(int *)(param_3 + 0x70) + 4));
  *(undefined4 *)(*param_1 + 0x18) = uVar2;
  iVar1 = FUN_001a3ee4(param_5,*param_1 + 0x20);
  if ((iVar1 == 0) && (iVar1 = FUN_001a71c8(local_18,*param_1 + 0x24), iVar1 == 0)) {
    iVar1 = FUN_001a4bc4(param_6 + 0x58,0);
    if (iVar1 == 0) {
      uVar2 = FUN_001a4bdc(param_6 + 0x58,0);
      iVar1 = FUN_001a320c(uVar2,*param_1 + 0x28);
      if (iVar1 != 0) goto LAB_0016e248;
    }
    else {
      *(undefined4 *)(*param_1 + 0x28) = 0;
    }
    *(undefined4 *)(*param_1 + 0x2c) = 0xffffffff;
    return 0;
  }
LAB_0016e248:
  FUN_001a3a18(*param_1);
  *param_1 = 0;
  return iVar1;
}

