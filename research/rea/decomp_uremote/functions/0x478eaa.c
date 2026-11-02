// rea decompile_all
// name: FUN_00478eaa
// address: 0x478eaa
// body: available
// range: 0x478eaa-0x47905a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478eaa(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int *unaff_ESI;
  float10 fVar2;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = param_1;
  local_14 = param_2;
  local_8 = param_1 + param_3;
  if (param_3 < 0.0) {
    local_8 = param_1;
    local_10 = param_1 + param_3;
  }
  local_c = param_2 + param_4;
  if (param_4 < 0.0) {
    local_c = param_2;
    local_14 = param_2 + param_4;
  }
  FUN_00478afa(0xd);
  iVar1 = unaff_ESI[2];
  if (iVar1 == 0) {
    unaff_ESI[3] = (int)local_10;
    unaff_ESI[4] = (int)local_8;
    unaff_ESI[5] = (int)local_14;
    fVar2 = (float10)local_c;
  }
  else {
    fVar2 = (float10)FUN_0043d2e1(unaff_ESI[3],local_10);
    unaff_ESI[3] = (int)(float)fVar2;
    fVar2 = (float10)FUN_0043bcfe(unaff_ESI[4],local_8);
    unaff_ESI[4] = (int)(float)fVar2;
    fVar2 = (float10)FUN_0043d2e1(unaff_ESI[5],local_14);
    unaff_ESI[5] = (int)(float)fVar2;
    fVar2 = (float10)FUN_0043bcfe(unaff_ESI[6],local_c);
  }
  unaff_ESI[6] = (int)(float)fVar2;
  unaff_ESI[2] = iVar1 + 1;
  *(undefined4 *)(*unaff_ESI + iVar1 * 4) = 0x47c35100;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_10;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_c;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(undefined4 *)(*unaff_ESI + iVar1 * 4) = 0x47c35080;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_10;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_14;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(undefined4 *)(*unaff_ESI + iVar1 * 4) = 0x47c35080;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_8;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_14;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(undefined4 *)(*unaff_ESI + iVar1 * 4) = 0x47c35080;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_8;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(float *)(*unaff_ESI + iVar1 * 4) = local_c;
  iVar1 = unaff_ESI[2];
  unaff_ESI[2] = iVar1 + 1;
  *(undefined4 *)(*unaff_ESI + iVar1 * 4) = 0x47c35280;
  return;
}

