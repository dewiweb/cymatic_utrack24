// rea decompile_all
// name: FUN_0047f208
// address: 0x47f208
// body: available
// range: 0x47f208-0x47f28c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047f208(void)

{
  int iVar1;
  int in_ECX;
  uint *unaff_EDI;
  char local_10d;
  byte local_10c [3];
  byte local_109;
  undefined1 local_90 [136];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_90;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0xc))(&local_10d,1);
  if (iVar1 == 1) {
    if (local_10d == -7) {
      iVar1 = FUN_0047f1bb(local_10c);
      if (iVar1 < 0) goto LAB_0047f277;
      if ((local_10c[0] & 1) != 0) {
        *unaff_EDI = (uint)local_109;
      }
    }
    do {
      iVar1 = FUN_0047f1bb(local_10c);
    } while (0 < iVar1);
  }
LAB_0047f277:
  __security_check_cookie(local_8 ^ (uint)local_90);
  return;
}

