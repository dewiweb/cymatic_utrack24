// rea decompile_all
// name: FUN_0062f560
// address: 0x62f560
// body: available
// range: 0x62f560-0x62f5e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f560(int param_1,undefined1 param_2)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    *(int **)(param_1 + 8) = in_ECX;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0xe) = param_2;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 6));
    iVar2 = in_ECX[2] + 1;
    if (in_ECX[1] < iVar2) {
      FUN_00409cf0(iVar2 / 2 + in_ECX[2] + 9 & 0xfffffff8);
    }
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1;
    piVar1 = (int *)(*in_ECX + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 6));
    iVar2 = in_ECX[5];
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      SetEvent(*(HANDLE *)(*(int *)(in_ECX[3] + iVar2 * 4) + 0x2c));
    }
  }
  return;
}

