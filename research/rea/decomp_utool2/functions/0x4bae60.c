// rea decompile_all
// name: FUN_004bae60
// address: 0x4bae60
// body: available
// range: 0x4bae60-0x4baf81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004bae60(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *in_ECX;
  int *piVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_28;
  int *local_24;
  undefined1 local_20;
  int *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704528;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  local_14 = operator_new(0x40);
  piVar5 = (int *)FUN_004bad30(in_ECX[0xb],in_ECX[3],in_ECX[4]);
  if (piVar5 != (int *)0x0) {
    LOCK();
    piVar5[1] = piVar5[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  local_1c = piVar5;
  if (piVar5 == (int *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(**(code **)(*piVar5 + 4))(uVar4);
  }
  local_20 = 0;
  LOCK();
  in_ECX[1] = in_ECX[1] + 1;
  UNLOCK();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_30 = 0x3f800000;
  local_2c = 0;
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_28 = piVar6;
  local_24 = piVar6;
  if (in_ECX != (undefined4 *)0x0) {
    local_14 = in_ECX;
    cVar3 = (**(code **)(*piVar6 + 0x30))();
    if (cVar3 == '\0') {
      (**(code **)(*piVar6 + 0x60))(&local_14,&local_40);
    }
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_14)(1);
      }
    }
  }
  *param_1 = piVar5;
  if (piVar5 != (int *)0x0) {
    LOCK();
    piVar5[1] = piVar5[1] + 1;
    UNLOCK();
  }
  if (piVar6 != (int *)0x0) {
    (**(code **)*piVar6)(1);
  }
  if (piVar5 != (int *)0x0) {
    LOCK();
    piVar6 = piVar5 + 1;
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*piVar5)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

