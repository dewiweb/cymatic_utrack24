// rea decompile_all
// name: FUN_004b7fa1
// address: 0x4b7fa1
// body: available
// range: 0x4b7fa1-0x4b80af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7fa1(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *in_EAX;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  int local_10;
  
  piVar7 = *(int **)(in_ECX + 8);
  piVar9 = piVar7 + *(int *)(in_ECX + 0x10) * 4;
  for (; piVar7 != piVar9; piVar7 = piVar7 + 4) {
    iVar1 = *piVar7;
    iVar2 = piVar7[1];
    iVar3 = piVar7[2];
    iVar8 = piVar7[3] + iVar2;
    for (; iVar2 < iVar8; iVar2 = iVar2 + 1) {
      piVar4 = (int *)in_EAX[0xc];
      in_EAX[0xd] = piVar4[2] * iVar2 + *piVar4;
      if ((char)in_EAX[10] == '\0') {
        if (*(char *)((int)in_EAX + 0x29) == '\0') {
          iVar5 = FUN_00470221(((double)iVar2 - *(double *)(in_EAX + 8)) * *(double *)(in_EAX + 6));
          in_EAX[3] = iVar5;
        }
      }
      else {
        iVar5 = FUN_00470645(0,in_EAX[1]);
        in_EAX[2] = *(int *)(*in_EAX + iVar5 * 4);
      }
      iVar5 = piVar4[3];
      pbVar10 = (byte *)(iVar5 * iVar1 + in_EAX[0xd]);
      local_10 = iVar3;
      do {
        iVar6 = FUN_004754e8();
        *pbVar10 = (char)((0x100 - (uint)*(byte *)(iVar6 + 3)) * (uint)*pbVar10 >> 8) +
                   *(byte *)(iVar6 + 3);
        pbVar10 = pbVar10 + iVar5;
        local_10 = local_10 + -1;
      } while (0 < local_10);
    }
  }
  return;
}

