// rea decompile_all
// name: FUN_004956fa
// address: 0x4956fa
// body: available
// range: 0x4956fa-0x495800 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004956fa(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int in_EAX;
  uint uVar5;
  int iVar6;
  byte *in_EDX;
  byte *pbVar7;
  byte *pbVar8;
  int *unaff_EBX;
  
  iVar6 = *unaff_EBX;
  if (*(char *)((int)unaff_EBX + 9) == '\b') {
    cVar1 = (char)unaff_EBX[2];
    if ((cVar1 == '\x02') && (iVar3 = iVar6, pbVar4 = in_EDX, param_1 != 0)) {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        bVar2 = *in_EDX;
        pbVar7 = in_EDX + 1;
        pbVar8 = in_EDX + 2;
        in_EDX = in_EDX + 3;
        *pbVar4 = *(byte *)((((bVar2 & 0xf8) << 5 | *pbVar7 & 0xf8) << 2 | (int)(uint)*pbVar8 >> 3)
                           + param_1);
        pbVar4 = pbVar4 + 1;
      }
    }
    else {
      if ((cVar1 != '\x06') || (iVar3 = iVar6, pbVar4 = in_EDX, param_1 == 0)) {
        if (cVar1 != '\x03') {
          return;
        }
        if (in_EAX == 0) {
          return;
        }
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *in_EDX = *(byte *)((uint)*in_EDX + in_EAX);
          in_EDX = in_EDX + 1;
        }
        return;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        bVar2 = *in_EDX;
        pbVar7 = in_EDX + 1;
        pbVar8 = in_EDX + 2;
        in_EDX = in_EDX + 4;
        *pbVar4 = *(byte *)((((bVar2 & 0xf8) << 5 | *pbVar7 & 0xf8) << 2 | (int)(uint)*pbVar8 >> 3)
                           + param_1);
        pbVar4 = pbVar4 + 1;
      }
    }
    bVar2 = *(byte *)((int)unaff_EBX + 9);
    *(byte *)((int)unaff_EBX + 0xb) = bVar2;
    *(undefined1 *)(unaff_EBX + 2) = 3;
    *(undefined1 *)((int)unaff_EBX + 10) = 1;
    if (bVar2 < 8) {
      uVar5 = (uint)bVar2 * iVar6 + 7 >> 3;
    }
    else {
      uVar5 = (uint)(bVar2 >> 3) * iVar6;
    }
    unaff_EBX[1] = uVar5;
  }
  return;
}

