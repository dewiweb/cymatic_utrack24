// rea decompile_all
// name: FUN_004a5079
// address: 0x4a5079
// body: available
// range: 0x4a5079-0x4a51aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a5079(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *in_EAX;
  undefined4 *unaff_EBX;
  
  fVar1 = *in_EAX;
  fVar2 = in_EAX[1];
  fVar5 = in_EAX[2] + *in_EAX;
  fVar3 = in_EAX[1];
  fVar4 = *in_EAX;
  fVar6 = in_EAX[3] + in_EAX[1];
  FUN_004a8f39(param_1);
  FUN_004a8f39(param_1);
  FUN_0044dccd(fVar1,fVar5,fVar4,fVar5);
  FUN_004a9342(fVar1,fVar5,fVar4,fVar5);
  FUN_0044dccd(fVar2,fVar3,fVar6,fVar6);
  FUN_004a9342(fVar2,fVar3,fVar6,fVar6);
  *unaff_EBX = 0;
  unaff_EBX[1] = 0;
  unaff_EBX[2] = 0;
  unaff_EBX[3] = 0;
  FUN_004a6e83();
  return;
}

