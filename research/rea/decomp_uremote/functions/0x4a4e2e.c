// rea decompile_all
// name: FUN_004a4e2e
// address: 0x4a4e2e
// body: available
// range: 0x4a4e2e-0x4a4e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a4e2e(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  float10 fVar5;
  
  uVar1 = *unaff_ESI;
  uVar2 = unaff_ESI[1];
  uVar3 = unaff_ESI[2];
  fVar5 = (float10)FUN_0043d2e1(param_1,unaff_ESI[3]);
  fVar4 = (float)fVar5;
  *unaff_EDI = uVar1;
  unaff_EDI[1] = uVar2;
  unaff_EDI[2] = uVar3;
  unaff_EDI[3] = fVar4;
  unaff_ESI[1] = (float)unaff_ESI[1] + fVar4;
  unaff_ESI[3] = (float)unaff_ESI[3] - fVar4;
  return;
}

