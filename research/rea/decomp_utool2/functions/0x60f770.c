// rea decompile_all
// name: FUN_0060f770
// address: 0x60f770
// body: available
// range: 0x60f770-0x60f8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060f770(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 *puVar4;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c797;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == *(undefined1 **)(in_ECX + 0x24)) {
    iVar1 = FUN_006e85c0();
    piVar2 = (int *)FUN_005cef80();
    if ((iVar1 - 1U < (uint)piVar2[2]) && (iVar1 = *(int *)(*piVar2 + (iVar1 - 1U) * 4), iVar1 != 0)
       ) {
      puVar3 = *(undefined4 **)(in_ECX + 0x2c);
      if (puVar3 != (undefined4 *)0x0) {
        *(undefined4 *)(in_ECX + 0x2c) = 0;
        (**(code **)*puVar3)();
      }
      FUN_005cf0a0(iVar1 + 4);
      FUN_0060f3d0();
      ExceptionList = local_10;
      return;
    }
  }
  else if (param_1 == *(undefined1 **)(in_ECX + 0x50)) {
    FUN_006e8370();
    local_8 = 0;
    puVar3 = (undefined4 *)FUN_0060fc30();
    if (param_1 == (undefined1 *)*puVar3) {
      local_14 = 0;
    }
    else {
      local_14 = FUN_00448730(param_1);
    }
    piVar2 = (int *)(local_18 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    puVar4 = param_1;
    if (local_14 == 0) {
      puVar4 = &DAT_00bfe12c;
      piVar2 = (int *)(param_1 + -8);
      if (piVar2 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar2);
        }
      }
    }
    FUN_005cb120();
    piVar2 = (int *)(puVar4 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

