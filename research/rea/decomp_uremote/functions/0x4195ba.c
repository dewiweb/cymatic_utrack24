// rea decompile_all
// name: FUN_004195ba
// address: 0x4195ba
// body: available
// range: 0x4195ba-0x419607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004195ba(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x44) != '\0') {
    piVar1 = (int *)(*(int *)(iVar2 + 4) + *(short *)(iVar2 + 2) * 8);
    iVar3 = FUN_0040d211();
    *piVar1 = iVar3 >> 0x10;
    uVar4 = FUN_0040d211();
    piVar1[1] = (int)uVar4 >> 0x10;
    *(char *)((ulonglong)uVar4 >> 0x20) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar2 + 2) = *(short *)(iVar2 + 2) + 1;
  return;
}

