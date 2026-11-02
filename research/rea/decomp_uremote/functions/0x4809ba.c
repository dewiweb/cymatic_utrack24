// rea decompile_all
// name: FUN_004809ba
// address: 0x4809ba
// body: available
// range: 0x4809ba-0x480af8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004809ba(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  short sVar1;
  byte *pbVar2;
  float *pfVar3;
  int iVar4;
  float local_10c [64];
  code *local_c;
  undefined4 local_8;
  
  local_c = *(code **)(*(int *)(param_1 + 0x158) + 0x1c);
  local_8 = *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x20 + *(int *)(param_2 + 0x10) * 4);
  if (param_7 != 0) {
    param_1 = param_4;
    param_2 = param_7;
    do {
      pfVar3 = local_10c;
      iVar4 = 0;
      do {
        pbVar2 = (byte *)(*(int *)(param_3 + param_5 * 4 + iVar4 * 4) + param_6);
        *pfVar3 = (float)(int)(*pbVar2 - 0x80);
        pfVar3[1] = (float)(int)(pbVar2[1] - 0x80);
        pfVar3[2] = (float)(int)(pbVar2[2] - 0x80);
        pfVar3[3] = (float)(int)(pbVar2[3] - 0x80);
        pfVar3[4] = (float)(int)(pbVar2[4] - 0x80);
        pfVar3[5] = (float)(int)(pbVar2[5] - 0x80);
        pfVar3[6] = (float)(int)(pbVar2[6] - 0x80);
        pfVar3[7] = (float)(int)(pbVar2[7] - 0x80);
        pfVar3 = pfVar3 + 8;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
      (*local_c)(local_10c);
      iVar4 = 0;
      do {
        sVar1 = FUN_005b3fb0();
        *(short *)(param_1 + iVar4 * 2) = sVar1 + -0x4000;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x40);
      param_1 = param_1 + 0x80;
      param_6 = param_6 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

