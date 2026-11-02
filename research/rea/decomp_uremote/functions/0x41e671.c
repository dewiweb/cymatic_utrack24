// rea decompile_all
// name: FUN_0041e671
// address: 0x41e671
// body: available
// range: 0x41e671-0x41e6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041e671(int param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  iVar3 = *(int *)(param_1 + 0x34);
  *(int *)(iVar3 + 4) = -*(int *)(iVar3 + 4);
  *(int *)(iVar3 + 0xc) = -*(int *)(iVar3 + 0xc);
  *(int *)(iVar3 + 0x14) = -*(int *)(iVar3 + 0x14);
  if (2 < in_EDX) {
    *(int *)(iVar3 + 0x1c) = -*(int *)(iVar3 + 0x1c);
  }
  cVar2 = *(char *)(param_1 + 0x56);
  FUN_0041e51f(param_2,-in_EAX,-in_ECX);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x56) == '\0')) {
    piVar1 = (int *)(*(int *)(param_1 + 0x58) + 0x14);
    *piVar1 = -*piVar1;
  }
  *(int *)(iVar3 + 4) = -*(int *)(iVar3 + 4);
  return;
}

