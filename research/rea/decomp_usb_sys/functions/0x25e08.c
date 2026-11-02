// rea decompile_all
// name: FUN_00025e08
// address: 0x25e08
// body: available
// range: 0x25e08-0x260e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00025e08(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint *puVar17;
  uint uVar18;
  int *piVar19;
  uint local_res18;
  uint *local_58;
  longlong local_50 [2];
  
  lVar6 = DAT_00029268;
  bVar5 = false;
  lVar8 = FUN_00024a34(param_1 + 0x150);
  if (lVar8 != 0) {
    do {
      lVar16 = DAT_00029268;
      uVar7 = KeAcquireSpinLockRaiseToDpc(DAT_00029268 + 0x50);
      *(undefined1 *)(lVar16 + 0x58) = uVar7;
      lVar9 = KeQueryPerformanceCounter(local_50);
      lVar16 = DAT_00029268;
      uVar18 = *(uint *)(lVar8 + 0x28);
      local_58 = *(uint **)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x2c) = 0;
      local_res18 = 0;
      if (*(int *)(lVar6 + 0x1f8) != 0) {
        piVar19 = (int *)(lVar6 + 0x1fc);
        do {
          lVar10 = FUN_00024054((longlong *)(lVar16 + 0x120),*piVar19);
          if (lVar10 != 0) {
            iVar4 = (int)((longlong)
                          ((lVar9 - *(longlong *)(lVar10 + 0x120)) *
                          (ulonglong)*(uint *)(lVar16 + 0x750)) / (local_50[0] * 10));
            uVar14 = iVar4 + *(int *)(lVar10 + 0x118);
            if (*(uint *)(lVar16 + 0x74c) < uVar14) {
              *(longlong *)(lVar10 + 0x120) = lVar9;
              uVar14 = *(uint *)(lVar16 + 0x74c);
            }
            else if (uVar14 == 0) {
              bVar5 = true;
            }
            else {
              *(longlong *)(lVar10 + 0x120) =
                   (longlong)((ulonglong)(uint)(iVar4 * 10) * local_50[0]) /
                   (longlong)(ulonglong)*(uint *)(lVar16 + 0x750) + *(longlong *)(lVar10 + 0x120);
            }
            *(uint *)(lVar10 + 0x118) = uVar14;
            lVar13 = 0;
            plVar1 = (longlong *)(lVar10 + 0x88);
            puVar17 = local_58;
            do {
              do {
                lVar16 = DAT_00029268;
                if (lVar13 == 0) {
                  if ((longlong *)*plVar1 == plVar1) goto LAB_00026040;
                  lVar13 = *plVar1 - *(longlong *)(lVar10 + 0x98);
                }
                else {
                  plVar3 = *(longlong **)(*(longlong *)(lVar10 + 0x98) + lVar13);
                  if (plVar3 == plVar1) goto LAB_00026040;
                  lVar13 = (longlong)plVar3 - *(longlong *)(lVar10 + 0x98);
                }
                if (lVar13 == 0) goto LAB_00026040;
                pbVar11 = (byte *)FUN_00024350(lVar13);
                if (*(longlong *)(lVar13 + 0x70) == 0) {
                  uVar12 = 0;
                }
                else {
                  uVar12 = (ulonglong)(uint)(*(int *)(lVar13 + 0x80) - *(int *)(lVar13 + 0x88));
                }
              } while ((pbVar11 == (byte *)0x0) || ((uint)uVar12 == 0));
              if (uVar18 >> 2 < (uint)uVar12) {
                uVar12 = (ulonglong)(uVar18 >> 2);
              }
              if (*(uint *)(lVar10 + 0x118) <= (uint)uVar12) {
                uVar12 = (ulonglong)*(uint *)(lVar10 + 0x118);
              }
              uVar15 = uVar12;
              if ((int)uVar12 != 0) {
                do {
                  bVar2 = *pbVar11;
                  uVar18 = uVar18 - 4;
                  pbVar11 = pbVar11 + 1;
                  *puVar17 = ((uint)bVar2 << 4 | (uint)*(byte *)(lVar10 + 0x34)) << 4 | 0xf;
                  *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + 4;
                  *(int *)(lVar10 + 0x118) = *(int *)(lVar10 + 0x118) + -1;
                  puVar17 = puVar17 + 1;
                  uVar15 = uVar15 - 1;
                  local_58 = puVar17;
                } while (uVar15 != 0);
              }
              FUN_000243a8(lVar13,uVar12);
              lVar16 = DAT_00029268;
            } while (uVar18 != 0);
          }
LAB_00026040:
          local_res18 = local_res18 + 1;
          piVar19 = piVar19 + 1;
        } while (local_res18 < *(uint *)(lVar6 + 0x1f8));
      }
      KeReleaseSpinLock(lVar16 + 0x50,*(undefined1 *)(lVar16 + 0x58));
      if (*(int *)(lVar8 + 0x2c) == 0) {
        FUN_00024648(lVar8);
        break;
      }
      FUN_000257a4(param_1,lVar8);
      lVar8 = FUN_00024a34(param_1 + 0x150);
    } while (lVar8 != 0);
    if (bVar5) {
      KeSetTimer(param_1 + 0x1f0,*(undefined8 *)(param_1 + 0x270),param_1 + 0x230);
    }
  }
  return;
}

