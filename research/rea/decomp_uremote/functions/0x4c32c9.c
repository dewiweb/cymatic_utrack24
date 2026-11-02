// rea decompile_all
// name: FUN_004c32c9
// address: 0x4c32c9
// body: available
// range: 0x4c32c9-0x4c3304 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c32c9(int param_1)

{
  int *piVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar2;
  undefined8 uVar3;
  
  FUN_004c4e62();
  piVar1 = (int *)FUN_004c5094();
  iVar2 = *piVar1;
  uVar3 = CONCAT44(iVar2 + piVar1[2] * 4,piVar1[2]);
  while( true ) {
    if (iVar2 == (int)((ulonglong)uVar3 >> 0x20)) {
      return 0;
    }
    uVar3 = FUN_004c4916();
    iVar2 = extraout_ECX;
    if (((char)uVar3 != '\0') &&
       (uVar3 = FUN_004c4949(), iVar2 = extraout_ECX_00, (int)uVar3 == param_1)) break;
    iVar2 = iVar2 + 4;
  }
  return 1;
}

