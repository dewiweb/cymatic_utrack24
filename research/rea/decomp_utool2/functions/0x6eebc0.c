// rea decompile_all
// name: FUN_006eebc0
// address: 0x6eebc0
// body: available
// range: 0x6eebc0-0x6eed5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006eebc0(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_24 [4];
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729451;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)param_1 == '\0') {
    if ((((*(int *)(in_ECX + 200) == *(int *)(in_ECX + 0xdc)) &&
         (*(int *)(in_ECX + 0xcc) == *(int *)(in_ECX + 0xe0))) &&
        (*(int *)(in_ECX + 0xd0) == *(int *)(in_ECX + 0xe4))) &&
       (*(int *)(in_ECX + 0xc4) == *(int *)(in_ECX + 0xd8))) {
      FUN_006f2c40(*(undefined4 *)(in_ECX + 0xdc));
      piVar3 = *(int **)(in_ECX + 0xd8);
      if (*(int *)(in_ECX + 0xe0) < piVar3[2]) {
        iVar5 = *(int *)(in_ECX + 0xe4) + 1;
        iVar1 = *(int *)(*piVar3 + *(int *)(in_ECX + 0xe0) * 4);
        if (iVar5 < *(int *)(iVar1 + 8)) {
          param_1 = (undefined1 *)0x2;
          iVar4 = 1;
          if (*(int *)(iVar1 + 0xc) + 1 <= iVar5) {
            iVar4 = 2;
          }
          FUN_006f2c40(*(int *)(in_ECX + 0xdc) + iVar4);
          goto LAB_006eed0c;
        }
      }
      FUN_006f2c40(*(int *)(in_ECX + 0xdc) + 1);
    }
    else {
      FUN_006ee820(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    }
  }
  else {
    param_1 = &DAT_00bfe12c;
    local_8 = 0;
    FUN_006f02e0(&param_1);
    piVar3 = (int *)(param_1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    uVar2 = FUN_006f22a0(local_24,in_ECX + 0xb0);
    local_8 = 1;
    FUN_006f0a50(uVar2,1);
    if ((local_14 != '\0') && (local_14 = '\0', local_24[0] != 0)) {
      FUN_00415ff0(local_24);
    }
  }
LAB_006eed0c:
  param_1 = &DAT_00bfe12c;
  local_8 = 2;
  FUN_006f02e0(&param_1);
  piVar3 = (int *)(param_1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return 1;
}

