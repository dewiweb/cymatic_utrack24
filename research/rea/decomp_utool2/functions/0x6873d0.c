// rea decompile_all
// name: FUN_006873d0
// address: 0x6873d0
// body: available
// range: 0x6873d0-0x68752e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006873d0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  BOOL BVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_ECX;
  HICON in_EDX;
  ICONINFO local_48;
  undefined1 local_24 [4];
  undefined4 local_20;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720f10;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  BVar4 = GetIconInfo(in_EDX,&local_48);
  if (BVar4 != 0) {
    FUN_00687530(uVar3);
    local_8 = 0;
    FUN_00687530();
    local_8 = CONCAT31(local_8._1_3_,1);
    if ((local_18 != (undefined4 *)0x0) && (local_14 != (undefined4 *)0x0)) {
      iVar2 = local_14[4];
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        iVar5 = FUN_006838c0();
        while (iVar5 = iVar5 + -1, -1 < iVar5) {
          puVar6 = (undefined4 *)FUN_00672ea0(local_24,iVar5,iVar2);
          iVar7 = FUN_00465820(*puVar6);
          if (0.0 < *(float *)(iVar7 + 8)) {
            FUN_00672d70(iVar5,iVar2);
          }
        }
      }
      *in_ECX = local_14;
      local_14 = (undefined4 *)0x0;
      if (local_18 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      LOCK();
      piVar1 = local_18 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 != 1) {
        ExceptionList = local_10;
        return;
      }
      (**(code **)*local_18)(1);
      ExceptionList = local_10;
      return;
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
    if (local_18 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_18 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_18)(1);
      }
    }
  }
  *in_ECX = 0;
  ExceptionList = local_10;
  return;
}

