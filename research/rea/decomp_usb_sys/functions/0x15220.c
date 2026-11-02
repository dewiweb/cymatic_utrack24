// rea decompile_all
// name: FUN_00015220
// address: 0x15220
// body: available
// range: 0x15220-0x15683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00015220(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  
  lVar7 = DAT_00029268;
  iVar16 = 0;
  plVar1 = (longlong *)(DAT_00029268 + 0xd0);
  if ((longlong *)*plVar1 == plVar1) {
    return -0x1fffffff;
  }
  lVar14 = 0;
LAB_00015260:
  do {
    lVar12 = DAT_00029268;
    if (lVar14 == 0) {
      if ((longlong *)*plVar1 == plVar1) {
        return iVar16;
      }
      lVar14 = *plVar1 - *(longlong *)(lVar7 + 0xe0);
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(lVar7 + 0xe0) + lVar14);
      if (plVar4 == plVar1) {
        return iVar16;
      }
      lVar14 = (longlong)plVar4 - *(longlong *)(lVar7 + 0xe0);
    }
    if (lVar14 == 0) {
      return iVar16;
    }
  } while ((*(char *)(lVar14 + 0x1b13) != '\0') || (*(char *)(lVar14 + 0x1c) == '\0'));
  uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
  piVar11 = &DAT_000275b0;
  *(undefined1 *)(lVar12 + 0x58) = uVar8;
  iVar10 = *(int *)(lVar7 + 0x6f8);
  iVar6 = *(int *)(*(longlong *)(lVar14 + 0x1410) + 0x14);
  iVar9 = 32000;
  do {
    if (iVar9 == *(int *)(lVar7 + 0x6fc)) goto LAB_000152ee;
    piVar11 = piVar11 + 5;
    iVar9 = *piVar11;
  } while (iVar9 != 0);
  piVar11 = (int *)0x0;
LAB_000152ee:
  if (piVar11 != (int *)0x0) {
    *(int *)(lVar14 + 0x278) = iVar6;
    *(char *)(lVar14 + 0x27c) = (char)piVar11[1];
    iVar6 = piVar11[2] * iVar6 * 4 + 0xc;
    *(int *)(lVar14 + 0x274) = iVar6;
    *(int *)(lVar14 + 0x100) = iVar6;
    *(int *)(lVar14 + 0x114) = iVar10;
    *(int *)(lVar14 + 0x118) = iVar10;
    *(undefined4 *)(lVar14 + 0x108) = 6;
    *(int *)(lVar14 + 0x10c) = iVar6 * iVar10;
  }
  puVar2 = (undefined8 *)(lVar14 + 0x308);
  FUN_00020370((longlong)puVar2,*(uint *)(DAT_00029268 + 0x6fc),
               *(int *)(*(longlong *)(lVar14 + 0x1418) + 0x14),*(uint *)(DAT_00029268 + 0x6f8));
  uVar15 = 0;
  if (*(int *)(*(longlong *)(lVar14 + 0x1410) + 0x14) != 0) {
    lVar12 = 0;
    do {
      if (uVar15 < *(uint *)(lVar14 + 0x520)) {
        *(undefined4 *)(lVar12 + 8 + *(longlong *)(lVar14 + 0x518)) = 0xcf;
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0xc;
    } while (uVar15 < *(uint *)(*(longlong *)(lVar14 + 0x1410) + 0x14));
  }
  *(undefined1 *)(lVar14 + 0x4b8) = 1;
  *(undefined1 *)(lVar14 + 0x270) = 1;
  *(undefined1 *)(lVar14 + 0x1b13) = 1;
  iVar10 = (*(code *)**(undefined8 **)(lVar14 + 0xf8))(lVar14 + 0xf8);
  if (iVar10 < 0) {
    *(undefined1 *)(lVar14 + 0x1b13) = 0;
  }
  else {
    iVar10 = (**(code **)*puVar2)(puVar2);
    if (-1 < iVar10) {
      KeReleaseSpinLock(DAT_00029268 + 0x50,*(undefined1 *)(DAT_00029268 + 0x58));
      lVar12 = DAT_00029268;
      plVar3 = (longlong *)(lVar7 + 400);
      uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar12 + 0x58) = uVar8;
      plVar4 = (longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0xf8 + lVar14);
      *plVar4 = *plVar3;
      plVar4[1] = (longlong)plVar3;
      *(longlong **)(*plVar3 + 8) = plVar4;
      *(int *)(lVar7 + 0x69c) = *(int *)(lVar7 + 0x69c) + 1;
      *plVar3 = (longlong)plVar4;
      KeReleaseSpinLock(lVar12 + 0x50,*(undefined1 *)(lVar12 + 0x58));
      lVar12 = DAT_00029268;
      uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      plVar4 = (longlong *)(lVar7 + 0x1a8);
      *(undefined1 *)(lVar12 + 0x58) = uVar8;
      plVar5 = (longlong *)(*(longlong *)(lVar7 + 0x1b8) + 0x308 + lVar14);
      *plVar5 = *plVar4;
      plVar5[1] = (longlong)plVar4;
      *(longlong **)(*plVar4 + 8) = plVar5;
      *plVar4 = (longlong)plVar5;
      *(int *)(lVar7 + 0x6a0) = *(int *)(lVar7 + 0x6a0) + 1;
      KeReleaseSpinLock(lVar12 + 0x50,
                        CONCAT71((int7)((ulonglong)plVar4 >> 8),*(undefined1 *)(lVar12 + 0x58)));
      lVar12 = DAT_00029268;
      uVar8 = KeAcquireSpinLockRaiseToDpc();
      puVar13 = (undefined8 *)0x0;
      plVar4 = (longlong *)(lVar7 + 0x1a8);
      *(undefined1 *)(lVar12 + 0x58) = uVar8;
      *(undefined8 **)(lVar7 + 0x1f0) = puVar2;
      do {
        if (puVar13 == (undefined8 *)0x0) {
          if ((longlong *)*plVar4 == plVar4) goto LAB_0001551f;
          puVar13 = (undefined8 *)(*plVar4 - *(longlong *)(lVar7 + 0x1b8));
        }
        else {
          plVar5 = *(longlong **)(*(longlong *)(lVar7 + 0x1b8) + (longlong)puVar13);
          if (plVar5 == plVar4) goto LAB_0001551f;
          puVar13 = (undefined8 *)((longlong)plVar5 - *(longlong *)(lVar7 + 0x1b8));
        }
        if (puVar13 == (undefined8 *)0x0) goto LAB_0001551f;
        *(bool *)((longlong)puVar13 + 0xb1) = puVar13 == puVar2;
      } while( true );
    }
    *(undefined1 *)(lVar14 + 0x1b13) = 0;
    (**(code **)(*(longlong *)(lVar14 + 0xf8) + 8))(lVar14 + 0xf8);
  }
  uVar8 = *(undefined1 *)(DAT_00029268 + 0x58);
  lVar12 = DAT_00029268;
  iVar16 = iVar10;
  goto LAB_00015657;
