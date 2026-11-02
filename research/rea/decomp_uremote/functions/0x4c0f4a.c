// rea decompile_all
// name: FUN_004c0f4a
// address: 0x4c0f4a
// body: available
// range: 0x4c0f4a-0x4c0fb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c0f4a(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((*(byte *)(in_ECX + 0x68) & 2) != 0) {
    local_14 = param_1;
    local_10 = param_2;
    cVar1 = FUN_004bfc26();
    if (cVar1 != '\0') {
      iVar3 = *(int *)(in_ECX + 0x30);
      do {
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
          return;
        }
        local_14 = local_10;
        FUN_004f8472(&local_14,param_1,param_2);
        iVar2 = FUN_004c0f4a();
        local_10 = extraout_ECX;
      } while (iVar2 == 0);
    }
  }
  return;
}

