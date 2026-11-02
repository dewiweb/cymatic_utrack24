// rea decompile_all
// name: FUN_00690440
// address: 0x690440
// body: available
// range: 0x690440-0x690504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690440(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iStack_c;
  
  in_ECX[6] = param_1;
  iVar1 = (**(code **)(*in_ECX + 0x14))();
  in_ECX[7] = iVar1;
  in_ECX[8] = iVar1;
  if (*(code **)(*in_ECX + 0x10) == FUN_00412fb0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (**(code **)(*in_ECX + 0x10))();
  }
  in_ECX[9] = iVar1;
  iVar2 = FUN_006902e0();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  in_ECX[10] = iVar2 + iVar1;
  if ((in_ECX[0xd] & 3U) == 0) {
    if (in_ECX[1] == 0) {
      return;
    }
    if (*(char *)(in_ECX[1] + 0xac) == '\0') {
      return;
    }
  }
  else if ((in_ECX[0xd] & 3U) != 2) {
    return;
  }
  param_1 = param_1 + in_ECX[8];
  iStack_c = 0;
  if (0 < in_ECX[5]) {
    do {
      iVar1 = *(int *)(in_ECX[3] + iStack_c * 4);
      FUN_00690440(param_1);
      param_1 = param_1 + *(int *)(iVar1 + 0x20);
      in_ECX[8] = in_ECX[8] + *(int *)(iVar1 + 0x20);
      iVar2 = in_ECX[10];
      if (in_ECX[10] < *(int *)(iVar1 + 0x28)) {
        iVar2 = *(int *)(iVar1 + 0x28);
      }
      in_ECX[10] = iVar2;
      iStack_c = iStack_c + 1;
    } while (iStack_c < in_ECX[5]);
  }
  return;
}

