// rea decompile_all
// name: FUN_00411736
// address: 0x411736
// body: available
// range: 0x411736-0x41178e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00411736(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = in_EAX;
  if ((int)in_EAX < 0) {
    uVar1 = -in_EAX;
  }
  uVar2 = (uVar1 & 0xffff) * 0x4585 + (uVar1 >> 0x10) * 0xb9e9;
  uVar4 = (uVar1 & 0xffff) * 0xb9e9 >> 0x10;
  uVar3 = uVar2;
  if (uVar2 < uVar4) {
    uVar3 = uVar4;
  }
  iVar5 = (uVar1 >> 0x10) * 0x4585 + (uVar2 + uVar4 >> 0x10);
  if (uVar2 + uVar4 < uVar3) {
    iVar5 = iVar5 + 0x10000;
  }
  if ((int)in_EAX < 0) {
    iVar5 = -iVar5;
  }
  return iVar5;
}

