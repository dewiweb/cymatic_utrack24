// rea decompile_all
// name: FUN_005bead0
// address: 0x5bead0
// body: available
// range: 0x5bead0-0x5beb6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bead0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a2f3;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  local_8 = 0;
  iVar1 = *(int *)(in_ECX + 0x28);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x20) + iVar1 * 4);
    if ((piVar2[4] == param_2) &&
       ((param_1 < 1 || (cVar3 = (**(code **)(*piVar2 + 0x30))(param_1,uVar4), cVar3 != '\0')))) {
      (**(code **)(*piVar2 + 0x1c))(param_3);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 8));
  ExceptionList = local_10;
  return;
}

