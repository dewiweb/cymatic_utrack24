// rea decompile_all
// name: FUN_004287fb
// address: 0x4287fb
// body: available
// range: 0x4287fb-0x42885f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004287fb(void)

{
  byte bVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  
  iVar5 = 0;
  iVar2 = FUN_004111b5();
  if (iVar2 == 0) {
    if (3 < in_EAX) {
      iVar2 = (in_EAX - 4 >> 2) + 1;
      do {
        iVar3 = FUN_004112c7();
        iVar5 = iVar5 + iVar3;
        in_EAX = in_EAX - 4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (in_EAX != 0) {
      bVar6 = 0x18;
      do {
        uVar4 = FUN_00411266();
        bVar1 = bVar6 & 0x1f;
        bVar6 = bVar6 - 8;
        iVar5 = iVar5 + ((uVar4 & 0xff) << bVar1);
        in_EAX = in_EAX - 1;
      } while (in_EAX != 0);
    }
    FUN_00411249();
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

