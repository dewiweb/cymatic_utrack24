// rea decompile_all
// name: FUN_00020bb4
// address: 0x20bb4
// body: available
// range: 0x20bb4-0x21131 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong * FUN_00020bb4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar10;
  longlong *plVar11;
  uint local_res8;
  uint local_res10;
  longlong *plVar9;
  
  lVar1 = DAT_00029268;
  uVar3 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  lVar2 = DAT_00029268;
  plVar10 = (longlong *)0x0;
  *(undefined1 *)(lVar1 + 0x58) = uVar3;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x51c) = *(undefined4 *)((longlong)param_1 + 0x50c);
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  plVar4 = (longlong *)&DAT_000275b0;
  *(undefined4 *)((longlong)param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x52c) = 0;
  iVar5 = 32000;
  do {
    plVar7 = plVar4;
    if (iVar5 == *(int *)(lVar2 + 0x6fc)) break;
    plVar4 = (longlong *)((longlong)plVar4 + 0x14);
    iVar5 = *(int *)plVar4;
    plVar7 = plVar10;
  } while (iVar5 != 0);
  if (plVar7 == (longlong *)0x0) {
    KeReleaseSpinLock(lVar2 + 0x50,*(undefined1 *)(lVar2 + 0x58));
    return (longlong *)0xc0000001;
  }
  plVar4 = param_1 + 3;
  *(int *)(param_1 + 0xa6) = (int)plVar7[1];
  plVar7 = plVar10;
  plVar11 = plVar10;
LAB_00020c73:
  plVar8 = plVar10;
  if (plVar7 == (longlong *)0x0) {
    if ((longlong *)*plVar4 == plVar4) goto LAB_00020cd1;
    plVar7 = (longlong *)(*plVar4 - param_1[5]);
  }
  else {
    plVar7 = *(longlong **)(param_1[5] + (longlong)plVar7);
    if (plVar7 == plVar4) goto LAB_00020cd1;
    plVar7 = (longlong *)((longlong)plVar7 - param_1[5]);
  }
  if (plVar7 == (longlong *)0x0) goto LAB_00020cd1;
  (**(code **)(*(longlong *)(plVar7[5] + 0x1b68) + 0x28))();
  *(uint *)((longlong)plVar7 + 0x3c) = local_res8;
  if (*(char *)((longlong)plVar7 + 0xb1) != '\0') {
    plVar11 = (longlong *)(ulonglong)local_res8;
  }
  goto LAB_00020c73;
LAB_00020cd1:
  plVar7 = plVar10;
  if (plVar8 == (longlong *)0x0) {
    if ((longlong *)*param_1 == param_1) goto LAB_00020d2e;
    plVar8 = (longlong *)(*param_1 - param_1[2]);
  }
  else {
    plVar8 = *(longlong **)(param_1[2] + (longlong)plVar8);
    if (plVar8 == param_1) goto LAB_00020d2e;
    plVar8 = (longlong *)((longlong)plVar8 - param_1[2]);
  }
  if (plVar8 == (longlong *)0x0) goto LAB_00020d2e;
  (**(code **)(*(longlong *)(plVar8[5] + 0x1b68) + 0x28))();
  *(uint *)((longlong)plVar8 + 0x3c) = local_res10;
  if (*(char *)((longlong)plVar8 + 0xb1) != '\0') {
    plVar11 = (longlong *)(ulonglong)local_res10;
  }
  goto LAB_00020cd1;
LAB_00020d2e:
  plVar8 = plVar10;
  if (plVar7 == (longlong *)0x0) {
    if ((longlong *)*plVar4 == plVar4) goto LAB_00020d63;
    plVar7 = (longlong *)(*plVar4 - param_1[5]);
  }
  else {
    plVar7 = *(longlong **)((longlong)plVar7 + param_1[5]);
    if (plVar7 == plVar4) goto LAB_00020d63;
    plVar7 = (longlong *)((longlong)plVar7 - param_1[5]);
  }
  if (plVar7 == (longlong *)0x0) goto LAB_00020d63;
  *(int *)(plVar7 + 0x48) = 0;
  goto LAB_00020d2e;
