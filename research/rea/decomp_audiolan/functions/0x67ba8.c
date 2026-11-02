// rea decompile_all
// name: FUN_00067ba8
// address: 0x67ba8
// body: available
// range: 0x67ba8-0x67ecf inclusive
// range: 0x67ee0-0x67ff7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00067ba8(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  int *piVar10;
  bool bVar11;
  int *local_3c;
  undefined *local_38;
  undefined *local_34;
  undefined *local_30 [3];
  
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c8))();
  if (0x300 < uVar2) {
    FUN_000028a4(DAT_00067ed0,uVar2,0x300);
    return;
  }
  local_34 = &DAT_00067ed4;
  puVar3 = (undefined *)FUN_000034d0();
  piVar1 = DAT_00067ed8;
  piVar10 = DAT_00067ed8 + 3;
  local_3c = piVar10;
  if (puVar3 != (undefined *)0x0) {
    ppuVar8 = local_30;
    if ((undefined *)0x80 < puVar3) {
      ppuVar8 = &local_38;
    }
    local_38 = puVar3;
    local_30[0] = (undefined *)0x80;
    puVar9 = *ppuVar8;
    if ((undefined *)0xfffffff1 < puVar9) {
      FUN_0010f7cc(8,DAT_00067edc,DAT_00067edc,puVar9);
    }
    if (puVar9 < puVar3) {
      FUN_0010f7cc(8,DAT_00067edc,DAT_00067edc,puVar3);
    }
    piVar4 = piVar1;
    if (puVar9 != (undefined *)0x0) {
      piVar4 = (int *)FUN_0010f82c(puVar9 + 0xe,0);
      if (piVar4 != (int *)0x0) {
        *piVar4 = 0;
        piVar4[1] = 0;
        piVar4[2] = 0;
      }
      piVar4[2] = (int)puVar3;
      *piVar4 = 0;
      piVar4[1] = (int)puVar9;
      if ((undefined1 *)((int)piVar4 + (int)(puVar3 + 0xc)) != (undefined1 *)0x0) {
        *(undefined1 *)((int)piVar4 + (int)(puVar3 + 0xc)) = 0;
      }
    }
    local_3c = piVar4 + 3;
  }
  FUN_00003628(local_3c,local_34,puVar3);
  if (uVar2 != 0) {
    iVar5 = FUN_001a0808(uVar2,1);
    if (iVar5 == 0) {
      if (local_3c == piVar10) {
        return;
      }
      piVar10 = local_3c + -3;
      iVar5 = *piVar10;
      if (iVar5 != -1) {
        if (piVar10 == piVar1) {
          return;
        }
        *piVar10 = iVar5 + -1;
        if (iVar5 != 0) {
          return;
        }
      }
      goto LAB_00067fd8;
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 8) + 0x1cc))(*(int **)(param_1 + 8),iVar5,uVar2);
    if (iVar6 == 0) {
      FUN_000faba0(local_30,iVar5,uVar2);
      piVar4 = (int *)FUN_0015e6f4(local_30);
      puVar3 = (undefined *)FUN_000034d0();
      if (puVar3 == (undefined *)0x0) {
        piVar4 = local_3c + -3;
        iVar6 = *piVar4;
        if (iVar6 == 0) {
          local_3c[-1] = 0;
          *(undefined1 *)local_3c = 0;
          piVar7 = local_3c;
        }
        else {
          piVar7 = piVar10;
          if ((local_3c != piVar10) &&
             ((iVar6 == -1 || ((piVar4 != piVar1 && (*piVar4 = iVar6 + -1, iVar6 == 0)))))) {
            FUN_0010fa20(local_3c + -3,local_3c[-2] + 0xe,0);
          }
        }
      }
      else if ((local_3c[-3] + 1U < 2) && (puVar3 <= (undefined *)local_3c[-2])) {
        if (piVar4 != (int *)0x0) {
          bVar11 = piVar4 <= local_3c;
          if (local_3c <= piVar4) {
            bVar11 = (int *)(local_3c[-1] + (int)local_3c) <= piVar4;
          }
          if (!bVar11) goto LAB_00067db4;
        }
        FUN_000036fc(local_3c,piVar4,puVar3);
        local_3c[-1] = (int)puVar3;
        *(undefined1 *)((int)local_3c + (int)puVar3) = 0;
        piVar7 = local_3c;
      }
      else {
LAB_00067db4:
        uVar2 = local_3c[-1];
        puVar9 = (undefined *)(uVar2 + (uVar2 >> 1) + (uVar2 >> 3));
        local_38 = (undefined *)(uVar2 + 0x80);
        if ((undefined *)(uVar2 + 0x80) <= puVar9) {
          local_38 = puVar9;
        }
        local_34 = puVar3;
        ppuVar8 = &local_38;
        if (local_38 < puVar3) {
          ppuVar8 = &local_34;
        }
        puVar9 = *ppuVar8;
        if ((undefined *)0xfffffff1 < puVar9) {
          FUN_0010f7cc(8,DAT_00067edc,DAT_00067edc,puVar9);
        }
        if (puVar9 < puVar3) {
          FUN_0010f7cc(8,DAT_00067edc,DAT_00067edc,puVar3);
        }
        piVar7 = piVar1;
        if (puVar9 != (undefined *)0x0) {
          piVar7 = (int *)FUN_0010f82c(puVar9 + 0xe,0);
          if (piVar7 != (int *)0x0) {
            *piVar7 = 0;
            piVar7[1] = 0;
            piVar7[2] = 0;
          }
          *piVar7 = 0;
          piVar7[1] = (int)puVar9;
          piVar7[2] = (int)puVar3;
          if ((undefined1 *)((int)piVar7 + (int)(puVar3 + 0xc)) != (undefined1 *)0x0) {
            *(undefined1 *)((int)piVar7 + (int)(puVar3 + 0xc)) = 0;
          }
        }
        FUN_00003628(piVar7 + 3,piVar4,puVar3);
        if (local_3c != piVar10) {
          piVar4 = local_3c + -3;
          iVar6 = *piVar4;
          if ((iVar6 == -1) || ((piVar4 != piVar1 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
            FUN_0010fa20(local_3c + -3,local_3c[-2] + 0xe,0);
          }
        }
        piVar7 = piVar7 + 3;
      }
      local_3c = piVar7;
      FUN_0010e7f4(local_30);
    }
    FUN_0019f30c(iVar5);
  }
  iVar5 = (**(code **)(**(int **)(param_1 + 0x14) + 4))
                    (*(int **)(param_1 + 0x14),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc),&local_3c);
  if (iVar5 == 0) {
    thunk_FUN_000028a4(s_ERROR__CPDeviceInfo__OnCHAI_Time_00067ff8);
  }
  if (local_3c == piVar10) {
    return;
  }
  piVar10 = local_3c + -3;
  iVar5 = *piVar10;
  if (iVar5 != -1) {
    if (piVar10 == piVar1) {
      return;
    }
    *piVar10 = iVar5 + -1;
    if (iVar5 != 0) {
      return;
    }
  }
LAB_00067fd8:
  FUN_0010fa20(local_3c + -3,local_3c[-2] + 0xe,0);
  return;
}

