// rea decompile_all
// name: FUN_004a086b
// address: 0x4a086b
// body: available
// range: 0x4a086b-0x4a08e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a086b(float param_1)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int *unaff_EBX;
  int iVar3;
  float10 fVar4;
  
  if ((in_ECX < 0) || (unaff_EBX[2] < in_EAX + in_ECX)) {
    in_ECX = unaff_EBX[2] - in_EAX;
  }
  if (0 < in_ECX) {
    iVar2 = in_EAX * 0x1c;
    fVar1 = *(float *)(iVar2 + 0xc + *unaff_EBX);
    while (in_ECX = in_ECX + -1, -1 < in_ECX) {
      iVar3 = *unaff_EBX + iVar2;
      iVar2 = iVar2 + 0x1c;
      *(float *)(iVar3 + 0xc) = (*(float *)(iVar3 + 0xc) - fVar1) * param_1 + fVar1;
      fVar4 = (float10)FUN_0049f98f();
      FUN_0049f973((float)(fVar4 * (float10)param_1));
      *(float *)(iVar3 + 0x14) = *(float *)(iVar3 + 0x14) * param_1;
    }
  }
  return;
}

