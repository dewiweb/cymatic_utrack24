// rea decompile_all
// name: FUN_00464714
// address: 0x464714
// body: available
// range: 0x464714-0x464766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00464714(void)

{
  uint uVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  int local_8;
  
  uVar1 = (**(code **)(*in_ECX + 0x10))();
  if (((char)uVar1 != '\0') && (uVar3 = uVar1 & 0x7f, uVar3 < 5)) {
    local_8 = 0;
    uVar2 = (**(code **)(*in_ECX + 0xc))(&local_8,uVar3);
    if (uVar2 == uVar3) {
      if ((char)uVar1 < '\0') {
        return -local_8;
      }
      return local_8;
    }
  }
  return 0;
}

