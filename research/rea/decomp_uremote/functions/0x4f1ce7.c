// rea decompile_all
// name: FUN_004f1ce7
// address: 0x4f1ce7
// body: available
// range: 0x4f1ce7-0x4f1d5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f1ce7(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *in_stack_00000018;
  undefined1 local_10 [12];
  
  iVar2 = FUN_004f1dff(param_2);
  if (-1 < iVar2) {
    puVar3 = (undefined4 *)FUN_004f1d5f(*(undefined4 *)(param_1 + 8),local_10);
    uVar4 = FUN_004a8e4a(*puVar3);
    uVar5 = FUN_004a8e4a(puVar3[1]);
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar2 + 0x14) = uVar4;
    *(undefined4 *)(iVar2 + 0x18) = uVar5;
    cVar1 = FUN_004ee232();
    *in_stack_00000018 = (uint)(cVar1 != '\0');
    iVar2 = 0;
  }
  return iVar2;
}

