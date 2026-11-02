// rea decompile_all
// name: FUN_00021628
// address: 0x21628
// body: available
// range: 0x21628-0x2194e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00021628(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 in_register_00000014;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  
  if (*(char *)(param_1[0xc] + 0xb4) != '\0') {
    if ((longlong *)*param_1 == param_1) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)*param_1 + -0x1e;
    }
    plVar1 = param_1 + 3;
    if ((longlong *)*plVar1 == plVar1) {
      lVar11 = 0;
    }
    else {
      lVar11 = (longlong)((longlong *)*plVar1 + -0x1e);
    }
    if ((plVar7 != (longlong *)0x0) && (lVar11 != 0)) {
      uVar14 = ((((*(int *)(lVar11 + 0x240) - (int)plVar7[0x37]) - (int)plVar7[0x36]) +
                *(int *)((longlong)plVar7 + 0x1b4)) - param_2) + *(uint *)(lVar11 + 0x23c);
      if ((*(char *)(DAT_00029268 + 0x75c) != '\0') &&
         ((500 < *(uint *)(lVar11 + 0x23c) && (uVar14 < *(uint *)(lVar11 + 0x18))))) {
        FUN_000206c8(lVar11,0);
      }
      uVar13 = 0xffffffff;
      do {
        plVar7 = (longlong *)*param_1;
        do {
          FUN_0001fe5c((longlong)(plVar7 + -0x1e));
          puVar3 = (uint *)plVar7[-1];
          if (puVar3 == (uint *)0x0) {
            *(int *)((longlong)plVar7 + 0x5c) = *(int *)((longlong)plVar7 + 0x5c) + 1;
LAB_000216fe:
            iVar6 = 0;
          }
          else {
            uVar9 = *puVar3;
            lVar11 = *(longlong *)(plVar7[-2] + 0x18);
            if ((int)puVar3[2] < 0) {
              *(int *)((longlong)plVar7 + 0x54) = *(int *)((longlong)plVar7 + 0x54) + 1;
              *(uint *)(plVar7 + 0xb) = puVar3[2];
              goto LAB_000216fe;
            }
            if (puVar3[1] == 0) goto LAB_000216fe;
            *(int *)((longlong)plVar7 + 0x1c) = *(int *)((longlong)plVar7 + 0x1c) + 1;
            uVar8 = FUN_00021b80((longlong)(plVar7 + 2),(ulonglong)uVar9 + lVar11,puVar3[1]);
            iVar6 = (int)uVar8;
            *(int *)((longlong)plVar7 + -0xac) = *(int *)((longlong)plVar7 + -0xac) + iVar6;
          }
          lVar11 = DAT_00029268;
          plVar7 = (longlong *)*plVar7;
        } while (plVar7 != param_1);
        uVar9 = *(int *)((longlong)param_1 + 0x524) + *(int *)(DAT_00029268 + 0x6fc);
        *(uint *)(param_1 + 0xa4) = (int)param_1[0xa4] + uVar9 / 8000;
        *(uint *)((longlong)param_1 + 0x524) = uVar9 % 8000;
        uVar9 = *(uint *)(param_1 + 0xa6);
        if (uVar9 <= *(uint *)(param_1 + 0xa4)) {
          uVar10 = uVar9 * 0x1770000 + (int)param_1[0xa5];
          *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) - uVar9;
          *(int *)((longlong)param_1 + 0x52c) =
               *(int *)((longlong)param_1 + 0x52c) + uVar10 / *(uint *)(lVar11 + 0x6fc);
          *(uint *)(param_1 + 0xa5) = uVar10 % *(uint *)(lVar11 + 0x6fc);
        }
        for (plVar7 = (longlong *)*plVar1; plVar7 != plVar1; plVar7 = (longlong *)*plVar7) {
          if ((*(char *)(lVar11 + 0x75c) == '\0') || (uVar14 <= *(uint *)(plVar7 + -0x1b))) {
            FUN_000206c8((longlong)(plVar7 + -0x1e),iVar6);
          }
          else {
            FUN_0002262c((longlong)(plVar7 + 2),(uint *)((longlong)plVar7 + 0x154),iVar6,0);
            uVar14 = *(uint *)(plVar7 + -0x1b);
          }
          lVar11 = DAT_00029268;
        }
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          plVar7 = (longlong *)*param_1;
          plVar12 = plVar7;
          do {
            puVar3 = (uint *)((longlong)plVar12 + -0xac);
            plVar12 = (longlong *)*plVar12;
            if (*puVar3 < uVar13) {
              uVar13 = *puVar3;
            }
          } while (plVar12 != param_1);
          do {
            *(int *)((longlong)plVar7 + -0xac) = *(int *)((longlong)plVar7 + -0xac) - uVar13;
            plVar7 = (longlong *)*plVar7;
          } while (plVar7 != param_1);
          cVar5 = (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
          lVar11 = DAT_00029268;
          if (cVar5 != '\0') {
            puVar2 = (undefined8 *)(DAT_00029268 + 0x170);
            *(longlong *)(DAT_00029268 + 0x168) =
                 *(longlong *)(DAT_00029268 + 0x168) + (ulonglong)uVar13;
            for (puVar15 = (undefined8 *)*puVar2; puVar15 != puVar2;
                puVar15 = (undefined8 *)*puVar15) {
              *(int *)((longlong)puVar15 + 0x14) = *(int *)((longlong)puVar15 + 0x14) + uVar13;
              if (*(uint *)(puVar15 + 2) <= *(uint *)((longlong)puVar15 + 0x14)) {
                piVar4 = (int *)puVar15[4];
                *(uint *)((longlong)puVar15 + 0x14) =
                     *(uint *)((longlong)puVar15 + 0x14) - *(int *)(puVar15 + 2);
                if (*piVar4 != piVar4[1]) {
                  *(int *)(lVar11 + 0x7a0) = *(int *)(lVar11 + 0x7a0) + (*piVar4 - piVar4[1]);
                  *(int *)(lVar11 + 0x79c) = *(int *)(lVar11 + 0x79c) + 1;
                  LOCK();
                  piVar4[1] = *piVar4;
                  UNLOCK();
                }
                LOCK();
                *piVar4 = *piVar4 + 1;
                UNLOCK();
                KeSetEvent(puVar15[3],8);
                lVar11 = DAT_00029268;
              }
            }
          }
          *(undefined4 *)((longlong)param_1 + 0x46c) = *(undefined4 *)(param_1[0xc] + 0x44);
          KeReleaseSpinLock(lVar11 + 0x50,*(undefined1 *)(lVar11 + 0x58));
          plVar7 = (longlong *)*param_1;
          do {
            FUN_00020188((longlong)(plVar7 + -0x1e));
            plVar7 = (longlong *)*plVar7;
          } while (plVar7 != param_1);
          plVar7 = (longlong *)*plVar1;
          do {
            FUN_0002091c((longlong)(plVar7 + -0x1e));
            plVar7 = (longlong *)*plVar7;
          } while (plVar7 != plVar1);
          return;
        }
      } while( true );
    }
  }
  KeReleaseSpinLock(DAT_00029268 + 0x50,
                    CONCAT71((int7)(CONCAT44(in_register_00000014,param_2) >> 8),
                             *(undefined1 *)(DAT_00029268 + 0x58)));
  return;
}