LAB_00020d63:
  plVar7 = plVar10;
  if (plVar8 == (longlong *)0x0) {
    if ((longlong *)*param_1 == param_1) goto LAB_00020d98;
    plVar8 = (longlong *)(*param_1 - param_1[2]);
  }
  else {
    plVar8 = *(longlong **)((longlong)plVar8 + param_1[2]);
    if (plVar8 == param_1) goto LAB_00020d98;
    plVar8 = (longlong *)((longlong)plVar8 - param_1[2]);
  }
  if (plVar8 == (longlong *)0x0) goto LAB_00020d98;
  *(int *)(plVar8 + 8) = 0;
  goto LAB_00020d63;
LAB_00020d98:
  plVar8 = plVar10;
  if (plVar7 == (longlong *)0x0) {
    if ((longlong *)*plVar4 == plVar4) goto LAB_00020f56;
    plVar7 = (longlong *)(*plVar4 - param_1[5]);
  }
  else {
    plVar7 = *(longlong **)(param_1[5] + (longlong)plVar7);
    if (plVar7 == plVar4) goto LAB_00020f56;
    plVar7 = (longlong *)((longlong)plVar7 - param_1[5]);
  }
  if (plVar7 == (longlong *)0x0) goto LAB_00020f56;
  if (*(char *)((longlong)plVar7 + 0xb4) == '\0') {
    *(undefined1 *)((longlong)plVar7 + 0xe74) = 0;
    *(int *)((longlong)plVar7 + 0x234) = 0;
    *(int *)(plVar7 + 0x47) = 0;
    *(int *)(plVar7 + 0x1ce) = 0;
    *(int *)((longlong)plVar7 + 0x23c) = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1c9] = 0;
    *(uint *)((longlong)plVar7 + 0x1d4) =
         (-(uint)(*(uint *)(plVar7 + 0x39) < 0x100) & *(uint *)(plVar7 + 0x39) & 0xff) << 8 |
         *(byte *)(plVar7[6] + 0x30) & 0x3f;
    iVar5 = *(int *)(plVar7[0x37] + 4);
    *(int *)((longlong)plVar7 + 0x1ec) = 0;
    *(int *)(plVar7 + 0x3c) = 0;
    *(int *)((longlong)plVar7 + 0x1e4) = 0;
    *(undefined1 *)(plVar7 + 0x3d) = 0;
    *(uint *)(plVar7 + 0x3b) = iVar5 << 8 | 0x90;
    FUN_00022350((longlong)(plVar7 + 0x20));
    *(undefined1 *)(plVar7 + 0x36) = 0;
    ((int *)((longlong)plVar7 + 0x10c))[0] = 0;
    ((int *)((longlong)plVar7 + 0x10c))[1] = 0;
    ((int *)((longlong)plVar7 + 0x114))[0] = 0;
    ((int *)((longlong)plVar7 + 0x114))[1] = 0;
    ((int *)((longlong)plVar7 + 0x11c))[0] = 0;
    ((int *)((longlong)plVar7 + 0x11c))[1] = 0;
    FUN_000264d0((ulonglong *)((longlong)plVar7 + 0x124),0,0x24);
    plVar7[0x29] = 0;
    plVar7[0x2a] = 0;
    *(int *)(plVar7 + 0x27) = -1;
    *(int *)(plVar7 + 0x28) = -1;
    *(int *)(plVar7 + 9) = 0;
    *(int *)((longlong)plVar7 + 0x4c) = 0;
    *(int *)(plVar7 + 10) = 0;
    FUN_0002055c((longlong)plVar7);
    *(undefined1 *)((longlong)plVar7 + 0xb4) = 1;
    *(int *)(plVar7 + 7) = (int)plVar11 + 0x10 + (int)plVar7[0x48];
    if ((int)plVar7[2] != 2) {
      do {
        plVar9 = plVar10;
        if (*(int *)((longlong)plVar7 + 0x1c) != 0) {
          do {
            FUN_000206c8((longlong)plVar7,0);
            uVar6 = (int)plVar9 + 1;
            plVar9 = (longlong *)(ulonglong)uVar6;
          } while (uVar6 < *(uint *)((longlong)plVar7 + 0x1c));
        }
        uVar6 = (int)plVar8 + 1;
        plVar8 = (longlong *)(ulonglong)uVar6;
      } while (uVar6 < (int)plVar7[2] - 2U);
    }
    KeReleaseSpinLock(DAT_00029268 + 0x50);
    FUN_0002091c((longlong)plVar7);
    lVar1 = DAT_00029268;
    uVar3 = KeAcquireSpinLockRaiseToDpc();
    *(undefined1 *)(lVar1 + 0x58) = uVar3;
  }
  goto LAB_00020d98;
