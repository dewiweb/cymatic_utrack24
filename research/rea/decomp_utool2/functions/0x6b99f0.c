// rea decompile_all
// name: FUN_006b99f0
// address: 0x6b99f0
// body: available
// range: 0x6b99f0-0x6b9b4e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_006b99f0(int *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  int in_ECX;
  bool bVar7;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00724575;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(uint *)(in_ECX + 0xa4) >> 1 & 1) == 0) {
    piVar6 = (int *)FUN_00637250(uVar5);
    bVar4 = false;
    bVar7 = false;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    bVar7 = (*(uint *)(in_ECX + 0xa4) & 8) == 0;
    if (bVar7) {
      piVar6 = (int *)FUN_00637250(uVar5);
    }
    else {
      piVar6 = (int *)FUN_00637250(uVar5);
    }
    bVar4 = !bVar7;
    local_18[0] = *piVar6;
    *piVar6 = (int)&DAT_00bfe12c;
    piVar6 = local_18;
    bVar3 = true;
    bVar2 = false;
  }
  *param_1 = *piVar6;
  *piVar6 = (int)&DAT_00bfe12c;
  if (bVar2) {
    piVar6 = (int *)(local_1c + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if (bVar3) {
    piVar6 = (int *)(local_18[0] + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if (bVar7) {
    piVar6 = (int *)(local_20 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar4) && (piVar6 = (int *)(local_24 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

