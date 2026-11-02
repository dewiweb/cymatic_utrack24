// rea decompile_all
// name: FUN_0001ff4c
// address: 0x1ff4c
// body: available
// range: 0x1ff4c-0x20181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0001ff4c(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint *puVar11;
  
  lVar4 = DAT_00029268;
  lVar6 = *(longlong *)(param_4 + 0x30);
  uVar5 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  *(undefined1 *)(lVar4 + 0x58) = uVar5;
  if ((*(int *)(lVar6 + 4) < 0) || (*(int *)(param_3 + 0x30) < 0)) {
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar6 + 4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_3 + 0x30);
    lVar4 = DAT_00029268;
    if ((*(char *)(param_1 + 0xb4) != '\0') &&
       (((4 < *(int *)(param_1 + 0xd8) && (*(int *)(lVar6 + 4) != -0x3fff9000)) &&
        (*(char *)(DAT_00029268 + 0x868) == '\0')))) {
      lVar6 = *(longlong *)(DAT_00029268 + 0x70);
      *(undefined1 *)(DAT_00029268 + 0x868) = 1;
      *(undefined4 *)(lVar4 + 0x86c) = 1;
      if (lVar6 != 0) {
        FUN_000139ec(lVar4 + 0x818,lVar6,FUN_00015d24,0);
      }
    }
    FUN_0001f764(param_4);
    lVar6 = DAT_00029268;
  }
  else {
    uVar10 = 0;
    puVar9 = (uint *)(lVar6 + 0x8c);
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        puVar11 = (uint *)((ulonglong)*puVar9 + *(longlong *)(param_4 + 0x18));
        for (uVar8 = puVar9[1] >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          uVar2 = *puVar11;
          *puVar11 = (uVar2 << 0x10 | uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 |
                     (uint)*(byte *)((longlong)puVar11 + 3);
          puVar11 = puVar11 + 1;
        }
        uVar10 = uVar10 + 1;
        puVar9 = puVar9 + 3;
      } while (uVar10 < *(uint *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    uVar10 = *(uint *)((ulonglong)*(uint *)(lVar6 + 0x8c) + *(longlong *)(param_4 + 0x18));
    if ((uVar10 & 0xff000000) != 0) {
      *(uint *)(param_1 + 0x1b4) = uVar10 >> 0x1a & 7;
      *(uint *)(param_1 + 0x1b0) = uVar10 >> 0x1d;
    }
    *(int *)(param_1 + 0x1b8) = *(int *)(lVar6 + 0x80) << 3;
    plVar3 = *(longlong **)(param_1 + 0x1c8);
    lVar6 = *plVar3;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1d0) + param_4);
    plVar7[1] = (longlong)plVar3;
    *plVar7 = lVar6;
    *(longlong **)(*plVar3 + 8) = plVar7;
    *plVar3 = (longlong)plVar7;
    lVar6 = DAT_00029268;
    plVar3 = (longlong *)(DAT_00029268 + 400);
    *(int *)(DAT_00029268 + 0x6ac) = *(int *)(DAT_00029268 + 0x6ac) + -1;
    if (*(int *)(lVar6 + 0x6ac) < 1) {
      FUN_00021628(plVar3,*(int *)(*(longlong *)(lVar6 + 0x1f0) + 0x1c));
      *(undefined4 *)(lVar6 + 0x6ac) = *(undefined4 *)(lVar6 + 0x69c);
      goto LAB_00020146;
    }
  }
  KeReleaseSpinLock(lVar6 + 0x50,*(undefined1 *)(lVar6 + 0x58));
LAB_00020146:
  LOCK();
  piVar1 = (int *)(param_1 + 0xb8);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    KeSetEvent(param_1 + 0xc0,0,0);
  }
  return 0xc0000016;
}