LAB_00020f56:
  if (plVar8 == (longlong *)0x0) {
    if ((longlong *)*param_1 == param_1) goto LAB_0002105c;
    plVar8 = (longlong *)(*param_1 - param_1[2]);
  }
  else {
    plVar8 = *(longlong **)(param_1[2] + (longlong)plVar8);
    if (plVar8 == param_1) goto LAB_0002105c;
    plVar8 = (longlong *)((longlong)plVar8 - param_1[2]);
  }
  if (plVar8 == (longlong *)0x0) goto LAB_0002105c;
  if (*(char *)((longlong)plVar8 + 0xb4) == '\0') {
    FUN_0001fdd8((longlong)plVar8);
    *(undefined1 *)((longlong)plVar8 + 0x185) = 0;
    *(undefined1 *)((longlong)plVar8 + 0x186) = 0;
    *(undefined1 *)((longlong)plVar8 + 0x187) = 0;
    *(undefined1 *)(plVar8 + 0x2f) = 0;
    *(int *)(plVar8 + 0x34) = 0;
    FUN_000264d0((ulonglong *)((longlong)plVar8 + 0x10c),0,0x24);
    plVar8[0x26] = 0;
    plVar8[0x27] = 0;
    *(int *)(plVar8 + 0x28) = 0;
    FUN_000264d0((ulonglong *)((longlong)plVar8 + 0x144),0,0x34);
    *(int *)(plVar8 + 0x26) = -1;
    *(int *)(plVar8 + 0x27) = -1;
    *(int *)(plVar8 + 9) = 0;
    *(int *)((longlong)plVar8 + 0x4c) = 0;
    *(int *)(plVar8 + 10) = 0;
    *(undefined1 *)((longlong)plVar8 + 0xb4) = 1;
    *(int *)(plVar8 + 7) = (int)plVar11 + 0x10 + (int)plVar8[8];
    KeReleaseSpinLock(DAT_00029268 + 0x50);
    FUN_00020188((longlong)plVar8);
    lVar1 = DAT_00029268;
    uVar3 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
    *(undefined1 *)(lVar1 + 0x58) = uVar3;
  }
  goto LAB_00020f56;
LAB_0002105c:
  KeReleaseSpinLock(DAT_00029268 + 0x50,*(undefined1 *)(DAT_00029268 + 0x58));
  plVar4 = param_1 + 6;
  plVar7 = plVar10;
  plVar11 = plVar10;
LAB_00021077:
  if (plVar7 == (longlong *)0x0) {
    if ((longlong *)*plVar4 == plVar4) goto LAB_000210c0;
    plVar7 = (longlong *)(*plVar4 - param_1[8]);
  }
  else {
    plVar7 = *(longlong **)(param_1[8] + (longlong)plVar7);
    if (plVar7 == plVar4) goto LAB_000210c0;
    plVar7 = (longlong *)((longlong)plVar7 - param_1[8]);
  }
  if (plVar7 == (longlong *)0x0) goto LAB_000210c0;
  if (((*(char *)((longlong)plVar7 + 0x29) == '\0') &&
      (uVar6 = (**(code **)(*plVar7 + 8))(plVar7), (int)uVar6 < 0)) && (-1 < (int)plVar11)) {
    plVar11 = (longlong *)(ulonglong)uVar6;
  }
  goto LAB_00021077;
LAB_000210c0:
  plVar4 = param_1 + 9;
  do {
    if (plVar10 == (longlong *)0x0) {
      if ((longlong *)*plVar4 == plVar4) goto LAB_00021110;
      plVar10 = (longlong *)(*plVar4 - param_1[0xb]);
    }
    else {
      plVar10 = *(longlong **)(param_1[0xb] + (longlong)plVar10);
      if (plVar10 == plVar4) {
LAB_00021110:
        *(undefined4 *)(param_1 + 0x8f) = 2;
        return plVar11;
      }
      plVar10 = (longlong *)((longlong)plVar10 - param_1[0xb]);
    }
    if (plVar10 == (longlong *)0x0) goto LAB_00021110;
    if (((*(char *)((longlong)plVar10 + 0x29) == '\0') &&
        (uVar6 = (**(code **)(*plVar10 + 8))(plVar10), (int)uVar6 < 0)) && (-1 < (int)plVar11)) {
      plVar11 = (longlong *)(ulonglong)uVar6;
    }
  } while( true );
}

