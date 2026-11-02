// rea decompile_all
// name: FUN_004a1206
// address: 0x4a1206
// body: available
// range: 0x4a1206-0x4a134e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a1206(int *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_10;
  float local_c;
  
  local_1c = 0.0;
  iVar6 = param_1[2];
  bVar3 = true;
  fVar8 = 0.0;
  while (iVar6 = iVar6 + -1, -1 < iVar6) {
    iVar2 = *(int *)(*param_1 + iVar6 * 4);
    if (0 < *(int *)(iVar2 + 0x10)) {
      local_10 = *(float *)(*(int *)(iVar2 + 8) + 4);
      iVar4 = *(int *)(iVar2 + 0x10) + -1;
      local_c = local_10;
      if (-1 < iVar4) {
        pfVar5 = (float *)(iVar4 * 0x10 + 0xc + *(int *)(iVar2 + 8));
        do {
          fVar1 = pfVar5[-2];
          fVar7 = (float10)FUN_0043d2e1(local_c,fVar1);
          local_c = (float)fVar7;
          fVar7 = (float10)FUN_0043bcfe(local_10,*pfVar5 + fVar1);
          iVar4 = iVar4 + -1;
          local_10 = (float)fVar7;
          pfVar5 = pfVar5 + -4;
        } while (-1 < iVar4);
      }
      if (bVar3) {
        bVar3 = false;
        FUN_004a6891(local_c,local_10);
        local_1c = local_24;
        fVar8 = local_20;
      }
      else {
        FUN_004a6891(local_c,local_10);
        fVar7 = (float10)FUN_0043bcfe(fVar8,local_28);
        fVar8 = (float)fVar7;
        fVar7 = (float10)FUN_0043d2e1(local_1c,local_2c,fVar8);
        FUN_004a6891((float)fVar7,fVar8);
        local_1c = local_34;
        fVar8 = local_30;
      }
    }
  }
  FUN_004a6891((float)param_1[5] + local_1c,fVar8 + (float)param_1[5]);
  return param_2;
}

