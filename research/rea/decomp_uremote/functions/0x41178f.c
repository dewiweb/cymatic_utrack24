// rea decompile_all
// name: FUN_0041178f
// address: 0x41178f
// body: available
// range: 0x41178f-0x411801 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0041178f(void)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *unaff_EDI;
  
  uVar5 = *unaff_EDI;
  uVar6 = unaff_EDI[1];
  uVar4 = uVar5;
  if ((int)uVar5 < 0) {
    uVar4 = -uVar5;
  }
  uVar1 = uVar6;
  if ((int)uVar6 < 0) {
    uVar1 = -uVar6;
  }
  uVar1 = uVar1 | uVar4;
  uVar4 = 0;
  if (0xffff < (int)uVar1) {
    uVar1 = (int)uVar1 >> 0x10;
    uVar4 = 0x10;
  }
  if (0xff < (int)uVar1) {
    uVar1 = (int)uVar1 >> 8;
    uVar4 = uVar4 + 8;
  }
  if (0xf < (int)uVar1) {
    uVar1 = (int)uVar1 >> 4;
    uVar4 = uVar4 + 4;
  }
  if (3 < (int)uVar1) {
    uVar1 = (int)uVar1 >> 2;
    uVar4 = uVar4 + 2;
  }
  if (1 < (int)uVar1) {
    uVar4 = uVar4 + 1;
  }
  if (uVar4 < 0x1c) {
    iVar2 = 0x1b - uVar4;
    uVar5 = uVar5 << ((byte)iVar2 & 0x1f);
    uVar6 = uVar6 << ((byte)iVar2 & 0x1f);
  }
  else {
    bVar3 = (byte)(uVar4 - 0x1b);
    uVar5 = (int)uVar5 >> (bVar3 & 0x1f);
    uVar6 = (int)uVar6 >> (bVar3 & 0x1f);
    iVar2 = -(uVar4 - 0x1b);
  }
  unaff_EDI[1] = uVar6;
  *unaff_EDI = uVar5;
  return iVar2;
}

