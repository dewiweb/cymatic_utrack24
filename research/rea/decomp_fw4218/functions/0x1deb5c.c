// rea decompile_all
// name: FUN_001deb5c
// address: 0x1deb5c
// body: available
// range: 0x1deb5c-0x1ded53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001deb5c(int param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  
  pbVar11 = *(byte **)(param_1 + 4);
  if (*pbVar11 >> 4 != 4) goto LAB_001decba;
  uVar5 = (*pbVar11 & 0xf) * 4;
  uVar8 = *(ushort *)(pbVar11 + 2) >> 8 | *(ushort *)(pbVar11 + 2) << 8;
  if (((*(ushort *)(param_1 + 10) < uVar5) || (*(ushort *)(param_1 + 8) < uVar8)) ||
     (iVar6 = FUN_001de144(pbVar11,uVar5), iVar6 != 0)) goto LAB_001decba;
  FUN_001f120c(param_1,uVar8);
  uVar3 = *(uint *)(pbVar11 + 0x10);
  *DAT_001ded54 = *(uint *)(pbVar11 + 0x10);
  *DAT_001ded58 = *(uint *)(pbVar11 + 0xc);
  puVar9 = param_2;
  if ((byte)((byte)uVar3 >> 4) == 0xe) {
    if ((-1 < (int)((uint)*(byte *)((int)param_2 + 0x39) << 0x18)) ||
       (iVar6 = FUN_001dddc4(param_2,DAT_001ded54), iVar6 == 0)) {
      puVar9 = (undefined4 *)0x0;
      goto LAB_001dec66;
    }
LAB_001dec62:
    if (puVar9 == (undefined4 *)0x0) goto LAB_001dec66;
LAB_001dec84:
    puVar4 = DAT_001ded58;
    puVar10 = puVar9;
    if ((*DAT_001ded58 != 0) &&
       ((iVar6 = FUN_001deb2c(*DAT_001ded58,param_2), iVar6 != 0 || ((*puVar4 & 0xff) >> 4 == 0xe)))
       ) goto LAB_001decba;
  }
  else {
    bVar2 = true;
    do {
      if (((((*(byte *)((int)puVar9 + 0x39) & 1) != 0) && (puVar9 != (undefined4 *)0xfffffffc)) &&
          (puVar9[1] != 0)) &&
         (((*DAT_001ded54 == puVar9[1] || (iVar6 = FUN_001deb2c(*DAT_001ded54,puVar9), iVar6 != 0))
          || (((uint *)puVar9[10] != (uint *)0x0 && (*DAT_001ded54 == *(uint *)puVar9[10]))))))
      goto LAB_001dec62;
      if (bVar2) {
        bVar2 = false;
        puVar9 = (undefined4 *)*DAT_001ded5c;
      }
      else {
        puVar9 = (undefined4 *)*puVar9;
      }
      if (puVar9 == param_2) {
        puVar9 = (undefined4 *)*puVar9;
      }
    } while (puVar9 != (undefined4 *)0x0);
LAB_001dec66:
    if ((pbVar11[9] != 0x11) || (puVar10 = param_2, *(short *)(pbVar11 + uVar5 + 2) != 0x4400))
    goto LAB_001dec84;
  }
  iVar6 = DAT_001ded60;
  if (puVar10 != (undefined4 *)0x0) {
    if ((*(ushort *)(pbVar11 + 6) & 0xff3f) == 0) {
      *(undefined4 **)(DAT_001ded60 + 4) = param_2;
      *(byte **)(iVar6 + 8) = pbVar11;
      iVar7 = FUN_001f325c(param_1,param_2);
      puVar4 = DAT_001ded54;
      if (iVar7 == 0) {
        bVar1 = pbVar11[9];
        if (bVar1 == 1) {
          FUN_001dd5e0(param_1,param_2);
        }
        else if (bVar1 == 2) {
          FUN_001dd8e0(param_1,param_2,DAT_001ded54);
        }
        else if (bVar1 == 6) {
          FUN_001fa6fc(param_1,param_2);
        }
        else if (bVar1 == 0x11) {
          FUN_001fefc8(param_1,param_2);
        }
        else {
          iVar7 = FUN_001deb2c(*DAT_001ded54,param_2);
          if ((iVar7 == 0) && ((*puVar4 & 0xff) >> 4 != 0xe)) {
            *(byte **)(param_1 + 4) = pbVar11;
            FUN_001dd4d8(param_1,2);
          }
          FUN_001f0fa0(param_1);
        }
      }
      puVar4 = DAT_001ded58;
      *(undefined4 *)(iVar6 + 4) = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
    }
    else {
      FUN_001f0fa0(param_1);
    }
    return 0;
  }
LAB_001decba:
  FUN_001f0fa0(param_1);
  return 0;
}

