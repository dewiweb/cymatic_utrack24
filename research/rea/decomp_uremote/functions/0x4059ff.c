// rea decompile_all
// name: FUN_004059ff
// address: 0x4059ff
// body: available
// range: 0x4059ff-0x405a75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004059ff(void)

{
  byte bVar1;
  byte *in_EAX;
  int iVar2;
  undefined *puVar3;
  int local_4;
  
  if ((in_EAX == (byte *)0x0) || (*in_EAX == 0)) {
    iVar2 = 0;
  }
  else {
    local_4 = 10;
    puVar3 = &DAT_008fa3e8;
    if ((*in_EAX == 0x30) && ((in_EAX[1] == 0x78 || (in_EAX[1] == 0x58)))) {
      local_4 = 0x10;
      puVar3 = &DAT_008fa408;
      in_EAX = in_EAX + 2;
    }
    iVar2 = 0;
    while( true ) {
      bVar1 = *in_EAX;
      if ((puVar3[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) == 0) break;
      iVar2 = iVar2 * local_4 + (uint)(byte)(&DAT_008fa348)[(char)bVar1];
      in_EAX = in_EAX + 1;
    }
  }
  return iVar2;
}

