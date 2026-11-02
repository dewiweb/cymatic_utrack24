// rea decompile_all
// name: FUN_004c53da
// address: 0x4c53da
// body: available
// range: 0x4c53da-0x4c5485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c53da(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int iVar4;
  double local_1c;
  int local_10;
  int local_c;
  
  local_10 = *unaff_EBX;
  local_1c = 10000000000.0;
  local_c = unaff_EBX[2] + -1;
  if (-1 < local_c) {
    iVar2 = local_c * 0x38;
    do {
      iVar4 = *unaff_EBX + iVar2;
      cVar1 = FUN_004f5cc9(param_1,param_2);
      if (cVar1 != '\0') {
        return iVar4;
      }
      iVar3 = FUN_004f8f63((*(int *)(iVar4 + 0x18) / 2 + *(int *)(iVar4 + 0x10)) - param_1,
                           (*(int *)(iVar4 + 0x1c) / 2 + *(int *)(iVar4 + 0x14)) - param_2);
      if ((double)iVar3 < local_1c) {
        local_1c = (double)iVar3;
        local_10 = iVar4;
      }
      local_c = local_c + -1;
      iVar2 = iVar2 + -0x38;
    } while (-1 < local_c);
  }
  return local_10;
}

