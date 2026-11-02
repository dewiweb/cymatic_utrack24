// rea decompile_all
// name: FUN_00599b80
// address: 0x599b80
// body: available
// range: 0x599b80-0x599ca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00599b80(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071555a;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 800) = 1;
  *(undefined4 *)(in_ECX + 0x318) = param_1;
  *(int *)(in_ECX + 0x31c) = param_2;
  uVar2 = FUN_00636d50(param_1,param_2,uVar1);
  local_8 = 0;
  FUN_006e4900(uVar2,0);
  local_8 = 0xffffffff;
  piVar3 = (int *)(in_ECX + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  iVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x13c)) {
    do {
      FUN_00597c70();
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x13c));
  }
  FUN_0045c990("Export Batch");
  local_8 = 1;
  FUN_004eb590(&param_2);
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return;
}

