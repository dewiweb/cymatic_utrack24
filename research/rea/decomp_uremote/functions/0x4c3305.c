// rea decompile_all
// name: FUN_004c3305
// address: 0x4c3305
// body: available
// range: 0x4c3305-0x4c334b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c3305(int param_1)

{
  char cVar1;
  int *piVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  undefined8 uVar4;
  
  FUN_004c4e62();
  piVar2 = (int *)FUN_004c5094();
  iVar3 = *piVar2;
  uVar4 = CONCAT44(iVar3 + piVar2[2] * 4,piVar2[2]);
  do {
    if (iVar3 == (int)((ulonglong)uVar4 >> 0x20)) {
      return 0;
    }
    uVar4 = FUN_004c4949();
    iVar3 = extraout_ECX;
    if ((int)uVar4 == param_1) {
      cVar1 = FUN_004c490a();
      if (cVar1 != '\0') {
        return 1;
      }
      uVar4 = FUN_004c4916();
      iVar3 = extraout_ECX_00;
      if ((char)uVar4 != '\0') {
        return 1;
      }
    }
    iVar3 = iVar3 + 4;
  } while( true );
}

