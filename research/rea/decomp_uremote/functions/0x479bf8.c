// rea decompile_all
// name: FUN_00479bf8
// address: 0x479bf8
// body: available
// range: 0x479bf8-0x47a106 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00479bf8(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float *unaff_EBX;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = unaff_EBX[2];
  fVar5 = (float10)FUN_0043d2e1();
  fVar6 = (float10)FUN_0043d2e1();
  fVar2 = (float)fVar5 * 2.0;
  fVar3 = (float)fVar6 * 2.0;
  FUN_00478b0d();
  FUN_0043d2e1();
  FUN_0043d2e1(fVar1 * 0.5 - 1.0);
  FUN_004a4dea();
  cVar4 = FUN_00450d54();
  if (cVar4 != '\0') {
    FUN_00478ba1();
    FUN_00478ba1();
    FUN_00478ba1();
  }
  FUN_00478ba1();
  FUN_00479614(param_1,(*unaff_EBX + unaff_EBX[2]) - fVar2,unaff_EBX[1],fVar2,fVar3);
  cVar4 = FUN_00450d54();
  if (cVar4 != '\0') {
    FUN_00478ba1();
    FUN_00478ba1();
    FUN_00478ba1();
  }
  FUN_00478ba1();
  FUN_00479614(param_1,(*unaff_EBX + unaff_EBX[2]) - fVar2,(unaff_EBX[3] + unaff_EBX[1]) - fVar3,
               fVar2,fVar3);
  cVar4 = FUN_00450d54();
  if (cVar4 != '\0') {
    FUN_00478ba1();
    FUN_00478ba1();
    FUN_00478ba1();
  }
  FUN_00478ba1();
  FUN_00479614(param_1,*unaff_EBX,(unaff_EBX[3] + unaff_EBX[1]) - fVar3,fVar2,fVar3);
  cVar4 = FUN_00450d54();
  if (cVar4 != '\0') {
    FUN_00478ba1();
    FUN_00478ba1();
    FUN_00478ba1();
  }
  FUN_00478ba1();
  FUN_00479614(param_1,*unaff_EBX,unaff_EBX[1],fVar2,fVar3);
  FUN_00478e1f();
  return;
}

