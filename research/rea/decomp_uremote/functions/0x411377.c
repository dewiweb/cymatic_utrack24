// rea decompile_all
// name: FUN_00411377
// address: 0x411377
// body: available
// range: 0x411377-0x4113d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_00411377(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_8 [4];
  
  iVar2 = unaff_ESI[2];
  uVar1 = 0;
  *unaff_EDI = 0;
  if ((uint)unaff_ESI[1] <= iVar2 + 1U) {
LAB_004113ca:
    *unaff_EDI = 0x55;
    return 0;
  }
  if ((code *)unaff_ESI[5] == (code *)0x0) {
    puVar3 = (undefined1 *)(*unaff_ESI + iVar2);
    if (puVar3 == (undefined1 *)0x0) goto LAB_004113c4;
  }
  else {
    iVar2 = (*(code *)unaff_ESI[5])();
    if (iVar2 != 2) goto LAB_004113ca;
    puVar3 = local_8;
  }
  uVar1 = CONCAT11(*puVar3,puVar3[1]);
LAB_004113c4:
  unaff_ESI[2] = unaff_ESI[2] + 2;
  return uVar1;
}

