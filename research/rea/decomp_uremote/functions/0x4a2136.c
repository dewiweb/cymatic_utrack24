// rea decompile_all
// name: FUN_004a2136
// address: 0x4a2136
// body: available
// range: 0x4a2136-0x4a21da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a2136(int *param_1)

{
  int iVar1;
  int in_EAX;
  float *pfVar2;
  int iVar3;
  float local_1c;
  float local_14;
  float local_10;
  
  if ((param_1[2] < 1) || (*(int *)(in_EAX + 0x10) == 2)) {
    local_10 = 0.0;
    param_1[3] = 0;
  }
  else {
    FUN_004a1381(*(undefined4 *)*param_1);
    iVar3 = param_1[2];
    while (iVar3 = iVar3 + -1, 0 < iVar3) {
      FUN_004a1381(*(undefined4 *)(*param_1 + iVar3 * 4));
      pfVar2 = (float *)FUN_004a4fa2();
      local_1c = *pfVar2;
      local_14 = pfVar2[2];
      local_10 = pfVar2[3];
    }
    iVar3 = param_1[2];
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar1 = *(int *)(*param_1 + iVar3 * 4);
      *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) - local_1c;
    }
    param_1[3] = (int)local_14;
  }
  param_1[4] = (int)local_10;
  return;
}

