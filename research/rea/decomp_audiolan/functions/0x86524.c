// rea decompile_all
// name: FUN_00086524
// address: 0x86524
// body: available
// range: 0x86524-0x865c3 inclusive
// range: 0x86600-0x8689f inclusive
// range: 0x868c0-0x868d3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00086524(int param_1)

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
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 *local_50;
  undefined1 auStack_40 [8];
  int *local_38;
  
  puVar1 = (undefined4 *)FUN_0008b800(auStack_40);
  *puVar1 = _DAT_000868a0;
  uVar2 = FUN_0008cf78();
  iVar3 = FUN_0008ce54(uVar2,s_0__WarpFramerService_000868a1 + 3,auStack_40);
  if (iVar3 == 0) {
LAB_00086884:
    *(undefined1 *)(param_1 + 0x2f0) = 1;
    FUN_0008b818(auStack_40);
    return 1;
  }
  puVar1 = (undefined4 *)FUN_001a0808(0xc,1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *(undefined4 **)(param_1 + 0x2ec) = puVar1;
  iVar3 = DAT_000868b8;
  if ((puVar1 != (undefined4 *)0x0) && (*(ushort *)(param_1 + 0x284) < 2)) {
    uVar13 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      do {
        iVar8 = param_1 + uVar13 * 8;
        switch(*(undefined1 *)(iVar8 + 0x7c)) {
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
        piVar12 = *(int **)(param_1 + 0x2ec);
        local_60 = CONCAT22(local_60._2_2_,*(undefined2 *)(iVar8 + 0x78));
        local_5c = 0;
        local_58 = CONCAT31(local_58._1_3_,*(undefined1 *)(iVar8 + 0x7d));
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
            local_50 = (undefined1 *)&local_60;
            if (1 < ((iVar8 >> 1) - (iVar8 >> 0x1f)) + 1) {
              iVar8 = (int)((ulonglong)((longlong)iVar3 * (longlong)((int)puVar9 - (int)puVar1)) >>
                           0x20);
              puVar10 = puVar1;
              local_50 = (undefined1 *)&local_60;
              do {
                puVar10 = puVar10 + -3;
                puVar9 = puVar9 + -3;
                FUN_0016da38(puVar10,puVar9);
                iVar4 = iVar4 + 1;
              } while (iVar4 < ((iVar8 >> 1) - (iVar8 >> 0x1f)) + 1);
            }
            FUN_0016da38(puVar1,local_50);
          }
          else {
            uVar14 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
            if (uVar14 < uVar5 + 1) {
              uVar14 = uVar5 + 1;
            }
            local_50 = (undefined1 *)&local_60;
            puVar6 = (undefined4 *)FUN_0010f82c(uVar14 * 0xc,0);
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
              *puVar9 = local_60;
              puVar9[1] = local_5c;
              puVar9[2] = local_58;
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
            FUN_0010fa20(iVar11,(iVar4 >> 1) - (iVar4 >> 0x1f),0);
            *piVar12 = (int)puVar6;
            piVar12[1] = (int)(puVar6 + ((iVar8 >> 1) - (iVar8 >> 0x1f)) * 3 + 3);
            piVar12[2] = (int)(puVar6 + uVar14 * 3);
          }
        }
        else {
          piVar12[1] = (int)(puVar1 + 3);
          if (puVar1 != (undefined4 *)0x0) {
            *puVar1 = local_60;
            puVar1[1] = 0;
            puVar1[2] = local_58;
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_1 + 0x30));
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      local_60 = CONCAT22(local_60._2_2_,(short)DAT_000868bc);
      local_5c = 0;
      local_58 = local_58 & 0xffffff00;
      FUN_001de0e4(*(undefined4 *)(param_1 + 0x2ec),&local_60);
    }
    uVar2 = FUN_0000a674(param_1 + 4);
    iVar3 = (**(code **)(*local_38 + 0x14))(local_38,uVar2,*(undefined4 *)(param_1 + 0x2ec));
    if (iVar3 != 0) goto LAB_00086884;
  }
  FUN_0008b818(auStack_40);
  return 0;
}