LAB_0001551f:
  puVar13 = (undefined8 *)0x0;
  do {
    if (puVar13 == (undefined8 *)0x0) {
      if ((longlong *)*plVar3 == plVar3) break;
      puVar13 = (undefined8 *)(*plVar3 - *(longlong *)(lVar7 + 0x1a0));
    }
    else {
      plVar4 = *(longlong **)(*(longlong *)(lVar7 + 0x1a0) + (longlong)puVar13);
      if (plVar4 == plVar3) break;
      puVar13 = (undefined8 *)((longlong)plVar4 - *(longlong *)(lVar7 + 0x1a0));
    }
    if (puVar13 == (undefined8 *)0x0) break;
    *(bool *)(puVar13 + 0x16) = puVar13 == puVar2;
  } while( true );
  puVar13 = (undefined8 *)0x0;
  plVar4 = (longlong *)(lVar7 + 0x1a8);
  do {
    if (puVar13 == (undefined8 *)0x0) {
      if ((longlong *)*plVar4 == plVar4) break;
      puVar13 = (undefined8 *)(*plVar4 - *(longlong *)(lVar7 + 0x1b8));
    }
    else {
      plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0x1b8) + (longlong)puVar13);
      if (plVar3 == plVar4) break;
      puVar13 = (undefined8 *)((longlong)plVar3 - *(longlong *)(lVar7 + 0x1b8));
    }
    if (puVar13 == (undefined8 *)0x0) break;
    *(bool *)(puVar13 + 0x16) = puVar13 == puVar2;
  } while( true );
  KeReleaseSpinLock(DAT_00029268 + 0x50,
                    CONCAT71((int7)((ulonglong)plVar4 >> 8),*(undefined1 *)(DAT_00029268 + 0x58)));
  lVar12 = DAT_00029268;
  if (*(longlong *)(lVar14 + 0x1480) != 0) {
    uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
    plVar4 = (longlong *)(lVar7 + 0x1c0);
    *(undefined1 *)(lVar12 + 0x58) = uVar8;
    plVar3 = (longlong *)(*(longlong *)(lVar7 + 0x1d0) + 0x1470 + lVar14);
    *plVar3 = *plVar4;
    plVar3[1] = (longlong)plVar4;
    *(longlong **)(*plVar4 + 8) = plVar3;
    *plVar4 = (longlong)plVar3;
    *(int *)(lVar7 + 0x6a4) = *(int *)(lVar7 + 0x6a4) + 1;
    KeReleaseSpinLock(lVar12 + 0x50,
                      CONCAT71((int7)((ulonglong)plVar4 >> 8),*(undefined1 *)(lVar12 + 0x58)));
  }
  lVar12 = DAT_00029268;
  if (*(longlong *)(lVar14 + 0x1720) != 0) {
    uVar8 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
    plVar4 = (longlong *)(lVar7 + 0x1d8);
    *(undefined1 *)(lVar12 + 0x58) = uVar8;
    plVar3 = (longlong *)(*(longlong *)(lVar7 + 0x1e8) + 0x1710 + lVar14);
    *plVar3 = *plVar4;
    plVar3[1] = (longlong)plVar4;
    *(longlong **)(*plVar4 + 8) = plVar3;
    *plVar4 = (longlong)plVar3;
    *(int *)(lVar7 + 0x6a8) = *(int *)(lVar7 + 0x6a8) + 1;
    uVar8 = *(undefined1 *)(lVar12 + 0x58);
LAB_00015657:
    KeReleaseSpinLock(lVar12 + 0x50,uVar8);
  }
  goto LAB_00015260;
}

