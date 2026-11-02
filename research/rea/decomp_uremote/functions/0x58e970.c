// rea decompile_all
// name: FUN_0058e970
// address: 0x58e970
// body: available
// range: 0x58e970-0x58ea53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058e970(void)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  int *in_ECX;
  char local_11;
  short local_c;
  short local_8;
  
  if (*(short *)((int)in_ECX + 6) != 0) {
    local_c = 0;
    local_8 = *(short *)((int)in_ECX + 6) + -1;
    while (local_c <= local_8) {
      uVar3 = local_c + (short)(((int)local_8 - (int)local_c) / 2);
      iVar1 = *(int *)(*in_ECX + (uint)uVar3 * 4);
      cVar2 = FUN_00504640(iVar1 + 8);
      if (cVar2 == '\0') {
        cVar2 = FUN_005046c0(iVar1 + 8);
        if (cVar2 == '\0') {
          local_11 = '\0';
        }
        else {
          local_11 = '\x01';
        }
      }
      else {
        local_11 = -1;
      }
      if (local_11 == '\0') {
        return iVar1;
      }
      if (local_11 < '\0') {
        local_8 = uVar3 - 1;
      }
      else {
        local_c = uVar3 + 1;
      }
    }
  }
  return 0;
}

