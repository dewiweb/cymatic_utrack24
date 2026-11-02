// rea decompile_all
// name: FUN_0040ae5e
// address: 0x40ae5e
// body: available
// range: 0x40ae5e-0x40ae9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040ae5e(char param_1)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar3 = *(int *)(in_EAX + 0x14);
  if (*(char *)(in_EAX + 0x41) != '\0') {
    sVar2 = *(short *)(iVar3 + 2);
    piVar1 = (int *)(*(int *)(iVar3 + 4) + sVar2 * 8);
    iVar4 = *(int *)(iVar3 + 8);
    *piVar1 = in_EDX >> 0x10;
    piVar1[1] = in_ECX >> 0x10;
    *(char *)(iVar4 + sVar2) = (param_1 == '\0') + '\x01';
  }
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}

