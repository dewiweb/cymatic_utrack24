// rea decompile_all
// name: FUN_0048d670
// address: 0x48d670
// body: available
// range: 0x48d670-0x48d6d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048d670(int param_1,int param_2,undefined4 param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  iVar6 = 0;
  if (0 < param_4) {
    do {
      pbVar5 = *(byte **)(param_2 + iVar6 * 4);
      for (iVar2 = iVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
        psVar1 = (short *)(*(int *)(iVar4 + (uint)(*pbVar5 >> 3) * 4) +
                          ((uint)(pbVar5[1] >> 2) * 0x20 + (uint)(pbVar5[2] >> 3)) * 2);
        *psVar1 = *psVar1 + 1;
        if (*psVar1 == 0) {
          *psVar1 = -1;
        }
        pbVar5 = pbVar5 + 3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_4);
  }
  return;
}

