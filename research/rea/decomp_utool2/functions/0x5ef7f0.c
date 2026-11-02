// rea decompile_all
// name: FUN_005ef7f0
// address: 0x5ef7f0
// body: available
// range: 0x5ef7f0-0x5efb4c inclusive
// range: 0x5efc79-0x5efd2a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005ef7f0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  int in_EDX;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar2 = *in_ECX;
  if (in_EDX == 0) {
    uVar7 = 0;
    for (uVar8 = *(uint *)(iVar2 + 0x24); (uVar8 & 1) == 0; uVar8 = uVar8 >> 1) {
      uVar7 = uVar7 + 1;
    }
    uVar8 = 0xf;
    if (uVar7 < 0xf) {
      uVar8 = uVar7;
    }
    if (*(uint *)(iVar2 + 0x244) < uVar8) {
      uVar8 = *(uint *)(iVar2 + 0x244);
    }
  }
  else {
    uVar8 = 0;
  }
  iVar1 = in_ECX[1];
  local_24 = 0;
  local_30 = *(undefined4 *)(iVar2 + 0x24);
  local_2c = *(undefined4 *)(iVar2 + 0x20);
  local_28 = *(undefined4 *)(iVar2 + 0x18);
  local_20 = *(undefined4 *)(iVar2 + 0x1c);
  local_18 = *(undefined4 *)(iVar1 + 0x1b90);
  local_1c = 0;
  if (*(int *)(iVar2 + 0x10) == 0) {
    bVar10 = false;
LAB_005ef8cf:
    bVar9 = true;
  }
  else {
    if ((*(int *)(iVar2 + 0x14) == 0) || (*(int *)(iVar1 + 0x1ad0) == 0)) {
      bVar10 = true;
      goto LAB_005ef8cf;
    }
    bVar9 = *(int *)(iVar1 + 0x1ad4) == 0;
    bVar10 = *(int *)(iVar1 + 0x1ad4) != 0;
    if (!bVar9) goto LAB_005ef931;
  }
  local_40 = 0;
  if (*(int *)(iVar2 + 0x18) != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_005ee2e0();
      *(int *)(iVar2 + 0x394 + in_ECX[1]) = iVar1;
      *(int *)(iVar2 + 0x270 + in_ECX[1]) = iVar1;
      *(int *)(in_ECX[1] + 0xd8 + local_40 * 4) = *(int *)(*in_ECX + 0x1c) - iVar1;
      local_40 = local_40 + 1;
      iVar2 = iVar2 + 0x248;
    } while (local_40 < *(uint *)(*in_ECX + 0x18));
  }
LAB_005ef931:
  if (bVar10) {
    local_40 = 0;
    uVar7 = 0xf8;
    iVar2 = 0;
    do {
      iVar1 = FUN_005ee2e0();
      bVar11 = local_40 != 0;
      *(int *)(iVar2 + 0x15d4 + in_ECX[1]) = iVar1;
      local_40 = local_40 + 1;
      *(int *)(iVar2 + 0x14b0 + in_ECX[1]) = iVar1;
      *(uint *)(uVar7 + in_ECX[1]) = ((uint)bVar11 + *(int *)(*in_ECX + 0x1c)) - iVar1;
      uVar7 = uVar7 + 4;
      iVar2 = iVar2 + 0x248;
    } while (uVar7 < 0x100);
  }
  if ((bVar9) && (uVar7 = 0, *(int *)(*in_ECX + 0x18) != 0)) {
    do {
      iVar2 = in_ECX[1];
      iVar2 = FUN_005ef0a0(uVar8,&local_30,*(undefined4 *)(iVar2 + 0xd8 + uVar7 * 4),
                           *(undefined4 *)(iVar2 + 4 + uVar7 * 4),iVar2 + 0x1820 + uVar7 * 8,
                           iVar2 + 0x19f0 + uVar7 * 8,iVar2 + 0x100 + uVar7 * 8,
                           iVar2 + 0x1a70 + uVar7 * 4,iVar2 + 0x1a98 + uVar7 * 4);
      if (iVar2 == 0) {
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(*in_ECX + 0x18));
  }
  if (bVar10) {
    iVar2 = 0;
    uVar7 = 0;
    do {
      iVar1 = in_ECX[1];
      iVar1 = FUN_005ef0a0(uVar8,&local_30,*(undefined4 *)(uVar7 + 0xf8 + iVar1),
                           *(undefined4 *)(uVar7 + 0x24 + iVar1),iVar1 + 0x1860 + iVar2,
                           iVar1 + 0x1a30 + iVar2,iVar1 + 0x140 + iVar2,iVar1 + 0x1a90 + uVar7,
                           iVar1 + 0x1ab8 + uVar7);
      if (iVar1 == 0) {
        return 0;
      }
      uVar7 = uVar7 + 4;
      iVar2 = iVar2 + 8;
    } while (uVar7 < 8);
    if ((*(int *)(*in_ECX + 0x14) == 0) || (*(int *)(in_ECX[1] + 0x1ad0) == 0)) {
      iVar2 = in_ECX[1];
      uVar8 = *(int *)(iVar2 + 0x1a98) + *(int *)(iVar2 + 0x1a9c);
      iVar1 = *(int *)(iVar2 + 0x1abc);
      uVar3 = *(int *)(iVar2 + 0x1a98) + iVar1;
      uVar6 = *(int *)(iVar2 + 0x1a9c) + iVar1;
      uVar7 = uVar8;
      if (uVar3 < uVar8) {
        uVar7 = uVar3;
      }
      uVar8 = (uint)(uVar3 < uVar8);
      if (uVar6 < uVar7) {
        uVar8 = 2;
        uVar7 = uVar6;
      }
      if ((uint)(*(int *)(iVar2 + 0x1ab8) + iVar1) < uVar7) {
        uVar8 = 3;
      }
    }
    else {
      uVar8 = -(uint)(*(int *)(in_ECX[1] + 0x1ad4) != 0) & 3;
    }
    local_24 = uVar8;
    iVar2 = FUN_005ed590();
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005efb46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)(&PTR_LAB_005efd2c)[uVar8])();
      return uVar5;
    }
    puVar4 = (undefined4 *)*in_ECX;
  }
  else {
    iVar2 = FUN_005ed590();
    puVar4 = (undefined4 *)*in_ECX;
    if (iVar2 != 0) {
      uVar8 = 0;
      if (puVar4[6] != 0) {
        iVar2 = 0xd8;
        do {
          iVar1 = in_ECX[1];
          iVar1 = FUN_005eeff0(*(undefined4 *)(iVar2 + iVar1),
                               (*(int *)(iVar2 + 0x1998 + iVar1) + uVar8 * 2) * 0x124 + 0x150 +
                               iVar1,*(undefined4 *)(iVar1 + 0x1ac8));
          if (iVar1 == 0) {
            return 0;
          }
          uVar8 = uVar8 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar8 < *(uint *)(*in_ECX + 0x18));
      }
      if (*(int *)(*in_ECX + 0x14) != 0) {
        *(int *)(in_ECX[1] + 0x1ad0) = *(int *)(in_ECX[1] + 0x1ad0) + 1;
        iVar2 = in_ECX[1];
        if (*(uint *)(iVar2 + 0x1acc) <= *(uint *)(iVar2 + 0x1ad0)) {
          *(undefined4 *)(iVar2 + 0x1ad0) = 0;
        }
      }
      *(uint *)(in_ECX[1] + 0x1ad4) = local_24;
      return 1;
    }
  }
  *puVar4 = 7;
  return 0;
}

