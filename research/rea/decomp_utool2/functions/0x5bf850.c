// rea decompile_all
// name: FUN_005bf850
// address: 0x5bf850
// body: available
// range: 0x5bf850-0x5bf904 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bf850(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a417;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 4));
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0xc))(param_1,uVar4);
  if (*(char *)(in_ECX + 0x204) == '\0') {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    *(undefined1 *)(iVar1 + 0x94) = 0;
    iVar1 = **(int **)(iVar1 + 0xc) + iVar2 * 4;
    piVar3 = (int *)*param_1;
    if (*piVar3 < 2) {
      FUN_00424a00(iVar1,param_1[2]);
    }
    else {
      iVar2 = param_1[1];
      *(undefined1 *)(piVar3 + 0x25) = 0;
      FUN_00423f50(iVar1,*(int *)(piVar3[3] + 4) + iVar2 * 4,param_1[2]);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}

