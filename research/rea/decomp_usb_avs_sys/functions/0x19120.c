// rea decompile_all
// name: FUN_00019120
// address: 0x19120
// body: available
// range: 0x19120-0x19441 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00019120(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong _Size;
  uint uVar11;
  int local_res8;
  
  iVar9 = 0;
  local_res8 = 0;
  lVar6 = KsPinGetLeadingEdgeStreamPointer(*(undefined8 *)(param_1 + 0x38),1);
  do {
    if (lVar6 == 0) {
      return 0;
    }
    uVar11 = *(uint *)(*(longlong *)(lVar6 + 0x10) + 0x24);
    lVar10 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x28);
    if ((uint)(*(int *)(param_1 + 0x1e0) - *(int *)(param_1 + 0x1e4)) < uVar11) {
      if (*(int *)(param_1 + 0x20c) == 0) {
        uVar8 = KsStreamPointerUnlock(lVar6,0);
        return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      if (*(longlong *)(param_1 + 0x1d8) != 0) {
        ExFreePoolWithTag(*(longlong *)(param_1 + 0x1d8),0x42737661);
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1e0) = 0;
        *(undefined4 *)(param_1 + 0x1e4) = 0;
        *(undefined8 *)(param_1 + 0x1e8) = 0;
        *(undefined8 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined8 *)(param_1 + 0x200) = 0;
        *(undefined4 *)(param_1 + 0x208) = 0;
        *(undefined4 *)(param_1 + 0x20c) = 1;
      }
      uVar5 = 0x18000;
      if (uVar11 * 2 < 0x18000) {
        uVar5 = uVar11 * 2;
      }
      puVar7 = (ulonglong *)ExAllocatePoolWithTag(0,(ulonglong)uVar5,0x42737661);
      *(ulonglong **)(param_1 + 0x1d8) = puVar7;
      if (puVar7 == (ulonglong *)0x0) {
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        *(undefined4 *)(param_1 + 0x1e0) = 0;
        *(undefined8 *)(param_1 + 0x1e8) = 0;
        *(undefined8 *)(param_1 + 0x1f0) = 0;
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        *(undefined8 *)(param_1 + 0x200) = 0;
      }
      else {
        FUN_0001cf40(puVar7,0,(ulonglong)uVar5);
        lVar1 = *(longlong *)(param_1 + 0x1d8);
        *(uint *)(param_1 + 0x1e0) = uVar5;
        *(longlong *)(param_1 + 0x1e8) = lVar1;
        *(longlong *)(param_1 + 0x1f8) = lVar1;
        *(ulonglong *)(param_1 + 0x1f0) = lVar1 + (ulonglong)uVar5;
        *(longlong *)(param_1 + 0x200) = lVar1;
      }
      *(undefined4 *)(param_1 + 0x208) = 0;
      *(undefined4 *)(param_1 + 0x20c) = 1;
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      iVar9 = local_res8;
    }
    for (; 8 < uVar11; uVar11 = uVar11 - uVar5) {
      uVar5 = *(uint *)(lVar10 + 4);
      uVar3 = KeAcquireSpinLockRaiseToDpc(param_1 + 0x210);
      *(undefined1 *)(param_1 + 0x218) = uVar3;
      if ((*(longlong *)(param_1 + 0x1d8) == 0) || (uVar5 == 0)) {
        KeReleaseSpinLock(param_1 + 0x210,uVar3);
      }
      else {
        uVar4 = *(int *)(param_1 + 0x1e0) - *(int *)(param_1 + 0x1e4);
        uVar2 = uVar5;
        if (uVar4 < uVar5) {
          uVar2 = uVar4;
        }
        _Size = (ulonglong)uVar2;
        uVar4 = *(int *)(param_1 + 0x1f0) - *(int *)(param_1 + 0x200);
        if (uVar4 < uVar2) {
          memcpy(*(void **)(param_1 + 0x200),(void *)(lVar10 + 8),(ulonglong)uVar4);
          memcpy(*(void **)(param_1 + 0x1e8),(void *)((ulonglong)uVar4 + 8 + lVar10),
                 (ulonglong)(uVar2 - uVar4));
          *(ulonglong *)(param_1 + 0x200) = (_Size - uVar4) + *(longlong *)(param_1 + 0x1e8);
        }
        else {
          memcpy(*(void **)(param_1 + 0x200),(void *)(lVar10 + 8),_Size);
          *(longlong *)(param_1 + 0x200) = *(longlong *)(param_1 + 0x200) + _Size;
        }
        if (*(ulonglong *)(param_1 + 0x1f0) <= *(ulonglong *)(param_1 + 0x200)) {
          *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x1e8);
        }
        *(int *)(param_1 + 0x1e4) = *(int *)(param_1 + 0x1e4) + uVar2;
        *(undefined4 *)(param_1 + 0x20c) = 0;
        if (*(int *)(param_1 + 0x1e4) == *(int *)(param_1 + 0x1e0)) {
          *(undefined4 *)(param_1 + 0x208) = 1;
        }
        KeReleaseSpinLock(param_1 + 0x210,*(undefined1 *)(param_1 + 0x218));
        iVar9 = local_res8;
      }
      local_res8 = iVar9 + uVar5;
      uVar5 = (uVar5 + 3 & 0xfffffffc) + 8;
      lVar10 = lVar10 + (ulonglong)uVar5;
      iVar9 = local_res8;
    }
    KsStreamPointerAdvanceOffsetsAndUnlock(lVar6,iVar9,0,1);
    lVar6 = KsPinGetLeadingEdgeStreamPointer(*(undefined8 *)(param_1 + 0x38));
  } while( true );
}

