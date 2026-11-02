// rea decompile_all
// name: FUN_0043d730
// address: 0x43d730
// body: available
// range: 0x43d730-0x43d874 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d730(void)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_ECX;
  int in_EDX;
  undefined **ppuVar6;
  int local_44;
  int local_40;
  void *local_38;
  byte local_28;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe930;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0062cb00(0x100);
  local_8 = 0;
  uVar3 = FUN_0062c730("tracktion loop info",*(undefined1 *)(in_EDX + 0x18),0);
  if (uVar3 < *(uint *)(in_EDX + 0x14)) {
    ppuVar6 = (undefined **)(*(int *)(in_EDX + 0xc) + uVar3 * 4);
  }
  else {
    ppuVar6 = &PTR_DAT_00c7ed68;
  }
  pcVar1 = *ppuVar6;
  piVar5 = (int *)(pcVar1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*pcVar1 != '\0') {
    iVar4 = FUN_0045d1e0(pcVar1,uVar2);
    (**(code **)(local_44 + 0x10))(pcVar1,iVar4 + 1);
    if ((local_28 & 1) != 0) {
      local_14[0] = 0;
      (**(code **)(local_44 + 0x10))(local_14,1);
    }
  }
  FUN_0062ac80(in_ECX);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_00622b80();
  FID_conflict__free(local_38);
  piVar5 = (int *)(local_40 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

