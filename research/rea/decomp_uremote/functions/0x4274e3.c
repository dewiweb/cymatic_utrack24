// rea decompile_all
// name: FUN_004274e3
// address: 0x4274e3
// body: available
// range: 0x4274e3-0x4276f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004274e3(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int *unaff_ESI;
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  iVar1 = unaff_ESI[3];
  iVar9 = (int)*(short *)(iVar1 + 0x3a);
  iVar7 = *(int *)(iVar1 + 0x3c);
  iVar4 = iVar9 * 8;
  *(int *)(iVar4 + iVar7) = unaff_ESI[0x11];
  *(int *)(iVar4 + 4 + iVar7) = unaff_ESI[0x12];
  iVar7 = *(int *)(iVar1 + 0x3c);
  *(int *)(iVar4 + 8 + iVar7) = unaff_ESI[0x13];
  *(int *)(iVar4 + 0xc + iVar7) = unaff_ESI[0x14];
  iVar7 = *(int *)(iVar1 + 0x3c);
  *(int *)(iVar7 + 0x10 + iVar9 * 8) = unaff_ESI[0x2e];
  *(int *)(iVar7 + 0x14 + iVar9 * 8) = unaff_ESI[0x2f];
  iVar7 = *(int *)(iVar1 + 0x3c);
  local_c = 0;
  *(int *)(iVar7 + 0x18 + iVar9 * 8) = unaff_ESI[0x30];
  *(int *)(iVar7 + 0x1c + iVar9 * 8) = unaff_ESI[0x31];
  piVar5 = (int *)(iVar1 + 0x40);
  *(undefined1 *)(iVar9 + *piVar5) = 0;
  *(undefined1 *)(iVar9 + 1 + *piVar5) = 0;
  *(undefined1 *)(iVar9 + 2 + *piVar5) = 0;
  *(undefined1 *)(iVar9 + 3 + *piVar5) = 0;
  iVar9 = iVar9 + 4;
  if (*(char *)(*unaff_ESI + 0x2c4) != '\0') {
    local_c = FUN_0042dff2(unaff_ESI[5],&local_10,iVar9);
    if (local_c != 0) {
      return local_c;
    }
    local_8 = (undefined4 *)0x0;
    if (0 < iVar9) {
      do {
        iVar7 = (int)local_8 * 8;
        piVar5 = (int *)(*(int *)(iVar1 + 0x3c) + iVar7);
        *piVar5 = *piVar5 + *(int *)(iVar7 + local_10);
        piVar5 = (int *)(iVar7 + 4 + *(int *)(iVar1 + 0x3c));
        *piVar5 = *piVar5 + ((int *)(iVar7 + local_10))[1];
        local_8 = (undefined4 *)((int)local_8 + 1);
      } while ((int)local_8 < iVar9);
    }
    FUN_00411a5c(local_10);
  }
  if ((*(byte *)(unaff_ESI + 4) & 2) == 0) {
    FUN_0042728d();
    _memcpy((void *)unaff_ESI[0x24],(void *)unaff_ESI[0x23],
            (uint)*(ushort *)(unaff_ESI + 0x21) * 8 + 0x20);
  }
  if ((*(byte *)(unaff_ESI + 4) & 1) == 0) {
    local_8 = *(undefined4 **)(iVar1 + 0x3c);
    local_10 = iVar9 * 8;
    puVar8 = local_8 + iVar9 * 2;
    uVar2 = *(undefined4 *)(unaff_ESI[1] + 0x30);
    uVar3 = *(undefined4 *)(unaff_ESI[1] + 0x34);
    for (; local_8 < puVar8; local_8 = local_8 + 2) {
      uVar6 = thunk_FUN_00401000(*local_8,uVar2);
      *local_8 = uVar6;
      uVar6 = thunk_FUN_00401000(local_8[1],uVar3);
      local_8[1] = uVar6;
    }
    iVar7 = *(int *)(iVar1 + 0x3c);
    unaff_ESI[0x11] = *(int *)(iVar7 + -0x20 + iVar9 * 8);
    unaff_ESI[0x12] = *(int *)(iVar7 + -0x1c + iVar9 * 8);
    iVar7 = *(int *)(iVar1 + 0x3c);
    unaff_ESI[0x13] = *(int *)(iVar7 + -0x18 + iVar9 * 8);
    unaff_ESI[0x14] = *(int *)(iVar7 + -0x14 + iVar9 * 8);
    iVar7 = *(int *)(iVar1 + 0x3c);
    unaff_ESI[0x2e] = *(int *)(iVar7 + -0x10 + iVar9 * 8);
    unaff_ESI[0x2f] = *(int *)(iVar7 + -0xc + iVar9 * 8);
    iVar1 = *(int *)(iVar1 + 0x3c);
    unaff_ESI[0x30] = *(int *)(local_10 + -8 + iVar1);
    unaff_ESI[0x31] = *(int *)(local_10 + -4 + iVar1);
  }
  if ((*(byte *)(unaff_ESI + 4) & 2) == 0) {
    *(short *)(unaff_ESI + 0x21) = (short)unaff_ESI[0x21] + 4;
    local_c = FUN_004272d9();
  }
  return local_c;
}

