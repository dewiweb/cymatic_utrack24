// rea decompile_all
// name: FUN_0041e2db
// address: 0x41e2db
// body: available
// range: 0x41e2db-0x41e366 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041e2db(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[2];
  iVar1 = *param_1 + 1 + iVar2 >> 1;
  param_1[0xc] = param_1[6];
  param_1[2] = iVar1;
  iVar3 = param_1[6] + 1 + param_1[4] >> 1;
  iVar4 = param_1[4] + 1 + iVar2 >> 1;
  iVar1 = iVar1 + 1 + iVar4 >> 1;
  param_1[10] = iVar3;
  iVar2 = param_1[3];
  param_1[4] = iVar1;
  iVar3 = iVar3 + 1 + iVar4 >> 1;
  param_1[6] = iVar3 + 1 + iVar1 >> 1;
  param_1[8] = iVar3;
  param_1[0xd] = param_1[7];
  iVar1 = param_1[1] + 1 + iVar2 >> 1;
  param_1[3] = iVar1;
  iVar3 = param_1[7] + 1 + param_1[5] >> 1;
  iVar4 = param_1[5] + 1 + iVar2 >> 1;
  param_1[0xb] = iVar3;
  iVar2 = iVar1 + 1 + iVar4 >> 1;
  iVar1 = iVar3 + 1 + iVar4 >> 1;
  param_1[5] = iVar2;
  param_1[9] = iVar1;
  param_1[7] = iVar1 + 1 + iVar2 >> 1;
  return;
}

