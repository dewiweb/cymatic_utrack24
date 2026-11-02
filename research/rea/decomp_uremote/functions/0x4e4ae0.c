// rea decompile_all
// name: FUN_004e4ae0
// address: 0x4e4ae0
// body: available
// range: 0x4e4ae0-0x4e4b20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e4ae0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int in_EAX;
  int extraout_ECX;
  int extraout_EDX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(in_EAX + 0x90)) {
    puVar3 = *(undefined4 **)(in_EAX + 0x88);
    iVar4 = 0;
    do {
      uVar1 = *puVar3;
      cVar2 = FUN_004e47e4();
      iVar5 = iVar4;
      if ((cVar2 != '\0') && (iVar5 = iVar4 + 1, iVar4 == param_1)) {
        return uVar1;
      }
      iVar6 = iVar6 + 1;
      puVar3 = (undefined4 *)(extraout_EDX + 4);
      iVar4 = iVar5;
    } while (iVar6 < extraout_ECX);
  }
  return 0;
}

