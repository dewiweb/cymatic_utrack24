// rea decompile_all
// name: FUN_004e0ff3
// address: 0x4e0ff3
// body: available
// range: 0x4e0ff3-0x4e12ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e0ff3(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int *in_EAX;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 local_c;
  int local_8;
  
  FUN_004c4e62();
  iVar8 = FUN_004c53da();
  iVar1 = *(int *)(iVar8 + 0x10);
  iVar2 = *(int *)(iVar8 + 0x1c);
  iVar3 = *(int *)(iVar8 + 0x18);
  iVar8 = *(int *)(iVar8 + 0x14);
  FUN_004e12bb(iVar2 + -0x18);
  if (param_2 == '\0') {
    iVar9 = *in_EAX;
    iVar4 = *(int *)(param_1 + 0x70);
    bVar5 = in_EAX[2] / 2 + iVar9 < iVar3 / 2 + iVar1;
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x70) == 0) {
        iVar4 = iVar3 + -0x20;
      }
      else {
        if (*(int *)(iVar4 + 0x18) / 2 + *(int *)(*(int *)(param_1 + 0x70) + 0x10) <=
            *(int *)(*(int *)(iVar4 + 0x70) + 0x18) / 2 + *(int *)(*(int *)(iVar4 + 0x70) + 0x10)) {
          if (local_8 + 4 < iVar9) {
            bVar5 = false;
          }
          goto LAB_004e112e;
        }
        iVar4 = iVar3 + -4;
      }
      if (in_EAX[2] + iVar9 + local_8 < iVar4 + iVar1) {
        bVar5 = true;
      }
    }
LAB_004e112e:
    iVar9 = FUN_00439b5a();
    if (iVar9 + -0x20 < local_8) {
      FUN_004e12bb(iVar2 + -0x18);
      if (1 < *(int *)(param_1 + 0xc4)) {
        FUN_004e12bb(iVar2 + -0x18);
      }
      bVar5 = *in_EAX - iVar1 <= ((iVar3 - *in_EAX) - in_EAX[2]) + iVar1;
    }
    if (bVar5) {
      FUN_00440367();
    }
    else {
      FUN_00439b5a();
    }
    if (iVar2 / 2 + iVar8 < in_EAX[3] / 2 + in_EAX[1]) {
      FUN_00439b5a();
    }
  }
  FUN_00440367();
  uVar10 = FUN_00439b5a();
  *(undefined4 *)(param_1 + 0xac) = uVar10;
  FUN_00440367();
  uVar10 = FUN_00439b5a();
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(int *)(param_1 + 0xb4) = local_8;
  *(undefined4 *)(param_1 + 0xb8) = local_c;
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_00439b27();
    cVar6 = FUN_004a6c8c();
    if (cVar6 != '\0') {
      uVar7 = 1;
      goto LAB_004e12ab;
    }
  }
  uVar7 = 0;
LAB_004e12ab:
  *(undefined1 *)(param_1 + 0xbf) = uVar7;
  return;
}

