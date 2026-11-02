// rea decompile_all
// name: FUN_005cb3c0
// address: 0x5cb3c0
// body: available
// range: 0x5cb3c0-0x5cb4aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cb3c0(undefined4 *param_1,char *param_2)

{
  undefined4 *puVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071af09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (4 < *(int *)(param_2 + 0x10)) {
    param_2 = *(char **)param_2;
  }
  if (*param_2 != -2) {
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1d8));
    iVar5 = 0;
    local_8 = 0;
    if (0 < *(int *)(in_ECX + 0x1b4)) {
      do {
        pcVar2 = *(char **)(*(int *)(in_ECX + 0x1ac) + iVar5 * 8);
        puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x1ac) + iVar5 * 8);
        if (((*pcVar2 == '\0') || (pcVar2 == (char *)*param_1)) ||
           (iVar4 = FUN_00448730(*puVar1), iVar4 == 0)) {
          pcVar3 = *(code **)(*(int *)puVar1[1] + 4);
          if (pcVar3 == FUN_00427510) {
            FUN_005cb3c0(param_1);
          }
          else {
            (*pcVar3)(param_1);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(in_ECX + 0x1b4));
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1d8));
  }
  ExceptionList = local_10;
  return;
}

