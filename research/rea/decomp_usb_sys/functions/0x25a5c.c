// rea decompile_all
// name: FUN_00025a5c
// address: 0x25a5c
// body: available
// range: 0x25a5c-0x25ca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x25c9c to 0x24648 FUN_00024648 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00025a5c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  void *_Dst;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  uint *puVar13;
  
  puVar13 = *(uint **)(param_2 + 0x18);
  puVar3 = puVar13 + (*(uint *)(param_2 + 0x2c) >> 2);
  lVar11 = DAT_00029268;
  do {
    if (puVar3 <= puVar13) {
      FUN_00024648(param_2);
      return;
    }
    uVar6 = *puVar13 & 0xf;
    bVar12 = (byte)(*puVar13 >> 4) & 0xf;
    if (uVar6 < 8) {
      if (uVar6 == 7) {
LAB_00025adf:
        uVar6 = 3;
      }
      else {
        if (uVar6 != 2) {
          if (2 < uVar6) {
            if (uVar6 < 5) goto LAB_00025adf;
            if (uVar6 == 5) {
LAB_00025ad8:
              uVar6 = 1;
              goto LAB_00025b01;
            }
            if (uVar6 == 6) goto LAB_00025ad4;
          }
          goto LAB_00025aff;
        }
LAB_00025ad4:
        uVar6 = 2;
      }
    }
    else {
      if (7 < uVar6) {
        if (0xb < uVar6) {
          if (uVar6 < 0xe) goto LAB_00025ad4;
          if (uVar6 != 0xe) {
            if (uVar6 == 0xf) goto LAB_00025ad8;
            goto LAB_00025aff;
          }
        }
        goto LAB_00025adf;
      }
LAB_00025aff:
      uVar6 = 0;
    }
LAB_00025b01:
    lVar7 = *(longlong *)(param_1 + 0x18 + (ulonglong)bVar12 * 8);
    if (lVar7 != 0) {
LAB_00025bab:
      lVar9 = 0;
      plVar2 = (longlong *)(lVar7 + 0x88);
      do {
        if (lVar9 == 0) {
          if ((longlong *)*plVar2 == plVar2) goto LAB_00025c6b;
          lVar9 = *plVar2 - *(longlong *)(lVar7 + 0x98);
        }
        else {
          plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x98) + lVar9);
          if (plVar1 == plVar2) goto LAB_00025c6b;
          lVar9 = (longlong)plVar1 - *(longlong *)(lVar7 + 0x98);
        }
        if (lVar9 == 0) goto LAB_00025c6b;
        uVar5 = KeAcquireSpinLockRaiseToDpc(lVar11 + 0x50);
        *(undefined1 *)(lVar11 + 0x58) = uVar5;
        _Dst = (void *)FUN_00024350(lVar9);
        if (*(longlong *)(lVar9 + 0x70) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(int *)(lVar9 + 0x80) - *(int *)(lVar9 + 0x88);
        }
        if ((_Dst != (void *)0x0) && (uVar8 != 0)) {
          uVar10 = uVar6;
          if (uVar8 < uVar6) {
            uVar10 = uVar8;
          }
          memcpy(_Dst,(void *)((longlong)puVar13 + 1),(ulonglong)uVar10);
          FUN_000243a8(lVar9,(ulonglong)uVar10);
          FUN_00024408(lVar9);
        }
        KeReleaseSpinLock(DAT_00029268 + 0x50,*(undefined1 *)(DAT_00029268 + 0x58));
        lVar11 = DAT_00029268;
      } while( true );
    }
    plVar2 = (longlong *)(lVar11 + 0x120);
    lVar9 = 0;
    do {
      if (lVar9 != 0) {
        plVar1 = *(longlong **)(*(longlong *)(lVar11 + 0x130) + lVar9);
        if (plVar1 != plVar2) {
          lVar9 = (longlong)plVar1 - *(longlong *)(lVar11 + 0x130);
          goto LAB_00025b42;
        }
LAB_00025b9b:
        lVar7 = 0;
        break;
      }
      if ((longlong *)*plVar2 == plVar2) goto LAB_00025b9b;
      lVar9 = *plVar2 - *(longlong *)(lVar11 + 0x130);
LAB_00025b42:
      if (lVar9 == 0) goto LAB_00025b9b;
      plVar1 = (longlong *)(lVar9 + 0x30);
      lVar7 = 0;
      do {
        if (lVar7 != 0) {
          plVar4 = *(longlong **)(lVar7 + *(longlong *)(lVar9 + 0x40));
          if (plVar4 != plVar1) {
            lVar7 = (longlong)plVar4 - *(longlong *)(lVar9 + 0x40);
            goto LAB_00025b70;
          }
LAB_00025b92:
          lVar7 = 0;
          break;
        }
        if ((longlong *)*plVar1 == plVar1) goto LAB_00025b92;
        lVar7 = *plVar1 - *(longlong *)(lVar9 + 0x40);
LAB_00025b70:
        if (lVar7 == 0) goto LAB_00025b92;
      } while ((((*(int *)(lVar7 + 0x18) != 3) || (*(char *)(lVar7 + 0x114) == '\0')) ||
               (*(byte *)(lVar7 + 0x34) != bVar12)) || (*(char *)(lVar7 + 0x3a) != '\0'));
    } while (lVar7 == 0);
    *(longlong *)(param_1 + 0x18 + (ulonglong)bVar12 * 8) = lVar7;
    if (lVar7 != 0) goto LAB_00025bab;
LAB_00025c6b:
    puVar13 = puVar13 + 1;
  } while( true );
}

