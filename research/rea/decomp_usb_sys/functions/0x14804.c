// rea decompile_all
// name: FUN_00014804
// address: 0x14804
// body: available
// range: 0x14804-0x149b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x149b5 to 0x149c0 FUN_000149c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00014804(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_res8 [2];
  uint7 in_stack_ffffffffffffffa9;
  uint local_38;
  uint local_34 [11];
  
  puVar9 = (uint *)0x0;
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  uVar2 = FUN_00014794(param_1);
  if (*(int *)(param_1 + 0x730) == 0) {
    uVar8 = *(uint *)(param_1 + 0x734);
    puVar12 = &DAT_000275b0;
    uVar14 = 32000;
    uVar13 = 32000;
    uVar10 = 32000;
    puVar6 = &DAT_000275b0;
    do {
      puVar7 = puVar6;
      if (uVar10 == uVar8) break;
      puVar6 = puVar6 + 5;
      uVar10 = *puVar6;
      puVar7 = puVar9;
    } while (uVar10 != 0);
    if (puVar7 != (uint *)0x0) {
      uVar11 = puVar7[4];
    }
    if ((uVar2 & uVar11) == 0) {
      uVar11 = 0;
      puVar6 = &DAT_000275b0;
      do {
        puVar7 = puVar6;
        if (uVar13 == uVar8 * 2) break;
        puVar6 = puVar6 + 5;
        uVar13 = *puVar6;
        puVar7 = puVar9;
      } while (uVar13 != 0);
      uVar10 = uVar11;
      if (puVar7 != (uint *)0x0) {
        uVar10 = puVar7[4];
      }
      if ((uVar2 & uVar10) != 0) {
        puVar9 = (uint *)(ulonglong)(uVar8 * 2);
        goto LAB_0001499f;
      }
      puVar6 = &DAT_000275b0;
      uVar10 = 32000;
      do {
        puVar7 = puVar6;
        if (uVar10 == uVar8 >> 1) break;
        puVar6 = puVar6 + 5;
        uVar10 = *puVar6;
        puVar7 = puVar9;
      } while (uVar10 != 0);
      if (puVar7 != (uint *)0x0) {
        uVar11 = puVar7[4];
      }
      uVar8 = uVar8 >> 1;
      if ((uVar2 & uVar11) == 0) {
        local_38 = 0;
        do {
          if (((puVar12[4] & uVar2) != 0) && ((uint)puVar9 < 8)) {
            local_34[(longlong)puVar9] = uVar14;
            local_38 = local_38 + 1;
            puVar9 = (uint *)(ulonglong)local_38;
          }
          puVar12 = puVar12 + 5;
          uVar14 = *puVar12;
        } while (uVar14 != 0);
        uVar11 = 48000;
        if ((int)puVar9 != 0) {
          uVar11 = local_34[0];
        }
        puVar9 = (uint *)(ulonglong)uVar11;
        goto LAB_0001499f;
      }
    }
  }
  else {
    if (((*(int *)(param_1 + 0x730) != 1) ||
        (plVar1 = *(longlong **)(param_1 + 0xd0), plVar1 == (longlong *)(param_1 + 0xd0))) ||
       (lVar4 = (longlong)plVar1 - *(longlong *)(param_1 + 0xe0), lVar4 == 0)) goto LAB_0001499f;
    uVar5 = FUN_0001d9e8((longlong *)(lVar4 + 0x1408));
    puVar9 = (uint *)0x0;
    if ((char)uVar5 == '\0') goto LAB_0001499f;
    local_res8[0] = 0;
    if (*(longlong *)(lVar4 + 0x1468) == 0) goto LAB_0001499f;
    iVar3 = FUN_0001cae8(*(longlong *)(lVar4 + 0x1408),
                         *(undefined1 *)(*(longlong *)(lVar4 + 0x1468) + 3),1,1,
                         (ulonglong)in_stack_ffffffffffffffa9 << 8,4,local_res8);
    uVar8 = local_res8[0];
    if (iVar3 < 0) {
      uVar8 = uVar11;
    }
  }
  puVar9 = (uint *)(ulonglong)uVar8;
LAB_0001499f:
  FUN_000149c0(param_1,(uint)puVar9);
  return;
}

