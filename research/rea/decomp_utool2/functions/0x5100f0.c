// rea decompile_all
// name: FUN_005100f0
// address: 0x5100f0
// body: available
// range: 0x5100f0-0x5101d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005100f0(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00708b18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if (param_1 < *(uint *)(in_ECX + 0x80)) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x78) + param_1 * 4);
  }
  else {
    iVar2 = 0;
  }
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar2 + 0x7c8);
  *(int *)(iVar2 + 0x7c8) = param_2;
  UNLOCK();
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      uStack_2c = 0x510172;
      FID_conflict__free(piVar3);
    }
  }
  FUN_006e6400(auStack_34);
  FUN_006ce9f0(1);
  uStack_2c = 0x5101a4;
  FUN_0050b1c0();
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      uStack_2c = 0x5101c1;
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

