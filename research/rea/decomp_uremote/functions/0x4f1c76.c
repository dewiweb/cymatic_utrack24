// rea decompile_all
// name: FUN_004f1c76
// address: 0x4f1c76
// body: available
// range: 0x4f1c76-0x4f1ce6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004f1c76(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *in_stack_00000014;
  undefined1 local_10 [12];
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)FUN_004f1d5f(iVar1,local_10);
    uVar5 = FUN_004a8e4a(*puVar4);
    uVar6 = FUN_004a8e4a(puVar4[1]);
    iVar2 = *(int *)(param_1 + 8);
    *(undefined4 *)(iVar2 + 0x18) = uVar6;
    *(undefined4 *)(iVar2 + 0x14) = uVar5;
    cVar3 = FUN_004edff5(**(undefined4 **)(param_1 + 8));
    *in_stack_00000014 = (uint)(cVar3 != '\0');
  }
  return iVar1 == 0;
}

