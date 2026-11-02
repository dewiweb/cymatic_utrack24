// rea decompile_all
// name: FUN_006e0040
// address: 0x6e0040
// body: available
// range: 0x6e0040-0x6e01fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e0040(int *param_1)

{
  uint uVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072801a;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if (param_1 == (int *)0x0) {
    return;
  }
  ExceptionList = &local_10;
  param_1[2] = in_ECX;
  FUN_00690370(*(undefined4 *)(in_ECX + 4));
  param_1[6] = 0;
  iVar2 = (**(code **)(*param_1 + 0x14))(uVar1);
  param_1[7] = iVar2;
  param_1[8] = 0;
  if (*(code **)(*param_1 + 0x10) == FUN_00412fb0) {
    iVar2 = -1;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x10))();
  }
  param_1[9] = iVar2;
  param_1[10] = 0;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar2 = *(int *)(in_ECX + 0x14) + 1;
    if (*(int *)(in_ECX + 0x10) < iVar2) {
      FUN_00409cf0(iVar2 / 2 + *(int *)(in_ECX + 0x14) + 9 & 0xfffffff8);
    }
    iVar2 = *(int *)(in_ECX + 0x14);
    *(int *)(in_ECX + 0x14) = iVar2 + 1;
    *(int **)(*(int *)(in_ECX + 0xc) + iVar2 * 4) = param_1;
    if ((param_1[0xd] & 3U) == 0) {
      if (param_1[1] == 0) {
        ExceptionList = local_10;
        return;
      }
      if (*(char *)(param_1[1] + 0xac) == '\0') {
        ExceptionList = local_10;
        return;
      }
    }
    else if ((param_1[0xd] & 3U) != 2) {
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*param_1 + 0xc))(1);
    ExceptionList = local_10;
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(in_ECX + 4) + 0x84);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  iVar2 = *(int *)(in_ECX + 0x14) + 1;
  if (*(int *)(in_ECX + 0x10) < iVar2) {
    FUN_00409cf0(iVar2 / 2 + *(int *)(in_ECX + 0x14) + 9 & 0xfffffff8);
  }
  iVar2 = *(int *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = iVar2 + 1;
  *(int **)(*(int *)(in_ECX + 0xc) + iVar2 * 4) = param_1;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00690c60();
  }
  if ((param_1[0xd] & 3U) == 0) {
    if (param_1[1] == 0) goto LAB_006e015c;
    if (*(char *)(param_1[1] + 0xac) == '\0') {
      LeaveCriticalSection(lpCriticalSection);
      ExceptionList = local_10;
      return;
    }
  }
  else if ((param_1[0xd] & 3U) != 2) goto LAB_006e015c;
  (**(code **)(*param_1 + 0xc))(1);
LAB_006e015c:
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return;
}

