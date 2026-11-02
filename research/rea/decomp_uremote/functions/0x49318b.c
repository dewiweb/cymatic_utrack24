// rea decompile_all
// name: FUN_0049318b
// address: 0x49318b
// body: available
// range: 0x49318b-0x493296 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049318b(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  bVar2 = *(byte *)((int)param_1 + 9);
  if (bVar2 < 8) {
    iVar3 = *param_1;
    if (bVar2 == 1) {
      pbVar5 = (byte *)((iVar3 - 1U >> 3) + in_ECX);
      iVar4 = 7 - (iVar3 - 1U & 7);
      pbVar6 = (byte *)(iVar3 + -1 + in_ECX);
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 1;
        if (iVar4 == 7) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar2 == 2) {
      pbVar5 = (byte *)((iVar3 - 1U >> 2) + in_ECX);
      iVar4 = (3 - (iVar3 - 1U & 3)) * 2;
      pbVar6 = (byte *)(iVar3 + -1 + in_ECX);
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 3;
        if (iVar4 == 6) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    else if (bVar2 == 4) {
      pbVar5 = (byte *)((iVar3 - 1U >> 1) + in_ECX);
      pbVar6 = (byte *)(iVar3 + -1 + in_ECX);
      iVar4 = (1 - (iVar3 - 1U & 1)) * 4;
      for (iVar1 = iVar3; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pbVar6 = *pbVar5 >> ((byte)iVar4 & 0x1f) & 0xf;
        if (iVar4 == 4) {
          iVar4 = 0;
          pbVar5 = pbVar5 + -1;
        }
        else {
          iVar4 = 4;
        }
        pbVar6 = pbVar6 + -1;
      }
    }
    *(undefined1 *)((int)param_1 + 9) = 8;
    *(byte *)((int)param_1 + 0xb) = *(byte *)((int)param_1 + 10) << 3;
    param_1[1] = (uint)*(byte *)((int)param_1 + 10) * iVar3;
  }
  return;
}

