// rea decompile_all
// name: FUN_0009b018
// address: 0x9b018
// body: available
// range: 0x9b018-0x9b2db inclusive
// range: 0x9b3e8-0x9b4c3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009b018(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_64 [18];
  undefined1 local_52;
  undefined4 local_38;
  undefined1 auStack_30 [4];
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  
  uVar1 = *(ushort *)(param_1 + 0x234);
  iVar8 = 0xe;
  local_38 = 0;
  if ((uVar1 & 0x8000) == 0) {
    FUN_0009b9a4(param_1,DAT_0009b324);
    *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x238);
  }
  else {
    uVar9 = FUN_002492ec((int)(short)(uVar1 >> 8 & 0x7f) * (int)(short)(uVar1 & 0xff));
    FUN_00248dc0(0,DAT_0009b2dc,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar2 = FUN_00248bd4();
    *(undefined4 *)(param_1 + 0x238) = uVar2;
  }
  uVar7 = 0;
  if (*(short *)(param_1 + 0x232) != 0) {
    do {
      piVar3 = (int *)FUN_001f01c4(0x18,1);
      if (piVar3 != (int *)0x0) {
        iVar4 = FUN_00006604(DAT_0009b2e0,*(undefined2 *)(param_1 + 0x232));
        piVar3[1] = 0;
        *piVar3 = iVar4;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[4] = 0;
        piVar3[5] = 0;
        iVar5 = FUN_001f01c4(iVar4,1);
        piVar3[2] = iVar5;
        piVar3[3] = iVar5 + iVar4;
        piVar3[4] = iVar5;
        piVar3[5] = iVar5;
      }
      iVar4 = param_1 + uVar7 * 0x38;
      *(int **)(iVar4 + 0x26c) = piVar3;
      if (piVar3 == (int *)0x0) {
        uVar2 = FUN_00006604(DAT_0009b2e0,*(undefined2 *)(param_1 + 0x232));
        FUN_00002898(s_XU__ERROR__initializeMidiTrackIn_0009b328._0_4_,uVar2);
        return 6;
      }
      *(undefined1 *)(iVar4 + 0x270) = 0;
      iVar5 = FUN_0005f284(param_1,*(undefined4 *)(param_1 + 0x218),iVar8);
      if (iVar5 == 0) {
        FUN_00002898(s_XU__ERROR__initializeMidiTrackIn_0009b328 + 4);
        if (*(int *)(param_1 + 0x218) != 0) {
          FUN_0005f2d8(param_1);
          *(undefined4 *)(param_1 + 0x218) = 0;
        }
        FUN_0009b6fc(param_1);
        FUN_0009ac58(param_1);
        return 1;
      }
      iVar8 = iVar8 + 8;
      FUN_00123544(auStack_64,param_1 + 0x44,*(undefined4 *)(param_1 + 0x40),
                   *(undefined4 *)(param_1 + 0x218),auStack_30,8,1);
      piVar3 = (int *)FUN_000cbaf0();
      iVar5 = (**(code **)(*piVar3 + 8))(piVar3,auStack_64,0xffffffff);
      if (iVar5 != 0) {
        FUN_00002898(_DAT_0009b2e4,local_52);
        FUN_00002898(s_T__ERROR__initializeMidiTrackInf_0009b2e5 + 3,local_38);
        if (*(int *)(param_1 + 0x218) != 0) {
          FUN_0005f2d8(param_1);
          *(undefined4 *)(param_1 + 0x218) = 0;
        }
        FUN_0009b6fc(param_1);
        FUN_0009ac58(param_1);
        return 4;
      }
      iVar5 = FUN_00003928(auStack_30,&DAT_0009b364,4);
      if (iVar5 != 0) {
        FUN_00002898(s_ERROR__initializeMidiTrackInfo__M_0009b36c);
        iVar8 = *(int *)(param_1 + 0x218);
joined_r0x0009b254:
        if (iVar8 != 0) {
          FUN_0005f2d8(param_1);
          *(undefined4 *)(param_1 + 0x218) = 0;
        }
        FUN_0009b6fc(param_1);
        FUN_0009ac58(param_1);
        return 3;
      }
      uVar6 = ((uint)local_2b << 0x10 | (uint)local_2a << 8 |
              (uint)local_29 | (uint)local_2c << 0x18) + iVar8;
      *(int *)(iVar4 + 0x244) = iVar8;
      *(uint *)(iVar4 + 0x240) = uVar6;
      *(int *)(iVar4 + 0x23c) = iVar8;
      *(undefined4 *)(iVar4 + 0x254) = 0;
      *(undefined4 *)(iVar4 + 0x248) = 0;
      if (*(uint *)(param_1 + 0x954) < uVar6) {
        FUN_00002898(s_ERROR__initializeMidiTrackInfo__M_0009b3a8);
        iVar8 = *(int *)(param_1 + 0x218);
        goto joined_r0x0009b254;
      }
      iVar8 = FUN_0009aa38(param_1,uVar7);
      if (iVar8 == 0) {
        FUN_00002898(s__A_ERROR__initializeMidiTrackInf_0009b4c5 + 3);
        iVar8 = *(int *)(param_1 + 0x218);
joined_r0x0009b480:
        if (iVar8 != 0) {
          FUN_0005f2d8(param_1);
          *(undefined4 *)(param_1 + 0x218) = 0;
        }
        FUN_0009b6fc(param_1);
        FUN_0009ac58(param_1);
        return 7;
      }
      iVar8 = FUN_0009a3c0(param_1,uVar7);
      if (iVar8 == 0) {
        FUN_00002898(s_ERROR__initializeMidiTrackInfo__u_0009b504);
        iVar8 = *(int *)(param_1 + 0x218);
        goto joined_r0x0009b480;
      }
      iVar8 = *(int *)(iVar4 + 0x240);
      uVar7 = uVar7 + 1 & 0xfffeffff;
    } while (uVar7 < *(ushort *)(param_1 + 0x232));
  }
  piVar3 = _DAT_0009b4c4;
  if (((int *)*_DAT_0009b4c4)[1] != *(int *)*_DAT_0009b4c4) {
    do {
      iVar8 = FUN_0009b540(param_1);
      if (iVar8 == 0) {
        return 0;
      }
    } while (((int *)*piVar3)[1] != *(int *)*piVar3);
  }
  return 0;
}

