// rea decompile_all
// name: FUN_004f7b96
// address: 0x4f7b96
// body: available
// range: 0x4f7b96-0x4f7c88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_004f7b96(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *in_ECX;
  float *in_EDX;
  uint uVar5;
  
  fVar1 = in_EDX[2] + *in_EDX;
  uVar5 = 0;
  if ((*in_EDX < *in_ECX != (*in_EDX == *in_ECX)) && (*in_ECX < fVar1)) {
    uVar5 = 1;
  }
  fVar2 = in_EDX[3] + in_EDX[1];
  if ((in_EDX[1] < in_ECX[1] != (in_EDX[1] == in_ECX[1])) && (in_ECX[1] < fVar2)) {
    uVar5 = uVar5 | 2;
  }
  fVar3 = in_ECX[2] + *in_ECX;
  if ((*in_EDX < fVar3 != (*in_EDX == fVar3)) && (fVar3 < fVar1)) {
    uVar5 = uVar5 | 4;
  }
  fVar4 = in_ECX[3] + in_ECX[1];
  if ((in_EDX[1] < fVar4 != (in_EDX[1] == fVar4)) && (fVar4 < fVar2)) {
    uVar5 = uVar5 | 8;
  }
  if (uVar5 == 7) {
    in_ECX[3] = fVar4 - fVar2;
    in_ECX[1] = fVar2;
  }
  else if (uVar5 == 0xb) {
    in_ECX[2] = fVar3 - fVar1;
    *in_ECX = fVar1;
  }
  else if (uVar5 == 0xd) {
    in_ECX[3] = in_EDX[1] - in_ECX[1];
  }
  else {
    if (uVar5 - 0xe != 0) {
      return uVar5 - 0xe & 0xffffff00;
    }
    in_ECX[2] = *in_EDX - *in_ECX;
  }
  return 1;
}

