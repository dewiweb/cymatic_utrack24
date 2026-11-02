// rea decompile_all
// name: FUN_004808a0
// address: 0x4808a0
// body: available
// range: 0x4808a0-0x4809b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004808a0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  short sVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_10c [64];
  code *local_c;
  int local_8;
  
  local_c = *(code **)(*(int *)(param_1 + 0x158) + 8);
  local_8 = *(int *)(*(int *)(param_1 + 0x158) + 0xc + *(int *)(param_2 + 0x10) * 4);
  if (param_7 != 0) {
    param_1 = param_4;
    param_2 = param_7;
    do {
      piVar4 = local_10c;
      iVar5 = 0;
      do {
        pbVar3 = (byte *)(*(int *)(param_3 + param_5 * 4 + iVar5 * 4) + param_6);
        *piVar4 = *pbVar3 - 0x80;
        piVar4[1] = pbVar3[1] - 0x80;
        piVar4[2] = pbVar3[2] - 0x80;
        piVar4[3] = pbVar3[3] - 0x80;
        piVar4[4] = pbVar3[4] - 0x80;
        piVar4[5] = pbVar3[5] - 0x80;
        piVar4[6] = pbVar3[6] - 0x80;
        piVar4[7] = pbVar3[7] - 0x80;
        piVar4 = piVar4 + 8;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 8);
      (*local_c)(local_10c);
      iVar5 = 0;
      do {
        iVar1 = *(int *)(local_8 + iVar5 * 4);
        iVar6 = local_10c[iVar5];
        if (iVar6 < 0) {
          iVar6 = (iVar1 >> 1) - iVar6;
          if (iVar6 < iVar1) {
            sVar2 = 0;
          }
          else {
            sVar2 = (short)(iVar6 / iVar1);
          }
          sVar2 = -sVar2;
        }
        else {
          iVar6 = iVar6 + (iVar1 >> 1);
          if (iVar6 < iVar1) {
            sVar2 = 0;
          }
          else {
            sVar2 = (short)(iVar6 / iVar1);
          }
        }
        *(short *)(param_1 + iVar5 * 2) = sVar2;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x40);
      param_1 = param_1 + 0x80;
      param_6 = param_6 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

