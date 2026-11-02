// rea decompile_all
// name: FUN_004617bb
// address: 0x4617bb
// body: available
// range: 0x4617bb-0x461806 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004617bb(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  uint local_4;
  
  local_4 = DAT_00955fd4 ^ (uint)&local_4;
  if (in_ECX != param_1) {
    uVar1 = *in_ECX;
    *in_ECX = *param_1;
    *param_1 = uVar1;
  }
  puVar3 = param_1 + 2;
  puVar4 = in_ECX + 2;
  if (puVar4 != puVar3) {
    uVar1 = *puVar4;
    uVar2 = in_ECX[3];
    *puVar4 = *puVar3;
    in_ECX[3] = param_1[3];
    *puVar3 = uVar1;
    param_1[3] = uVar2;
  }
  __security_check_cookie(local_4 ^ (uint)&local_4);
  return;
}

