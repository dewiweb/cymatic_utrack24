// rea decompile_all
// name: FUN_000a5fb8
// address: 0xa5fb8
// body: available
// range: 0xa5fb8-0xa623b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_000a5fb8(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  
  if (param_1 != param_2) {
    iVar5 = param_1[1];
    if (*param_1 != iVar5) {
      iVar9 = (int)((ulonglong)((longlong)DAT_000a623c * (longlong)(iVar5 - *param_1)) >> 0x20);
      param_1[1] = iVar5 + ((iVar9 >> 1) - (iVar9 >> 0x1f)) * -0xc;
    }
    puVar13 = (undefined4 *)param_2[1];
    iVar5 = DAT_000a623c;
    for (puVar12 = (undefined4 *)*param_2; puVar12 != puVar13; puVar12 = puVar12 + 3) {
      puVar11 = (undefined4 *)param_1[1];
      DAT_000a623c = iVar5;
      if (puVar11 == (undefined4 *)param_1[2]) {
        iVar7 = (int)((ulonglong)((longlong)iVar5 * (longlong)(param_1[2] - *param_1)) >> 0x20);
        iVar9 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)puVar11 - *param_1)) >> 0x20);
        uVar3 = (iVar9 >> 1) - (iVar9 >> 0x1f);
        if (uVar3 < (uint)((iVar7 >> 1) - (iVar7 >> 0x1f))) {
          param_1[1] = (int)(puVar11 + 3);
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = puVar11[-3];
            puVar11[1] = puVar11[-2];
            puVar11[2] = puVar11[-1];
          }
          puVar4 = puVar11 + -3;
          iVar9 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)puVar4 - (int)puVar11)) >>
                       0x20);
          iVar7 = 1;
          if (1 < ((iVar9 >> 1) - (iVar9 >> 0x1f)) + 1) {
            iVar5 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)puVar4 - (int)puVar11)) >>
                         0x20);
            puVar8 = puVar11;
            do {
              puVar8 = puVar8 + -3;
              puVar4 = puVar4 + -3;
              FUN_0016da38(puVar8,puVar4);
              iVar7 = iVar7 + 1;
            } while (iVar7 < ((iVar5 >> 1) - (iVar5 >> 0x1f)) + 1);
          }
          FUN_0016da38(puVar11,puVar12);
        }
        else {
          uVar14 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar14 < uVar3 + 1) {
            uVar14 = uVar3 + 1;
          }
          puVar1 = (undefined4 *)FUN_0010f82c(uVar14 * 0xc,0);
          puVar8 = puVar1;
          iVar5 = DAT_000a623c;
          for (puVar4 = (undefined4 *)*param_1; DAT_000a623c = iVar5, puVar4 != puVar11;
              puVar4 = puVar4 + 3) {
            if (puVar8 != (undefined4 *)0x0) {
              uVar6 = puVar4[1];
              uVar10 = puVar4[2];
              *puVar8 = *puVar4;
              puVar8[1] = uVar6;
              puVar8[2] = uVar10;
            }
            puVar8 = puVar8 + 3;
            iVar5 = DAT_000a623c;
          }
          iVar9 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)puVar11 - *param_1)) >> 0x20);
          puVar4 = puVar1 + ((iVar9 >> 1) - (iVar9 >> 0x1f)) * 3;
          if (puVar4 != (undefined4 *)0x0) {
            uVar6 = *puVar12;
            uVar10 = puVar12[1];
            puVar4[2] = puVar12[2];
            *puVar4 = uVar6;
            puVar4[1] = uVar10;
          }
          puVar8 = (undefined4 *)param_1[1];
          iVar9 = (int)((ulonglong)((longlong)iVar5 * (longlong)((int)puVar11 - *param_1)) >> 0x20);
          puVar4 = puVar1 + ((iVar9 >> 1) - (iVar9 >> 0x1f)) * 3;
          for (; puVar11 != puVar8; puVar11 = puVar11 + 3) {
            puVar2 = puVar4 + 3;
            if (puVar2 != (undefined4 *)0x0) {
              uVar6 = puVar11[1];
              uVar10 = puVar11[2];
              *puVar2 = *puVar11;
              puVar4[4] = uVar6;
              puVar4[5] = uVar10;
            }
            puVar4 = puVar2;
          }
          iVar9 = *param_1;
          iVar7 = (int)((ulonglong)((longlong)iVar5 * (longlong)(param_1[1] - iVar9)) >> 0x20);
          iVar5 = (int)((ulonglong)((longlong)iVar5 * (longlong)(param_1[2] - iVar9)) >> 0x20);
          FUN_0010fa20(iVar9,(iVar5 >> 1) - (iVar5 >> 0x1f),0);
          param_1[2] = (int)(puVar1 + uVar14 * 3);
          param_1[1] = (int)(puVar1 + ((iVar7 >> 1) - (iVar7 >> 0x1f)) * 3 + 3);
          *param_1 = (int)puVar1;
        }
      }
      else {
        param_1[1] = (int)(puVar11 + 3);
        if (puVar11 != (undefined4 *)0x0) {
          uVar6 = *puVar12;
          uVar10 = puVar12[1];
          puVar11[2] = puVar12[2];
          *puVar11 = uVar6;
          puVar11[1] = uVar10;
        }
      }
      iVar5 = DAT_000a623c;
    }
    DAT_000a623c = iVar5;
    return param_1;
  }
  return param_1;
}

