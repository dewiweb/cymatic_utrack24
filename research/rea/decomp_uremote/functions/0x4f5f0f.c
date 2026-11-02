// rea decompile_all
// name: FUN_004f5f0f
// address: 0x4f5f0f
// body: available
// range: 0x4f5f0f-0x4f5fb5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f5f0f(float *param_1)

{
  int iVar1;
  float *unaff_ESI;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = *unaff_ESI;
  iVar1 = 1;
  local_14 = unaff_ESI[1];
  local_c = local_14;
  local_8 = local_10;
  do {
    fVar2 = (float10)FUN_0043d2e1(local_8,unaff_ESI[iVar1 * 2]);
    local_8 = (float)fVar2;
    fVar2 = (float10)FUN_0043bcfe(local_10,unaff_ESI[iVar1 * 2]);
    local_10 = (float)fVar2;
    fVar2 = (float10)FUN_0043d2e1(local_c,unaff_ESI[iVar1 * 2 + 1]);
    local_c = (float)fVar2;
    fVar2 = (float10)FUN_0043bcfe(local_14,unaff_ESI[iVar1 * 2 + 1]);
    iVar1 = iVar1 + 1;
    local_14 = (float)fVar2;
  } while (iVar1 < 4);
  *param_1 = local_8;
  param_1[1] = local_c;
  param_1[2] = local_10 - local_8;
  param_1[3] = local_14 - local_c;
  return;
}

