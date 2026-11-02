// rea decompile_all
// name: FUN_00176128
// address: 0x176128
// body: available
// range: 0x176128-0x17642f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17640e to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001762ae) */
/* WARNING: Removing unreachable block (ram,0x00176330) */
/* WARNING: Removing unreachable block (ram,0x00176180) */
/* WARNING: Removing unreachable block (ram,0x0017633c) */
/* WARNING: Removing unreachable block (ram,0x00176348) */
/* WARNING: Removing unreachable block (ram,0x00176354) */

void FUN_00176128(int param_1,uint *param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  char cVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  
  if (param_3 == 0) {
    return;
  }
  cVar4 = *(char *)(param_1 + 0x808);
  if (cVar4 == '\x01') {
    (**(code **)(**(int **)(param_1 + 0x800) + 8))();
    return;
  }
  puVar5 = (uint *)(param_1 + 0x19c);
  if ((cVar4 == '\x03') || (cVar4 == '\x02')) {
    iVar10 = FUN_00224b0c(param_2,param_3,puVar5);
    if ((cVar4 != '\x02') && (uVar9 = iVar10 - (int)puVar5 >> 1, uVar9 != 0)) {
      puVar6 = (uint *)(param_1 + 0x19a);
      if ((uVar9 & 1) != 0) {
        *(ushort *)puVar5 = *(ushort *)puVar5 << 8 | *(ushort *)puVar5 >> 8;
        puVar6 = puVar5;
      }
      puVar8 = puVar6;
      for (uVar9 = uVar9 >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(ushort *)((int)puVar6 + 2) =
             *(ushort *)((int)puVar8 + 2) << 8 | *(ushort *)((int)puVar8 + 2) >> 8;
        puVar11 = puVar8 + 1;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
        *(ushort *)puVar6 = (ushort)*puVar11 << 8 | (ushort)*puVar11 >> 8;
      }
    }
    uVar9 = iVar10 - (int)puVar5 & 0xfffffffe;
  }
  else {
    puVar6 = puVar5;
    if ((cVar4 == '\x06') || (cVar4 == '\x05')) {
      do {
        uVar9 = (uint)(byte)*param_2;
        if (uVar9 < 0x80) {
          param_2 = (uint *)((int)param_2 + 1);
          *puVar6 = uVar9;
          uVar9 = DAT_00176430;
          puVar6 = puVar6 + 1;
          param_3 = param_3 - 1;
          if (((uint)param_2 & 3) == 0) {
            for (; (3 < param_3 && ((*param_2 & uVar9) == 0)); param_2 = param_2 + 1) {
              *puVar6 = (uint)(byte)*param_2;
              puVar6[1] = (uint)*(byte *)((int)param_2 + 1);
              puVar6[2] = (uint)*(byte *)((int)param_2 + 2);
              param_3 = param_3 - 4;
              puVar6[3] = (uint)*(byte *)((int)param_2 + 3);
              puVar6 = puVar6 + 4;
            }
          }
        }
        else if (((uVar9 - 0xc0 < 0x20) && (1 < param_3)) &&
                (pbVar1 = (byte *)((int)param_2 + 1), *pbVar1 >> 6 == 2)) {
          param_2 = (uint *)((int)param_2 + 2);
          *puVar6 = (uVar9 & 0x3f) << 6 | *pbVar1 & 0x3f;
          puVar6 = puVar6 + 1;
          param_3 = param_3 - 2;
        }
        else if (((uVar9 - 0xe0 < 0x10) && (2 < param_3)) &&
                ((pbVar1 = (byte *)((int)param_2 + 1), *pbVar1 >> 6 == 2 &&
                 (pbVar2 = (byte *)((int)param_2 + 2), *pbVar2 >> 6 == 2)))) {
          param_2 = (uint *)((int)param_2 + 3);
          *puVar6 = (uVar9 & 0x1f) << 0xc | (*pbVar1 & 0x3f) << 6 | *pbVar2 & 0x3f;
          puVar6 = puVar6 + 1;
          param_3 = param_3 - 3;
        }
        else if (((uVar9 - 0xf0 < 8) && (3 < param_3)) &&
                ((pbVar1 = (byte *)((int)param_2 + 1), *pbVar1 >> 6 == 2 &&
                 ((pbVar2 = (byte *)((int)param_2 + 2), *pbVar2 >> 6 == 2 &&
                  (pbVar3 = (byte *)((int)param_2 + 3), *pbVar3 >> 6 == 2)))))) {
          param_2 = param_2 + 1;
          *puVar6 = (uVar9 & 0xf) << 0x12 | (*pbVar1 & 0x3f) << 0xc | (*pbVar2 & 0x3f) << 6 |
                    *pbVar3 & 0x3f;
          puVar6 = puVar6 + 1;
          param_3 = param_3 - 4;
        }
        else {
          param_2 = (uint *)((int)param_2 + 1);
          param_3 = param_3 - 1;
        }
      } while (param_3 != 0);
      if (cVar4 != '\x05') {
        puVar8 = puVar5;
        puVar11 = puVar5;
        for (iVar10 = (int)puVar6 - (int)puVar5 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          *puVar11 = uVar9 << 0x18 | (uVar9 & 0xff00) << 8 | (uVar9 & 0xff0000) >> 8 | uVar9 >> 0x18
          ;
          puVar11 = puVar11 + 1;
        }
      }
      uVar9 = (int)puVar6 - (int)puVar5 & 0xfffffffc;
    }
    else {
      if (cVar4 != '\t') goto LAB_0017640e;
      do {
        uVar9 = (uint)(byte)*param_2;
        if (uVar9 < 0x80) {
          *(byte *)puVar6 = (byte)*param_2;
          uVar9 = DAT_00176430;
          puVar6 = (uint *)((int)puVar6 + 1);
          param_2 = (uint *)((int)param_2 + 1);
          param_3 = param_3 - 1;
          if (((uint)param_2 & 3) == 0) {
            for (; (3 < param_3 && ((*param_2 & uVar9) == 0)); param_2 = param_2 + 1) {
              *(byte *)puVar6 = (byte)*param_2;
              *(byte *)((int)puVar6 + 1) = *(byte *)((int)param_2 + 1);
              *(byte *)((int)puVar6 + 2) = *(byte *)((int)param_2 + 2);
              *(byte *)((int)puVar6 + 3) = *(byte *)((int)param_2 + 3);
              puVar6 = puVar6 + 1;
              param_3 = param_3 - 4;
            }
          }
        }
        else if (((uVar9 - 0xc0 < 0x20) && (1 < param_3)) && (*(byte *)((int)param_2 + 1) >> 6 == 2)
                ) {
          uVar9 = (uVar9 & 0x3f) << 6 | *(byte *)((int)param_2 + 1) & 0x3f;
          if (0xff < uVar9) {
            uVar9 = 0x3f;
          }
          *(byte *)puVar6 = (byte)uVar9;
          puVar6 = (uint *)((int)puVar6 + 1);
          param_2 = (uint *)((int)param_2 + 2);
          param_3 = param_3 - 2;
        }
        else if (((uVar9 - 0xe0 < 0x10) && (2 < param_3)) &&
                ((*(byte *)((int)param_2 + 1) >> 6 == 2 && (*(byte *)((int)param_2 + 2) >> 6 == 2)))
                ) {
          uVar9 = (uVar9 & 0x1f) << 0xc | (*(byte *)((int)param_2 + 1) & 0x3f) << 6 |
                  *(byte *)((int)param_2 + 2) & 0x3f;
          if (0xff < uVar9) {
            uVar9 = 0x3f;
          }
          *(byte *)puVar6 = (byte)uVar9;
          puVar6 = (uint *)((int)puVar6 + 1);
          param_2 = (uint *)((int)param_2 + 3);
          param_3 = param_3 - 3;
        }
        else if (((uVar9 - 0xf0 < 8) && (3 < param_3)) &&
                ((*(byte *)((int)param_2 + 1) >> 6 == 2 &&
                 ((*(byte *)((int)param_2 + 2) >> 6 == 2 && (*(byte *)((int)param_2 + 3) >> 6 == 2))
                 )))) {
          *(byte *)puVar6 = 0x3f;
          puVar6 = (uint *)((int)puVar6 + 1);
          param_2 = param_2 + 1;
          param_3 = param_3 - 4;
        }
        else {
          param_2 = (uint *)((int)param_2 + 1);
          param_3 = param_3 - 1;
        }
      } while (param_3 != 0);
      uVar9 = (int)puVar6 - (int)puVar5;
    }
  }
  if (uVar9 <= DAT_00176434) {
    piVar7 = *(int **)(param_1 + 0x800);
    (**(code **)(*piVar7 + 8))(piVar7,puVar5);
    return;
  }
LAB_0017640e:
                    /* WARNING: Subroutine does not return */
  FUN_00003538();
}

