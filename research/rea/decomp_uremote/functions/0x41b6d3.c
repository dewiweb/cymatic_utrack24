// rea decompile_all
// name: FUN_0041b6d3
// address: 0x41b6d3
// body: available
// range: 0x41b6d3-0x41b70d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041b6d3(undefined4 *param_1)

{
  uint *in_EAX;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)0x0;
  uVar3 = *in_EAX + 1;
  if (in_EAX[1] < uVar3) {
    iVar1 = FUN_0041b696();
    if (iVar1 != 0) goto LAB_0041b704;
  }
  puVar2 = (undefined4 *)(uVar3 * 0x10 + -0x10 + in_EAX[2]);
  *puVar2 = 0;
  puVar2[3] = 0;
  *in_EAX = uVar3;
LAB_0041b704:
  *param_1 = puVar2;
  return iVar1;
}

