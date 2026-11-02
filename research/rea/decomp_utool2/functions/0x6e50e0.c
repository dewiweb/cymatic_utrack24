// rea decompile_all
// name: FUN_006e50e0
// address: 0x6e50e0
// body: available
// range: 0x6e50e0-0x6e5239 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e50e0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *_Memory;
  int in_ECX;
  int iVar6;
  int local_40;
  int local_3c;
  void **local_38;
  void *local_34 [4];
  void *local_24;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728683;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_18 = in_ECX;
  FUN_0062cb00(0x100);
  local_8 = 0;
  uVar3 = FUN_00693140(uVar2);
  FUN_00622b10(uVar3);
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0x11c)) {
    do {
      iVar6 = 0;
      iVar1 = *(int *)(*(int *)(in_ECX + 0x114) + local_14 * 4);
      if (0 < *(int *)(iVar1 + 0x10)) {
        do {
          uVar3 = **(undefined4 **)(*(int *)(iVar1 + 8) + iVar6 * 4);
          uVar4 = FUN_0045d1e0(uVar3);
          (**(code **)(local_40 + 0x10))(uVar3,uVar4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(iVar1 + 0x10));
      }
      local_14 = local_14 + 1;
      in_ECX = local_18;
    } while (local_14 < *(int *)(local_18 + 0x11c));
  }
  FUN_00622880(param_1);
  if (((local_38 != local_34) && (local_38 != (void **)0x0)) && (local_38[1] != local_24)) {
    if (local_24 == (void *)0x0) {
      FID_conflict__free(*local_38);
      *local_38 = (void *)0x0;
      local_38[1] = (void *)0x0;
    }
    else {
      if (*local_38 == (void *)0x0) {
        FID_conflict__free((void *)0x0);
        pvVar5 = (void *)FUN_004c554b(local_24);
      }
      else {
        pvVar5 = (void *)FUN_004c553b(*local_38,local_24);
      }
      *local_38 = pvVar5;
      local_38[1] = local_24;
    }
  }
  FID_conflict__free(local_34[0]);
  _Memory = (int *)(local_3c + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

