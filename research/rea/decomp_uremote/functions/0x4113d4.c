// rea decompile_all
// name: FUN_004113d4
// address: 0x4113d4
// body: available
// range: 0x4113d4-0x41142f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_004113d4(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined2 local_8 [2];
  
  iVar2 = unaff_ESI[2];
  uVar1 = 0;
  *unaff_EDI = 0;
  if ((uint)unaff_ESI[1] <= iVar2 + 1U) {
LAB_00411426:
    *unaff_EDI = 0x55;
    return 0;
  }
  if ((code *)unaff_ESI[5] == (code *)0x0) {
    puVar3 = (undefined2 *)(*unaff_ESI + iVar2);
    if (puVar3 == (undefined2 *)0x0) goto LAB_00411420;
  }
  else {
    iVar2 = (*(code *)unaff_ESI[5])();
    if (iVar2 != 2) goto LAB_00411426;
    puVar3 = local_8;
  }
  uVar1 = *puVar3;
LAB_00411420:
  unaff_ESI[2] = unaff_ESI[2] + 2;
  return uVar1;
}

