// rea decompile_all
// name: FUN_00405b17
// address: 0x405b17
// body: available
// range: 0x405b17-0x405bca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00405b17(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  byte *in_EAX;
  int iVar6;
  undefined *puVar7;
  
  sVar5 = 0;
  if ((in_EAX == (byte *)0x0) || (bVar1 = *in_EAX, bVar1 == 0)) {
    iVar6 = 0;
  }
  else {
    sVar4 = 10;
    puVar7 = &DAT_008fa3e8;
    if (bVar1 == 0x2d) {
      in_EAX = in_EAX + 1;
    }
    if ((*in_EAX == 0x30) && ((in_EAX[1] == 0x78 || (in_EAX[1] == 0x58)))) {
      sVar4 = 0x10;
      puVar7 = &DAT_008fa408;
      in_EAX = in_EAX + 2;
    }
    bVar2 = *in_EAX;
    bVar3 = *in_EAX;
    while ((puVar7[bVar2 >> 3] & (byte)(1 << (bVar3 & 7))) != 0) {
      sVar5 = (ushort)(byte)(&DAT_008fa348)[(char)bVar3] + sVar4 * sVar5;
      in_EAX = in_EAX + 1;
      bVar2 = *in_EAX;
      bVar3 = bVar2;
    }
    iVar6 = (int)sVar5;
    if (bVar1 == 0x2d) {
      iVar6 = -iVar6;
    }
  }
  return iVar6;
}

