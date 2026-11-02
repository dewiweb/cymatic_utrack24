// rea decompile_all
// name: FUN_004a15e7
// address: 0x4a15e7
// body: available
// range: 0x4a15e7-0x4a1719 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a15e7(float param_1,undefined4 param_2)

{
  float *pfVar1;
  int *in_ECX;
  float10 fVar2;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_1c = param_1 * 0.5;
  local_c = param_1;
  local_18 = 0.0;
  while( true ) {
    if (param_1 <= local_1c) {
      if (param_1 != local_c) {
        FUN_004a1591(local_c,param_2);
      }
      return;
    }
    FUN_004a1591(param_1,param_2);
    if (in_ECX[2] < 2) break;
    pfVar1 = (float *)FUN_004a1206(*(undefined4 *)(*in_ECX + -4 + in_ECX[2] * 4),local_24);
    local_10 = pfVar1[1] - *pfVar1;
    pfVar1 = (float *)FUN_004a1206(*(undefined4 *)(*in_ECX + -8 + in_ECX[2] * 4),local_2c);
    local_8 = pfVar1[1] - *pfVar1;
    fVar2 = (float10)FUN_0043d2e1(local_10,local_8);
    local_14 = (float)fVar2;
    if (local_14 <= 0.0) {
      fVar2 = (float10)1;
    }
    else {
      fVar2 = (float10)FUN_0043bcfe(local_10,local_8);
      fVar2 = fVar2 / (float10)local_14;
    }
    local_8 = (float)fVar2;
    if (0.9 < local_8) {
      return;
    }
    if (local_18 < local_8) {
      local_c = param_1;
      local_18 = local_8;
    }
    param_1 = param_1 - 10.0;
  }
  return;
}

