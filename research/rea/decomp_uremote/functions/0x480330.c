// rea decompile_all
// name: FUN_00480330
// address: 0x480330
// body: available
// range: 0x480330-0x4803b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480330(int param_1,undefined4 *param_2,int *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  
  param_5 = param_5 + -1;
  uVar4 = *(uint *)(param_1 + 0x1c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x150) + 8);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    do {
      iVar6 = *(int *)(param_4 + *param_3);
      pbVar7 = (byte *)*param_2;
      param_4 = param_4 + 4;
      uVar8 = 0;
      if (uVar4 != 0) {
        do {
          bVar3 = *pbVar7;
          pbVar1 = pbVar7 + 2;
          pbVar2 = pbVar7 + 1;
          pbVar7 = pbVar7 + 3;
          *(char *)(uVar8 + iVar6) =
               (char)((uint)(*(int *)(iVar5 + 0x800 + (uint)*pbVar1 * 4) +
                             *(int *)(iVar5 + 0x400 + (uint)*pbVar2 * 4) +
                            *(int *)(iVar5 + (uint)bVar3 * 4)) >> 0x10);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar4);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + 1;
    } while (-1 < param_5);
  }
  return;
}

