// rea decompile_all
// name: FUN_004ca269
// address: 0x4ca269
// body: available
// range: 0x4ca269-0x4ca39d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ca269(int param_1,undefined4 param_2)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 extraout_ST1;
  float local_34 [5];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    iVar3 = 2;
    pfVar2 = local_34;
    do {
      *pfVar2 = 0.0;
      iVar3 = iVar3 + -1;
      pfVar2[1] = 0.0;
      pfVar2 = pfVar2 + 2;
    } while (-1 < iVar3);
    FUN_004e37d9(param_2);
    iVar3 = FUN_0047e366();
    local_c = local_34[2] - local_34[0];
    local_8 = local_34[3] - local_34[1];
    local_14 = local_c / (float)iVar3;
    local_10 = local_8 / (float)iVar3;
    local_1c = local_34[0] + local_14;
    local_18 = local_34[1] + local_10;
    iVar3 = FUN_0047e371();
    local_c = (float)((float10)local_34[4] - extraout_ST1) / (float)iVar3;
    local_8 = (float)((float10)local_20 - extraout_ST0) / (float)iVar3;
    local_14 = (float)(extraout_ST1 + (float10)local_c);
    local_10 = (float)(extraout_ST0 + (float10)local_8);
    FUN_0047755b((float)extraout_ST1,(float)extraout_ST0,local_1c,local_18,local_14,local_10);
    cVar1 = FUN_0047753a();
    if (cVar1 != '\0') {
      FUN_00476f96();
    }
    FUN_004c0cff();
  }
  return;
}

