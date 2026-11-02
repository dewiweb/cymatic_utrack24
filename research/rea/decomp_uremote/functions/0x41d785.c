// rea decompile_all
// name: FUN_0041d785
// address: 0x41d785
// body: available
// range: 0x41d785-0x41d917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d785(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_EAX;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_24;
  int local_20;
  int local_14;
  int local_10;
  int local_8;
  
  iVar1 = in_EAX * 0xcc + 4 + *(int *)(in_ECX + 0x18);
  uVar2 = *(undefined4 *)(iVar1 + 0xc4);
  local_20 = *(int *)(iVar1 + 200);
  puVar6 = *(uint **)(in_ECX + 0xc);
  iVar1 = *(int *)(in_ECX + 4);
  do {
    if (iVar1 == 0) {
      return;
    }
    uVar10 = *puVar6;
    uVar7 = puVar6[1] * 0x30 + uVar10;
    uVar5 = 0;
    uVar9 = 0;
    uVar4 = uVar10;
    if (uVar10 < uVar7) {
      do {
        if ((*(byte *)(uVar4 + 0x10) & 0x20) != 0) {
          if (uVar9 == 0) {
            uVar9 = uVar4;
          }
          uVar5 = uVar5 + 1;
        }
        uVar4 = uVar4 + 0x30;
      } while (uVar4 < uVar7);
      uVar4 = uVar9;
      if (uVar5 < 2) {
        if (uVar5 == 1) {
          local_20 = thunk_FUN_00401000(*(undefined4 *)(uVar9 + 0x24),uVar2);
          local_20 = *(int *)(uVar9 + 0x2c) - local_20;
        }
        goto joined_r0x0041d813;
      }
      do {
        do {
          uVar10 = uVar4;
          uVar4 = *(uint *)(uVar10 + 4);
          if (uVar4 == uVar9) goto LAB_0041d900;
        } while ((*(byte *)(uVar4 + 0x10) & 0x20) != 0);
        do {
          uVar4 = *(uint *)(uVar4 + 4);
        } while ((*(byte *)(uVar4 + 0x10) & 0x20) == 0);
        iVar3 = *(int *)(uVar10 + 0x24);
        local_8 = *(int *)(uVar4 + 0x24);
        if (local_8 < iVar3) {
          local_10 = iVar3 - local_8;
          local_14 = *(int *)(uVar4 + 0x2c);
          iVar8 = *(int *)(uVar10 + 0x2c) - local_14;
        }
        else {
          local_10 = local_8 - iVar3;
          local_14 = *(int *)(uVar10 + 0x2c);
          iVar8 = *(int *)(uVar4 + 0x2c) - local_14;
          local_8 = iVar3;
        }
        local_24 = 0x10000;
        if (0 < local_10) {
          local_24 = FUN_0040d2d8();
        }
        uVar10 = *(uint *)(uVar10 + 4);
        do {
          iVar3 = *(int *)(uVar10 + 0x24) - local_8;
          uVar11 = uVar2;
          if ((iVar3 < 1) || (uVar11 = local_24, iVar3 < local_10)) {
            iVar3 = thunk_FUN_00401000(iVar3,uVar11);
          }
          else {
            iVar3 = thunk_FUN_00401000(iVar3 - local_10,uVar2);
            iVar3 = iVar3 + iVar8;
          }
          *(int *)(uVar10 + 0x2c) = iVar3 + local_14;
          uVar10 = *(uint *)(uVar10 + 4);
        } while (uVar10 != uVar4);
      } while (uVar4 != uVar9);
    }
    else {
joined_r0x0041d813:
      for (; uVar10 < uVar7; uVar10 = uVar10 + 0x30) {
        if (uVar10 != uVar9) {
          iVar3 = thunk_FUN_00401000(*(undefined4 *)(uVar10 + 0x24),uVar2);
          *(int *)(uVar10 + 0x2c) = iVar3 + local_20;
        }
      }
    }
LAB_0041d900:
    iVar1 = iVar1 + -1;
    puVar6 = puVar6 + 2;
  } while( true );
}

