// rea decompile_all
// name: FUN_004114f7
// address: 0x4114f7
// body: available
// range: 0x4114f7-0x41155f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004114f7(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined4 local_8;
  
  iVar2 = unaff_ESI[2];
  uVar1 = 0;
  *unaff_EDI = 0;
  if ((uint)unaff_ESI[1] <= iVar2 + 3U) {
LAB_00411556:
    *unaff_EDI = 0x55;
    return 0;
  }
  if ((code *)unaff_ESI[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*unaff_ESI + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00411550;
  }
  else {
    iVar2 = (*(code *)unaff_ESI[5])();
    if (iVar2 != 4) goto LAB_00411556;
    puVar3 = &local_8;
  }
  uVar1 = *puVar3;
LAB_00411550:
  unaff_ESI[2] = unaff_ESI[2] + 4;
  return uVar1;
}

