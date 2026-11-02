// rea decompile_all
// name: FUN_004f07c0
// address: 0x4f07c0
// body: available
// range: 0x4f07c0-0x4f0a6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f07c0(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_EBX;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_3c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  puStack_10 = &LAB_005e2bd5;
  local_14 = ExceptionList;
  uVar6 = DAT_00955fd4 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_14;
  pcVar1 = (char *)(unaff_EBX + 0x24);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    local_c = 0;
    if ((((*(int *)(unaff_EBX + 4) == 0) || (cVar4 = FUN_004c016b(uVar6), cVar4 == '\0')) ||
        (*(int *)(*(int *)(unaff_EBX + 4) + 0x18) < 1)) ||
       ((*(int *)(*(int *)(unaff_EBX + 4) + 0x1c) < 1 ||
        ((cVar4 = FUN_004f0a6e(), cVar4 == '\0' && (*(int *)(*(int *)(unaff_EBX + 4) + 0xc) == 0))))
       )) {
      FUN_004f682b();
    }
    else {
      iVar7 = *(int *)(unaff_EBX + 0x10);
      while (iVar7 < 4) {
        iVar7 = FUN_005af82d(0x84);
        local_c._0_1_ = 1;
        if (iVar7 != 0) {
          FUN_004f04f4(iVar7,unaff_EBX + 0x14);
        }
        local_c = (uint)local_c._1_3_ << 8;
        FUN_004f7022();
        iVar7 = *(int *)(unaff_EBX + 0x10);
      }
      iVar8 = FUN_00439b5a(*(undefined4 *)(unaff_EBX + 0x1c));
      iVar8 = iVar8 + *(int *)(unaff_EBX + 0x18);
      iVar7 = *(int *)(unaff_EBX + 4);
      iVar2 = *(int *)(iVar7 + 0x10);
      iVar10 = *(int *)(iVar7 + 0x14) - iVar8;
      iVar3 = *(int *)(iVar7 + 0x18);
      iVar7 = *(int *)(iVar7 + 0x1c) + iVar8 * 2;
      local_3c = 3;
      do {
        FUN_004f5fb6();
        local_c = CONCAT31(local_c._1_3_,2);
        cVar4 = FUN_004f5fe9(0);
        if (cVar4 != '\0') {
          uVar5 = FUN_004c079b();
          FUN_004c06f2(uVar5);
        }
        cVar4 = FUN_004f5fe9(0);
        if (cVar4 != '\0') {
          iVar12 = iVar10;
          iVar13 = iVar7;
          if (local_3c == 0) {
            iVar11 = iVar2 - iVar8;
          }
          else if (local_3c == 1) {
            iVar11 = iVar3 + iVar2;
          }
          else {
            iVar11 = iVar2;
            iVar13 = iVar8;
            if (local_3c != 2) {
              if (local_3c != 3) goto LAB_004f09e3;
              iVar12 = *(int *)(*(int *)(unaff_EBX + 4) + 0x1c) +
                       *(int *)(*(int *)(unaff_EBX + 4) + 0x14);
            }
          }
          FUN_004c09cc(iVar11,iVar12,iVar13);
        }
LAB_004f09e3:
        cVar4 = FUN_004f5fe9(0);
        if (cVar4 != '\0') {
          if (local_3c == 3) {
            uVar9 = *(undefined4 *)(unaff_EBX + 4);
          }
          else {
            uVar9 = *(undefined4 *)(*(int *)(unaff_EBX + 8) + 4 + local_3c * 4);
          }
          FUN_004c05e8(uVar9);
        }
        cVar4 = FUN_004f5fce(0);
        if (cVar4 != '\0') {
          FUN_00474d0f();
          *pcVar1 = '\0';
          ExceptionList = local_14;
          return;
        }
        local_c = local_c & 0xffffff00;
        FUN_00474d0f();
        local_3c = local_3c + -1;
      } while (-1 < local_3c);
    }
    *pcVar1 = '\0';
  }
  ExceptionList = local_14;
  return;
}

