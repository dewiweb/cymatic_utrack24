// rea decompile_all
// name: FUN_00515db0
// address: 0x515db0
// body: available
// range: 0x515db0-0x515ef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00515db0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  char *pcVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007092ef;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(char *)(in_ECX + 0x364) = (char)param_1;
  if ((char)param_1 == '\0') {
    FUN_006e4900(&PTR_DAT_00c7ed68,0);
    FUN_006e6170(0x1000280,DAT_00c8a948);
    uVar3 = DAT_00c8a948;
  }
  else {
    FUN_0045c990("Modified",uVar2);
    local_8 = 0;
    FUN_006e4900(&param_1,0);
    local_8 = 0xffffffff;
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
    pcVar5 = "colMeterOrange";
    FUN_0045c990("colMeterOrange",uVar2);
    local_8 = 1;
    FUN_0057f430();
    FUN_006e6170(0x1000280,pcVar5);
    local_8 = 0xffffffff;
    piVar4 = (int *)(param_1 + -8);
    uVar3 = DAT_00c7ef94;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      uVar3 = DAT_00c7ef94;
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
        uVar3 = DAT_00c7ef94;
      }
    }
  }
  FUN_006e6170(0x1000281,uVar3);
  ExceptionList = local_10;
  return;
}

