// rea decompile_all
// name: FUN_000685f4
// address: 0x685f4
// body: available
// range: 0x685f4-0x68877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_000685f4(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined1 auStack_58 [52];
  
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  local_64 = DAT_00068878;
  local_60 = DAT_00068878;
  local_5c = DAT_00068878;
  puVar2 = (undefined4 *)FUN_0006e06c(param_1,uVar1,0,DAT_00068878,DAT_00068878);
  *puVar2 = DAT_0006887c;
  puVar2[0x30] = param_2;
  *(undefined1 *)(puVar2 + 0x35) = 0;
  puVar7 = _DAT_00068880;
  *(undefined1 *)((int)puVar2 + 0xd5) = 0;
  *(undefined1 *)((int)puVar2 + 0xd6) = 0;
  puVar2[0x36] = puVar7;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_00002904(auStack_58,0x32,s_I__s_Streaming_00068882 + 2,uVar1);
  puVar11 = puVar2 + 0x36;
  uVar3 = FUN_000034d0(auStack_58);
  puVar4 = (undefined1 *)*puVar11;
  if (uVar3 == 0) {
    piVar5 = (int *)(puVar4 + -0xc);
    iVar9 = *piVar5;
    if (iVar9 != 0) {
      if (puVar4 != puVar7) {
        if (iVar9 == -1) {
          FUN_0010fa20(piVar5,*(int *)(puVar4 + -8) + 0xe,0);
        }
        else if (piVar5 != DAT_00068894) {
          *piVar5 = iVar9 + -1;
        }
      }
      *puVar11 = (uint)puVar7;
      return puVar2;
    }
    *(undefined4 *)(puVar4 + -4) = 0;
    puVar7 = (undefined1 *)*puVar11;
LAB_00068868:
    *puVar7 = 0;
  }
  else {
    uVar8 = *(uint *)(puVar4 + -4);
    if ((*(int *)(puVar4 + -0xc) + 1U < 2) && (uVar3 <= *(uint *)(puVar4 + -8))) {
      bVar12 = auStack_58 <= puVar4;
      if (puVar4 <= auStack_58) {
        bVar12 = puVar4 + uVar8 <= auStack_58;
      }
      if (bVar12) {
        FUN_000036fc(puVar4,auStack_58,uVar3);
        *(uint *)(*puVar11 - 4) = uVar3;
        puVar7 = (undefined1 *)(*puVar11 + uVar3);
        goto LAB_00068868;
      }
    }
    local_64 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_64 < uVar8 + 0x80) {
      local_64 = uVar8 + 0x80;
    }
    local_60 = uVar3;
    puVar10 = &local_60;
    if (uVar3 <= local_64) {
      puVar10 = &local_64;
    }
    uVar8 = *puVar10;
    if (0xfffffff1 < uVar8) {
      FUN_0010f7cc(8,s_I__s_Streaming_00068882 + 0xe,s_I__s_Streaming_00068882 + 0xe,uVar8,
                   0xfffffff1);
    }
    if (uVar8 < uVar3) {
      FUN_0010f7cc(8,s_I__s_Streaming_00068882 + 0xe,s_I__s_Streaming_00068882 + 0xe,uVar3,uVar8);
    }
    piVar5 = DAT_00068894;
    if (uVar8 != 0) {
      piVar5 = (int *)FUN_0010f82c(uVar8 + 0xe,0);
      if (piVar5 != (int *)0x0) {
        *piVar5 = 0;
        piVar5[1] = 0;
        piVar5[2] = 0;
      }
      *piVar5 = 0;
      piVar5[1] = uVar8;
      piVar5[2] = uVar3;
      puVar4 = (undefined1 *)((int)piVar5 + uVar3 + 0xc);
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    }
    FUN_00003628(piVar5 + 3,auStack_58,uVar3);
    if ((undefined1 *)*puVar11 != puVar7) {
      piVar6 = (int *)((undefined1 *)*puVar11 + -0xc);
      iVar9 = *piVar6;
      if ((iVar9 == -1) || ((piVar6 != DAT_00068894 && (*piVar6 = iVar9 + -1, iVar9 == 0)))) {
        FUN_0010fa20(*puVar11 - 0xc,*(int *)(*puVar11 - 8) + 0xe,0);
      }
    }
    *puVar11 = (uint)(piVar5 + 3);
  }
  return puVar2;
}

