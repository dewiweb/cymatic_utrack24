// rea decompile_all
// name: FUN_004cc4e8
// address: 0x4cc4e8
// body: available
// range: 0x4cc4e8-0x4cc632 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004cc4e8(undefined4 param_1)

{
  float *pfVar1;
  char cVar2;
  undefined4 uVar3;
  int unaff_EBX;
  undefined1 local_58 [48];
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(int *)(unaff_EBX + 4) == 0) {
LAB_004cc62b:
    uVar3 = 0;
  }
  else {
    FUN_004e3abd(param_1);
    FUN_004e3abd(param_1);
    FUN_00476f80();
    pfVar1 = *(float **)(unaff_EBX + 4);
    if (*(char *)(pfVar1 + 4) != '\0') {
      FUN_004e3abd(param_1);
      local_20 = (local_18 + local_c) - local_14;
      local_1c = (local_14 + local_18) - local_10;
      FUN_004775b5(local_58,local_18,local_14,local_18,local_14,local_10,local_c,local_10,local_c,
                   local_20,local_1c,local_28,local_24);
      FUN_00476f96();
    }
    cVar2 = FUN_004f5a31(local_18,local_14);
    if (cVar2 == '\0') {
      cVar2 = FUN_004f5a31(local_10,local_c);
      if (cVar2 == '\0') {
        cVar2 = FUN_00477042();
        if (cVar2 == '\0') goto LAB_004cc62b;
      }
    }
    *pfVar1 = local_18;
    pfVar1[1] = local_14;
    pfVar1[2] = local_10;
    pfVar1[3] = local_c;
    FUN_00476f96();
    uVar3 = 1;
  }
  return uVar3;
}

