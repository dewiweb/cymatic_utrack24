// rea decompile_all
// name: FUN_0047909d
// address: 0x47909d
// body: available
// range: 0x47909d-0x47932c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047909d(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 undefined4 param_6,char param_7,char param_8,char param_9,char param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar5 = (float10)FUN_0043d2e1(param_5,param_3 * 0.5);
  fVar1 = (float)fVar5;
  fVar5 = (float10)FUN_0043d2e1(param_6,param_4 * 0.5);
  fVar2 = (float)fVar5;
  fVar3 = fVar1 * 0.45;
  fVar4 = fVar2 * 0.45;
  param_3 = param_1 + param_3;
  param_4 = param_2 + param_4;
  if (param_7 == '\0') {
    FUN_00478b0d(param_1,param_2);
  }
  else {
    FUN_00478b0d(param_1,param_2 + fVar2);
    FUN_00478d07(param_1,fVar4 + param_2,fVar3 + param_1,param_2,param_1 + fVar1,param_2);
  }
  if (param_8 == '\0') {
    FUN_00478ba1(param_3,param_2);
  }
  else {
    FUN_00478ba1(param_3 - fVar1,param_2);
    FUN_00478d07(param_3 - fVar3,param_2,param_3,fVar4 + param_2,param_3,param_2 + fVar2);
  }
  if (param_10 == '\0') {
    FUN_00478ba1(param_3,param_4);
  }
  else {
    FUN_00478ba1(param_3,param_4 - fVar2);
    FUN_00478d07(param_3,param_4 - fVar4,param_3 - fVar3,param_4,param_3 - fVar1,param_4);
  }
  if (param_9 == '\0') {
    FUN_00478ba1(param_1,param_4);
  }
  else {
    FUN_00478ba1(param_1 + fVar1,param_4);
    FUN_00478d07(fVar3 + param_1,param_4,param_1,param_4 - fVar4,param_1,param_4 - fVar2);
  }
  FUN_00478e1f();
  return;
}

