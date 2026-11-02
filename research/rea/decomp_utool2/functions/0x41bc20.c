// rea decompile_all
// name: FUN_0041bc20
// address: 0x41bc20
// body: available
// range: 0x41bc20-0x41bcbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bc20(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  int in_EDX;
  int iVar5;
  int local_8;
  
  local_8 = in_EDX;
  if (param_1 < in_EDX) {
    while( true ) {
      iVar5 = (local_8 + -1) / 2;
      piVar4 = (int *)(*param_2 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      iVar1 = *(int *)(in_ECX + iVar5 * 4);
      piVar4 = (int *)(iVar1 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        *piVar4 = *piVar4 + 1;
        UNLOCK();
      }
      cVar3 = FUN_0041b940(iVar1);
      if (cVar3 == '\0') break;
      uVar2 = *(undefined4 *)(in_ECX + local_8 * 4);
      *(undefined4 *)(in_ECX + local_8 * 4) = *(undefined4 *)(in_ECX + iVar5 * 4);
      *(undefined4 *)(in_ECX + iVar5 * 4) = uVar2;
      local_8 = iVar5;
      if (iVar5 <= param_1) {
        iVar1 = *(int *)(in_ECX + iVar5 * 4);
        *(int *)(in_ECX + iVar5 * 4) = *param_2;
        *param_2 = iVar1;
        return;
      }
    }
  }
  iVar5 = *(int *)(in_ECX + local_8 * 4);
  *(int *)(in_ECX + local_8 * 4) = *param_2;
  *param_2 = iVar5;
  return;
}

