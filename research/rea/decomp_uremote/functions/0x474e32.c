// rea decompile_all
// name: FUN_00474e32
// address: 0x474e32
// body: available
// range: 0x474e32-0x474e5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00474e32(void)

{
  ushort uVar1;
  undefined4 *in_EAX;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  bool bVar5;
  
  iVar2 = 0;
  puVar3 = (ushort *)*in_EAX;
  while( true ) {
    puVar4 = puVar3 + 1;
    if (*puVar3 - 0xd800 < 0x800) {
      uVar1 = *puVar4;
      puVar4 = puVar3 + 2;
      bVar5 = uVar1 == 0;
    }
    else {
      bVar5 = *puVar3 == 0;
    }
    if (bVar5) break;
    iVar2 = iVar2 + 1;
    puVar3 = puVar4;
  }
  return iVar2;
}

