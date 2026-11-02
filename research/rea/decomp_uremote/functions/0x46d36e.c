// rea decompile_all
// name: FUN_0046d36e
// address: 0x46d36e
// body: available
// range: 0x46d36e-0x46d3de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046d36e(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_24 [8];
  
  local_24[0] = 0x207;
  local_24[1] = 0x206;
  local_24[2] = 0x205;
  local_24[3] = 0x204;
  local_24[4] = 0x203;
  local_24[5] = 0x202;
  local_24[6] = 0x201;
  iVar3 = 0;
  iVar2 = FUN_00424ba7();
  if (0 < iVar2) {
    do {
      cVar1 = FUN_0046d279(local_24[iVar3]);
      if (cVar1 != '\0') {
        return local_24[iVar3];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
}

