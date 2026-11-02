// rea decompile_all
// name: FUN_004e7d90
// address: 0x4e7d90
// body: available
// range: 0x4e7d90-0x4e7dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004e7d90(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int *extraout_ECX;
  int in_EDX;
  int extraout_EDX;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar1 = *(int *)(in_EDX + 0x80);
  iVar3 = 0;
  local_10 = 0;
  local_c = 0;
  if (0 < iVar1) {
    local_8 = *(int **)(in_EDX + 0x78);
    iVar4 = 0;
    do {
      local_10 = local_10 + iVar3;
      iVar3 = *local_8;
      cVar2 = FUN_004e7dfc();
      in_ECX = extraout_ECX;
      in_EDX = extraout_EDX;
      if (cVar2 == '\0') {
        iVar3 = 0;
        iVar5 = iVar4;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0xc);
        iVar5 = iVar4 + 1;
        if (iVar4 == param_1) break;
      }
      local_c = local_c + 1;
      local_8 = local_8 + 1;
      iVar4 = iVar5;
    } while (local_c < iVar1);
  }
  in_ECX[1] = 0;
  in_ECX[2] = iVar3;
  iVar1 = *(int *)(in_EDX + 0x1c);
  *in_ECX = local_10;
  in_ECX[3] = iVar1;
  return in_ECX;
}

