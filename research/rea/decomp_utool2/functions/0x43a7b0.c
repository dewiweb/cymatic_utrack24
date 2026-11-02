// rea decompile_all
// name: FUN_0043a7b0
// address: 0x43a7b0
// body: available
// range: 0x43a7b0-0x43a874 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043a7b0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe5f8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_005e2d50();
  if (iVar2 != 0) {
    FUN_0045c990(iVar2,uVar1);
    local_8 = 0;
    FUN_0045c990(param_3);
    FUN_00631980(&param_2,&param_1);
    piVar3 = (int *)(param_2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(param_1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

