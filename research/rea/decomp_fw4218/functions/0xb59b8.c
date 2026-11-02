// rea decompile_all
// name: FUN_000b59b8
// address: 0xb59b8
// body: available
// range: 0xb59b8-0xb5a57 inclusive
// range: 0xb5aa0-0xb5d3f inclusive
// range: 0xb5d60-0xb5d73 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000b59b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined1 auStack_34 [8];
  int *local_2c;
  undefined1 *local_28;
  
  puVar1 = (undefined4 *)FUN_000b1210(auStack_34);
  *puVar1 = _DAT_000b5d40;
  uVar2 = FUN_000b4964();
  iVar3 = FUN_000b4840(uVar2,s___WarpDeframerService_000b5d42 + 2,auStack_34);
  if (iVar3 == 0) {
LAB_000b5d24:
    *(undefined1 *)(param_1 + 0x32c) = 1;
    FUN_000b1228(auStack_34);
    return 1;
  }
  puVar1 = (undefined4 *)FUN_001f01c4(0xc,1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *(undefined4 **)(param_1 + 0x328) = puVar1;
  iVar3 = DAT_000b5d58;
  if ((puVar1 != (undefined4 *)0x0) && (*(ushort *)(param_1 + 0x68) < 2)) {
    uVar13 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      do {
        iVar8 = param_1 + uVar13 * 10;
        switch(*(undefined1 *)(iVar8 + 0x72)) {
        case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        piVar12 = *(int **)(param_1 + 0x328);
        local_40 = CONCAT22(local_40._2_2_,*(undefined2 *)(iVar8 + 0x6c));
        local_3c = 0;
        local_38 = CONCAT31(local_38._1_3_,*(undefined1 *)(iVar8 + 0x73));
        puVar1 = (undefined4 *)piVar12[1];
        if (puVar1 == (undefined4 *)piVar12[2]) {
          iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)(piVar12[2] - *piVar12)) >> 0x20);
          iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)((int)puVar1 - *piVar12)) >> 0x20);
          uVar5 = (iVar4 >> 1) - (iVar4 >> 0x1f);
          if (uVar5 < (uint)((iVar8 >> 1) - (iVar8 >> 0x1f))) {
            piVar12[1] = (int)(puVar1 + 3);
            if (puVar1 != (undefined4 *)0x0) {
              *puVar1 = puVar1[-3];
              puVar1[1] = puVar1[-2];
              puVar1[2] = puVar1[-1];
            }
            puVar9 = puVar1 + -3;
            iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)((int)puVar9 - (int)puVar1)) >>
                         0x20);
            iVar4 = 1;
            local_28 = (undefined1 *)&local_40;
            if (1 < ((iVar8 >> 1) - (iVar8 >> 0x1f)) + 1) {
              iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)((int)puVar9 - (int)puVar1)) >>
                           0x20);
              puVar10 = puVar1;
              local_28 = (undefined1 *)&local_40;
              do {
                puVar10 = puVar10 + -3;
                puVar9 = puVar9 + -3;
                FUN_001c6d8c(puVar10,puVar9);
                iVar4 = iVar4 + 1;
              } while (iVar4 < ((iVar8 >> 1) - (iVar8 >> 0x1f)) + 1);
            }
            FUN_001c6d8c(puVar1,local_28);
          }
          else {
            uVar14 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
            if (uVar14 < uVar5 + 1) {
              uVar14 = uVar5 + 1;
            }
            local_28 = (undefined1 *)&local_40;
            puVar6 = (undefined4 *)FUN_00173860(uVar14 * 0xc,0);
            puVar10 = puVar6;
            for (puVar9 = (undefined4 *)*piVar12; puVar9 != puVar1; puVar9 = puVar9 + 3) {
              if (puVar10 != (undefined4 *)0x0) {
                uVar2 = puVar9[1];
                uVar15 = puVar9[2];
                *puVar10 = *puVar9;
                puVar10[1] = uVar2;
                puVar10[2] = uVar15;
              }
              puVar10 = puVar10 + 3;
            }
            iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)((int)puVar1 - *piVar12)) >> 0x20)
            ;
            puVar9 = puVar6 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 3;
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = local_40;
              puVar9[1] = local_3c;
              puVar9[2] = local_38;
            }
            puVar10 = (undefined4 *)piVar12[1];
            iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)((int)puVar1 - *piVar12)) >> 0x20)
            ;
            puVar9 = puVar6 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 3;
            for (; puVar1 != puVar10; puVar1 = puVar1 + 3) {
              puVar7 = puVar9 + 3;
              if (puVar7 != (undefined4 *)0x0) {
                uVar2 = puVar1[1];
                uVar15 = puVar1[2];
                *puVar7 = *puVar1;
                puVar9[4] = uVar2;
                puVar9[5] = uVar15;
              }
              puVar9 = puVar7;
            }
            iVar11 = *piVar12;
            iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)(piVar12[1] - iVar11)) >> 0x20);
            iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(piVar12[2] - iVar11)) >> 0x20);
            FUN_00173a54(iVar11,(iVar4 >> 1) - (iVar4 >> 0x1f),0);
            *piVar12 = (int)puVar6;
            piVar12[1] = (int)(puVar6 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 3 + 3);
            piVar12[2] = (int)(puVar6 + uVar14 * 3);
          }
        }
        else {
          piVar12[1] = (int)(puVar1 + 3);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = local_40;
            puVar1[1] = 0;
            puVar1[2] = local_38;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      local_40 = CONCAT22(local_40._2_2_,(short)DAT_000b5d5c);
      local_3c = 0;
      local_38 = local_38 & 0xffffff00;
      FUN_0023ff38(*(undefined4 *)(param_1 + 0x328),&local_40);
    }
    if ((*(short **)(param_1 + 0x1c) != (short *)0x0) &&
       (iVar3 = (**(code **)(*local_2c + 0x14))
                          (local_2c,(int)**(short **)(param_1 + 0x1c),
                           *(undefined4 *)(param_1 + 0x328)), iVar3 != 0)) goto LAB_000b5d24;
  }
  FUN_000b1228(auStack_34);
  return 0;
}

