// rea decompile_all
// name: FUN_006eeef0
// address: 0x6eeef0
// body: available
// range: 0x6eeef0-0x6ef033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006eeef0(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int local_24 [4];
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007294b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)param_1 == '\0') {
    if ((((*(int *)(in_ECX + 200) == *(int *)(in_ECX + 0xdc)) &&
         (*(int *)(in_ECX + 0xcc) == *(int *)(in_ECX + 0xe0))) &&
        (*(int *)(in_ECX + 0xd0) == *(int *)(in_ECX + 0xe4))) &&
       (*(int *)(in_ECX + 0xc4) == *(int *)(in_ECX + 0xd8))) {
      cVar2 = FUN_006eed60(DAT_00c76070 ^ (uint)&stack0xfffffffc);
      if (cVar2 == '\0') {
        FUN_006f2c40(*(int *)(in_ECX + 200) + -1);
      }
    }
  }
  else {
    param_1 = &DAT_00bfe12c;
    local_8 = 0;
    FUN_006f02e0(&param_1);
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
    uVar3 = FUN_006f2060(local_24,in_ECX + 0xb0);
    local_8 = 1;
    FUN_006f0a50(uVar3,1);
    if ((local_14 != '\0') && (local_14 = '\0', local_24[0] != 0)) {
      FUN_00415ff0(local_24);
    }
  }
  param_1 = &DAT_00bfe12c;
  local_8 = 2;
  FUN_006f02e0(&param_1);
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
  ExceptionList = local_10;
  return 1;
}

