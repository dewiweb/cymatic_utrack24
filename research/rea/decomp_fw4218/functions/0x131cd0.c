// rea decompile_all
// name: FUN_00131cd0
// address: 0x131cd0
// body: available
// range: 0x131cd0-0x131efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00131cd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iStack_2c;
  
  iVar4 = FUN_0001275c(*(undefined4 *)(param_1 + 0x20),param_1 + 0x24,
                       param_3 + *(int *)(param_1 + 0x14));
  if (iVar4 == 0) {
    return;
  }
  iStack_2c = *(int *)(param_1 + 0x124);
  uVar9 = *(uint *)(param_1 + 0x138) & 3;
  iVar8 = *(int *)(param_1 + 0x11c);
  uVar7 = *(uint *)(param_1 + 0x138) * 3 >> 2;
  do {
    uVar5 = *(uint *)(param_1 + 0x150);
    if (uVar9 == 0) {
      uVar9 = (uint)*(ushort *)(param_1 + 0x114);
      if (uVar9 != 0) {
        uVar12 = 0;
        pbVar10 = (byte *)(param_1 + 0xfc);
        iVar6 = iStack_2c;
        do {
          if ((uVar5 & 1 << (uVar12 & 0xff)) != 0) {
            piVar1 = (int *)(iVar6 + uVar7 * 4);
            iVar6 = iVar6 + iVar8 * 4;
            *(int *)(iVar4 + (uint)*pbVar10 * 4) = *piVar1 << 8;
          }
          uVar9 = uVar9 - 1;
          pbVar10 = pbVar10 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar9 != 0);
      }
      uVar9 = 1;
    }
    else {
      if (uVar9 == 1) {
        uVar9 = (uint)*(ushort *)(param_1 + 0x114);
        if (uVar9 != 0) {
          uVar12 = 0;
          pbVar10 = (byte *)(param_1 + 0xfc);
          iVar6 = iStack_2c;
          do {
            if ((uVar5 & 1 << (uVar12 & 0xff)) != 0) {
              puVar2 = (uint *)(iVar6 + uVar7 * 4);
              iVar11 = iVar6 + uVar7 * 4;
              iVar6 = iVar6 + iVar8 * 4;
              *(uint *)(iVar4 + (uint)*pbVar10 * 4) = *puVar2 >> 0x10 | *(int *)(iVar11 + 4) << 0x10
              ;
            }
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar9 != 0);
        }
        uVar9 = 2;
      }
      else {
        if (uVar9 != 2) {
          if (uVar9 == 3) {
            uVar9 = (uint)*(ushort *)(param_1 + 0x114);
            if (uVar9 != 0) {
              uVar12 = 0;
              pbVar10 = (byte *)(param_1 + 0xfc);
              iVar6 = iStack_2c;
              do {
                if ((uVar5 & 1 << (uVar12 & 0xff)) != 0) {
                  puVar3 = (undefined4 *)(iVar6 + uVar7 * 4);
                  iVar6 = iVar6 + iVar8 * 4;
                  *(undefined4 *)(iVar4 + (uint)*pbVar10 * 4) = *puVar3;
                }
                uVar9 = uVar9 - 1;
                pbVar10 = pbVar10 + 1;
                uVar12 = uVar12 + 1;
              } while (uVar9 != 0);
            }
            uVar9 = 0;
            uVar7 = uVar7 + 1;
          }
          goto LAB_00131ea4;
        }
        uVar9 = (uint)*(ushort *)(param_1 + 0x114);
        if (uVar9 != 0) {
          uVar12 = 0;
          pbVar10 = (byte *)(param_1 + 0xfc);
          iVar6 = iStack_2c;
          do {
            if ((uVar5 & 1 << (uVar12 & 0xff)) != 0) {
              puVar2 = (uint *)(iVar6 + uVar7 * 4);
              iVar11 = iVar6 + uVar7 * 4;
              iVar6 = iVar6 + iVar8 * 4;
              *(uint *)(iVar4 + (uint)*pbVar10 * 4) = *puVar2 >> 8 | *(int *)(iVar11 + 4) << 0x18;
            }
            uVar9 = uVar9 - 1;
            pbVar10 = pbVar10 + 1;
            uVar12 = uVar12 + 1;
          } while (uVar9 != 0);
        }
        uVar9 = 3;
      }
      uVar7 = uVar7 + 1;
    }
LAB_00131ea4:
    uVar5 = *(int *)(param_1 + 0x138) + 1;
    *(uint *)(param_1 + 0x138) = uVar5;
    if (*(uint *)(param_1 + 0x134) <= uVar5) {
      iVar4 = FUN_001315b8(param_1);
      if (iVar4 == 0) {
        return;
      }
      iStack_2c = *(int *)(param_1 + 0x124);
      uVar9 = 0;
      uVar7 = 0;
    }
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
    iVar4 = FUN_00012898(*(undefined4 *)(param_1 + 0x20),param_1 + 0x24);
  } while( true );
}

