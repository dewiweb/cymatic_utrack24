// rea decompile_all
// name: FUN_00018a48
// address: 0x18a48
// body: available
// range: 0x18a48-0x18c4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00018a48(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  lVar7 = DAT_00029268;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar13 = DAT_00029268 + 0x50;
    uVar8 = KeAcquireSpinLockRaiseToDpc(lVar13);
    *(undefined1 *)(lVar7 + 0x58) = uVar8;
    if (*(char *)(param_1 + 0xa1) != '\0') {
      KeReleaseSpinLock(lVar13,uVar8);
      return 0xe0000021;
    }
    lVar14 = 0;
    plVar1 = (longlong *)(param_1 + 0x60);
    lVar15 = DAT_00029268;
LAB_00018ab0:
    if (lVar14 == 0) {
      if ((longlong *)*plVar1 == plVar1) goto LAB_00018bb3;
      lVar14 = *plVar1 - *(longlong *)(param_1 + 0x70);
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x70) + lVar14);
      if (plVar5 == plVar1) goto LAB_00018bb3;
      lVar14 = (longlong)plVar5 - *(longlong *)(param_1 + 0x70);
    }
    if (lVar14 == 0) {
LAB_00018bb3:
      *(undefined4 *)(param_1 + 0x34) = 0;
      **(undefined4 **)(param_1 + 0x40) = 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 4) = 1;
      plVar5 = *(longlong **)(lVar15 + 0x178);
      plVar1 = (longlong *)(param_1 + 0x20 + *(longlong *)(lVar15 + 0x180));
      *plVar1 = *plVar5;
      plVar1[1] = (longlong)plVar5;
      *(longlong **)(*plVar5 + 8) = plVar1;
      *plVar5 = (longlong)plVar1;
      *(undefined1 *)(param_1 + 0xa1) = 1;
      *(undefined8 *)(lVar15 + 0x78c) = 0;
      *(undefined8 *)(lVar15 + 0x794) = 0;
      *(undefined8 *)(lVar15 + 0x79c) = 0;
      *(undefined4 *)(lVar15 + 0x788) = 0xffffffff;
      if (SystemReserved1[0xf] != (void *)0x0) {
        uVar11 = KeQueryPriorityThread();
        *(undefined4 *)(DAT_00029268 + 0x788) = uVar11;
      }
      KeReleaseSpinLock(lVar13,*(undefined1 *)(lVar7 + 0x58));
      return 0;
    }
    if (*(longlong *)(lVar14 + 0x28) != 0) {
      lVar4 = *(longlong *)(lVar14 + 0x20);
      plVar5 = *(longlong **)(lVar4 + 0x28);
      plVar12 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
      if (plVar12 == (longlong *)0x0) goto LAB_00018b81;
      uVar10 = (**(code **)(*plVar12 + 0x18))(plVar12);
      uVar3 = *(longlong *)(lVar14 + 0x38) + (ulonglong)uVar10 * 4;
      *(ulonglong *)(lVar14 + 0x48) = uVar3;
      if (*(ulonglong *)(lVar14 + 0x40) <= uVar3) {
        *(longlong *)(lVar14 + 0x48) = *(longlong *)(lVar14 + 0x38);
      }
      lVar15 = DAT_00029268;
      plVar6 = *(longlong **)(lVar4 + 0x60);
      plVar12 = (longlong *)(lVar14 + *(longlong *)(lVar4 + 0x68));
      *plVar12 = *plVar6;
      plVar12[1] = (longlong)plVar6;
      *(longlong **)(*plVar6 + 8) = plVar12;
      *plVar6 = (longlong)plVar12;
      *(int *)((longlong)plVar5 + 0x6c) = *(int *)((longlong)plVar5 + 0x6c) + 1;
      piVar2 = (int *)(lVar15 + 0x784);
      *piVar2 = *piVar2 + 1;
      if (*(char *)((longlong)plVar5 + 0x79) == '\0') {
        cVar9 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if (cVar9 == '\0') goto LAB_00018b81;
        *(undefined1 *)((longlong)plVar5 + 0x79) = 1;
        lVar15 = DAT_00029268;
      }
      goto LAB_00018ab0;
    }
LAB_00018b81:
    FUN_00018c98(param_1);
    KeReleaseSpinLock(lVar13,*(undefined1 *)(lVar7 + 0x58));
  }
  return 0xe0000011;
}

