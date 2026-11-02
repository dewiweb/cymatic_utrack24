// rea decompile_all
// name: FUN_004f2e56
// address: 0x4f2e56
// body: available
// range: 0x4f2e56-0x4f2f18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2e56(undefined4 param_1,char param_2)

{
  undefined4 in_EAX;
  int iVar1;
  float10 fVar2;
  undefined8 uVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  float local_18;
  float local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined4 local_c;
  float local_8;
  
  FUN_004f1b01();
  local_8 = (float)(int)(short)((uint)in_EAX >> 0x10) * 0.5;
  fVar2 = (float10)FUN_004a8e90(0xc47a0000,0x447a0000,local_8);
  if (param_2 == '\0') {
    local_18 = (float)fVar2 * -0.00390625;
    local_14 = 0.0;
  }
  else {
    local_18 = 0.0;
    local_14 = (float)fVar2 * 0.00390625;
  }
  local_c = 0;
  local_10 = 0;
  local_8 = 0.0;
  local_f = 0;
  local_e = 0;
  iVar1 = FUN_004f2de3(param_1);
  if (iVar1 != 0) {
    pfVar4 = &local_18;
    uVar5 = local_c;
    fVar6 = local_8;
    uVar3 = FUN_004f0c50(pfVar4,local_c,local_8);
    FUN_004ed5f2(iVar1,uVar3,pfVar4,uVar5,fVar6);
  }
  return;
}

