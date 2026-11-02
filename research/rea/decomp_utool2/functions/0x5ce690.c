// rea decompile_all
// name: FUN_005ce690
// address: 0x5ce690
// body: available
// range: 0x5ce690-0x5ce737 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ce690(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x1c0);
  EnterCriticalSection(lpCriticalSection);
  piVar4 = *(int **)(in_ECX + 0x9c);
  piVar1 = piVar4 + *(int *)(in_ECX + 0xa4);
  for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
    if (param_1 == (int *)*piVar4) goto LAB_005ce728;
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((*(int *)(in_ECX + 0x98) != 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 8))(*(int *)(in_ECX + 0x98));
  }
  EnterCriticalSection(lpCriticalSection);
  iVar3 = *(int *)(in_ECX + 0xa4) + 1;
  if (*(int *)(in_ECX + 0xa0) < iVar3) {
    FUN_00409cf0(iVar3 / 2 + *(int *)(in_ECX + 0xa4) + 9 & 0xfffffff8);
  }
  iVar3 = *(int *)(in_ECX + 0xa4);
  *(int *)(in_ECX + 0xa4) = iVar3 + 1;
  puVar2 = (undefined4 *)(*(int *)(in_ECX + 0x9c) + iVar3 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
  }
LAB_005ce728:
  LeaveCriticalSection(lpCriticalSection);
  return;
}

