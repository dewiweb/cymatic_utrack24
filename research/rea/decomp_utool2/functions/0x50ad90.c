// rea decompile_all
// name: FUN_0050ad90
// address: 0x50ad90
// body: available
// range: 0x50ad90-0x50aef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050ad90(int *param_1,double param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00708531;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = (int)&DAT_00bfe12c;
  local_8 = 0;
  if (param_2 == 0.0) {
    FUN_0045c990(&DAT_0073a318,local_14);
    piVar1 = (int *)(*param_1 + -8);
    *param_1 = local_38[0];
    if (piVar1 == &DAT_00bfe124) goto LAB_0050aeda;
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    puVar2 = &DAT_0073a36c;
    if (0.0 <= param_2) {
      puVar2 = &DAT_0073a31c;
    }
    FUN_0045c990(puVar2,local_14);
    iVar3 = *param_1;
    *param_1 = local_38[0];
    piVar1 = (int *)(iVar3 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    if ((int)param_2 < 0) {
      iVar3 = FUN_006104a0();
      *(undefined1 *)(iVar3 + -1) = 0x2d;
      iVar3 = iVar3 + -1;
    }
    else {
      iVar3 = FUN_006104a0();
    }
    FUN_004557e0(&local_15 + -iVar3);
    local_8 = 1;
    FUN_00636ec0(local_38);
    piVar1 = (int *)(local_38[0] + -8);
    if (piVar1 == &DAT_00bfe124) goto LAB_0050aeda;
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar3 == 0) {
    FID_conflict__free(piVar1);
  }
LAB_0050aeda:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

