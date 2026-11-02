// rea decompile_all
// name: FUN_00088350
// address: 0x88350
// body: available
// range: 0x88350-0x88631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0008860c) */
/* WARNING: Removing unreachable block (ram,0x000883b4) */
/* WARNING: Removing unreachable block (ram,0x000884ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00088350(int param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  int local_5c;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  
  uVar2 = _DAT_00088634;
  iStack_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  FUN_001a0700();
  local_5c = *(int *)(param_1 + 0xf0);
  iVar5 = local_5c;
  iVar14 = *(int *)(local_5c + 4);
  while (iVar14 != 0) {
    if (*(uint *)(iVar14 + 0x10) < local_20) {
      iVar14 = *(int *)(iVar14 + 0xc);
    }
    else {
      iVar5 = iVar14;
      iVar14 = *(int *)(iVar14 + 8);
    }
  }
  if ((iVar5 != local_5c) && (*(uint *)(iVar5 + 0x10) <= local_20)) {
    local_5c = iVar5;
  }
  if (local_5c == *(int *)(param_1 + 0xf0)) {
    FUN_000028a4(s_A_ERROR__mDNS_Service__Can_t_fin_00088636 + 2);
  }
  else {
    piVar11 = (int *)(local_5c + 0x14);
    bVar1 = false;
    piVar12 = (int *)**(int **)(local_5c + 0x24);
    if (piVar12 != *(int **)(local_5c + 0x24)) {
      do {
        uVar6 = local_18;
        uVar13 = *(uint *)(piVar12[2] + -4);
        uVar3 = FUN_000034d0();
        uVar4 = *(uint *)(piVar12[2] + -4);
        if (uVar4 < uVar13) {
          uVar13 = uVar4;
        }
        uVar4 = uVar3;
        if (uVar13 < uVar3) {
          uVar4 = uVar13;
        }
        iVar5 = FUN_0000339c(piVar12[2],uVar6,uVar4);
        if (((iVar5 == 0) && (uVar3 <= uVar13)) && (uVar13 == uVar3)) {
          uVar13 = *(uint *)(piVar12[3] + -4);
          uVar3 = FUN_000034d0();
          uVar4 = *(uint *)(piVar12[3] + -4);
          if (uVar4 < uVar13) {
            uVar13 = uVar4;
          }
          uVar4 = uVar3;
          if (uVar13 < uVar3) {
            uVar4 = uVar13;
          }
          iVar5 = FUN_0000339c(piVar12[3],param_5,uVar4);
          if (((iVar5 == 0) && (uVar3 <= uVar13)) && (uVar13 == uVar3)) {
            uVar13 = *(uint *)(piVar12[4] + -4);
            uVar3 = FUN_000034d0();
            uVar4 = *(uint *)(piVar12[4] + -4);
            if (uVar4 < uVar13) {
              uVar13 = uVar4;
            }
            uVar4 = uVar3;
            if (uVar13 < uVar3) {
              uVar4 = uVar13;
            }
            iVar5 = FUN_0000339c(piVar12[4],param_6,uVar4);
            if (((iVar5 == 0) && (uVar3 <= uVar13)) && (uVar13 == uVar3)) {
              bVar1 = true;
              break;
            }
          }
        }
        piVar12 = (int *)*piVar12;
      } while (piVar12 != *(int **)(local_5c + 0x24));
    }
    if ((int)(local_1c << 0x1e) < 0) {
      if (bVar1) {
        *(undefined1 *)(piVar12 + 5) = 1;
        goto LAB_00088628;
      }
      uVar6 = FUN_001da358(auStack_4c,local_18,auStack_30);
      uVar7 = FUN_001da358(auStack_38,param_5,auStack_2c);
      uVar8 = FUN_001da358(auStack_34,param_6,auStack_28);
      iVar5 = FUN_001da408(auStack_48,uVar6);
      iVar5 = FUN_001da408(iVar5 + 4,uVar7);
      iVar5 = FUN_001da408(iVar5 + 4,uVar8);
      *(undefined1 *)(iVar5 + 4) = 1;
      iVar14 = *(int *)(local_5c + 0x24);
      piVar12 = *(int **)(local_5c + 0x18);
      if (piVar12 == (int *)0x0) {
        if (*(int *)(local_5c + 0x1c) == *(int *)(local_5c + 0x20)) {
          uVar13 = 1;
          if (*piVar11 != 0) {
            uVar4 = *(uint *)(*piVar11 + 4);
            uVar3 = (uVar4 >> 1) + uVar4 + (uVar4 >> 3);
            uVar13 = uVar4 + 1;
            if (uVar4 + 1 <= uVar3) {
              uVar13 = uVar3;
            }
          }
          piVar12 = (int *)FUN_0010f82c(0xc,0);
          iVar9 = FUN_0010f82c(uVar13 * 0x18,0);
          piVar12[2] = iVar9;
          iVar9 = *piVar11;
          piVar12[1] = uVar13;
          *piVar12 = iVar9;
          *piVar11 = (int)piVar12;
          iVar9 = piVar12[2];
          *(int *)(local_5c + 0x1c) = iVar9;
          *(uint *)(local_5c + 0x20) = iVar9 + uVar13 * 0x18;
        }
        piVar12 = *(int **)(local_5c + 0x1c);
        *(int **)(local_5c + 0x1c) = piVar12 + 6;
      }
      else {
        *(int *)(local_5c + 0x18) = *piVar12;
      }
      if (piVar12 + 2 != (int *)0x0) {
        iVar9 = FUN_001da408(piVar12 + 2,iVar5 + -8);
        iVar9 = FUN_001da408(iVar9 + 4,iVar5 + -4);
        iVar9 = FUN_001da408(iVar9 + 4,iVar5);
        *(undefined1 *)(iVar9 + 4) = *(undefined1 *)(iVar5 + 4);
      }
      *piVar12 = iVar14;
      piVar12[1] = *(int *)(iVar14 + 4);
      **(undefined4 **)(iVar14 + 4) = piVar12;
      *(int **)(iVar14 + 4) = piVar12;
      *(int *)(local_5c + 0x28) = *(int *)(local_5c + 0x28) + 1;
      iVar5 = FUN_001da44c(auStack_40);
      iVar5 = FUN_001da44c(iVar5 + -4);
      FUN_001da44c(iVar5 + -4);
      FUN_001da44c(auStack_34);
      FUN_001da44c(auStack_38);
      FUN_001da44c(auStack_4c);
    }
    else {
      if (!bVar1) goto LAB_00088628;
      if (piVar12 != *(int **)(local_5c + 0x24)) {
        *(int *)piVar12[1] = *piVar12;
        *(int *)(*piVar12 + 4) = piVar12[1];
        *(int *)(local_5c + 0x28) = *(int *)(local_5c + 0x28) + -1;
        iVar5 = FUN_001da44c(piVar12 + 4);
        iVar5 = FUN_001da44c(iVar5 + -4);
        FUN_001da44c(iVar5 + -4);
        *piVar12 = *(int *)(local_5c + 0x18);
        *(int **)(local_5c + 0x18) = piVar12;
      }
    }
    if (((local_1c & 1) == 0) &&
       (puVar10 = *(undefined4 **)(local_5c + 0x2c), puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(puVar10,local_20);
    }
  }
LAB_00088628:
  FUN_001a0d18(uVar2);
  return;
}

