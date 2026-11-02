// rea decompile_all
// name: FUN_004317f0
// address: 0x4317f0
// body: available
// range: 0x4317f0-0x431968 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004317f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  char *pcVar4;
  char *local_224;
  int local_220;
  char *local_21c;
  char local_215;
  undefined1 local_214 [512];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe0db;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_0045c990("No Driver");
    goto LAB_00431949;
  }
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x24) + 0xc))(DAT_00c8a650,local_14);
  local_215 = iVar1 != 0;
  pcVar4 = "";
  local_21c = "";
  local_8 = 0;
  if ((bool)local_215) {
    iVar1 = FUN_0045d240(*(undefined4 *)(in_ECX + 4),"denon dj");
    if (-1 < iVar1) goto LAB_00431897;
  }
  else {
LAB_00431897:
    puVar2 = (undefined4 *)FUN_00431770(&local_220);
    pcVar4 = (char *)*puVar2;
    *puVar2 = &DAT_00bfe12c;
    piVar3 = (int *)(local_220 + -8);
    local_21c = pcVar4;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  if (local_215 == '\0') {
    if (*pcVar4 == '\0') {
      FUN_0045c990("Driver failed to initialise");
      piVar3 = (int *)(pcVar4 + -8);
      local_21c = local_224;
      pcVar4 = local_224;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(piVar3);
        }
      }
      goto LAB_0043192d;
    }
  }
  else {
LAB_0043192d:
    if (*pcVar4 == '\0') {
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x10))(local_214);
      pcVar4 = local_21c;
    }
  }
  *param_1 = pcVar4;
LAB_00431949:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

