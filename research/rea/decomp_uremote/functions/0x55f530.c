// rea decompile_all
// name: FUN_0055f530
// address: 0x55f530
// body: available
// range: 0x55f530-0x55f999 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055f530(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_68 [8];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [8];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d409e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0054f6b0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  FUN_005017d0();
  local_8 = 1;
  switch(param_2) {
  case 1:
    cVar1 = FUN_00501bd0();
    if (cVar1 == '\0') {
      FUN_00501d80(in_ECX + -0x128);
      break;
    }
  case 2:
    FUN_00501d80(in_ECX + -0x130);
    iVar2 = (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) +
                        0x98))(local_24);
    if (*(int *)(iVar2 + 4) != 0) {
      (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) + 0x98))
                (local_30);
      cVar1 = FUN_005039a0();
      if (cVar1 != '\0') {
        FUN_00502720(&DAT_00916bd4);
        iVar2 = (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) +
                            0x98))(local_3c);
        FUN_00502eb0(*(undefined4 *)(iVar2 + 4));
      }
    }
    break;
  case 3:
    FUN_00501d80(in_ECX + -0x128);
    break;
  case 4:
    FUN_00501d80(**(int **)(in_ECX + -0x104) + 0x154);
    break;
  case 5:
    FUN_00501d80(in_ECX + -0x130);
    break;
  case 6:
    FUN_00501d80(**(int **)(in_ECX + -0x104) + 0xb8);
    break;
  case 7:
    FUN_00501d80(**(int **)(in_ECX + -0x104) + 0x154);
    FUN_00502720(&DAT_00910358);
    FUN_005026d0(in_ECX + -0x130);
    iVar2 = (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) +
                        0x98))(local_48);
    if (*(int *)(iVar2 + 4) != 0) {
      (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) + 0x98))
                (local_54);
      cVar1 = FUN_005039a0();
      if (cVar1 != '\0') {
        FUN_00502720(&DAT_00916bd4);
        iVar2 = (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) +
                            0x98))(local_60);
        FUN_00502eb0(*(undefined4 *)(iVar2 + 4));
      }
    }
    break;
  case 8:
    uVar3 = (**(code **)(*(int *)(in_ECX + -0x164 + *(int *)(*(int *)(in_ECX + -0x164) + 0xc)) +
                        0xc0))(local_68);
    local_8._0_1_ = 2;
    FUN_00501d80(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00501900();
  }
  FUN_0054f6f0();
  FUN_005018d0(local_18);
  local_8 = local_8 & 0xffffff00;
  FUN_00501900();
  ExceptionList = local_10;
  return param_1;
}

