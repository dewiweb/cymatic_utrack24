// rea decompile_all
// name: FUN_0053b220
// address: 0x53b220
// body: available
// range: 0x53b220-0x53b39a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0053b220(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                int param_6,undefined4 *param_7,undefined4 param_8,undefined4 param_9,
                undefined4 param_10)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070df42;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  operator_new(0x38);
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  iVar5 = FUN_0053b570(in_ECX,*(undefined4 *)(in_ECX + 0x34),in_EDX,param_1,param_3,param_4 != 0,
                       param_5);
  piVar4 = (int *)(param_6 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar5 + 0xc);
  *(int *)(iVar5 + 0xc) = param_6;
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (*(undefined4 **)(iVar5 + 0x10) != param_7) {
    if (param_7 != (undefined4 *)0x0) {
      LOCK();
      param_7[1] = param_7[1] + 1;
      UNLOCK();
    }
    puVar2 = *(undefined4 **)(iVar5 + 0x10);
    *(undefined4 **)(iVar5 + 0x10) = param_7;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar4 = puVar2 + 1;
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        (**(code **)*puVar2)(1,uVar3);
      }
    }
  }
  *(undefined4 *)(iVar5 + 0x18) = param_8;
  *(undefined4 *)(iVar5 + 0x1c) = param_9;
  if (param_7 != (undefined4 *)0x0) {
    param_10 = param_7[7];
  }
  *(undefined4 *)(iVar5 + 0x20) = param_10;
  *(undefined4 *)(iVar5 + 0x24) = param_2;
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_6 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (param_7 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_7 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_7)(1);
    }
  }
  ExceptionList = local_10;
  return iVar5;
}

