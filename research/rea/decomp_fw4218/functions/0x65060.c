// rea decompile_all
// name: FUN_00065060
// address: 0x65060
// body: available
// range: 0x65060-0x652e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00065060(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
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
  local_64 = DAT_000652e4;
  local_60 = DAT_000652e4;
  local_5c = DAT_000652e4;
  puVar2 = (undefined4 *)FUN_0006f700(param_1,uVar1,0,DAT_000652e4,DAT_000652e4);
  *puVar2 = _DAT_000652e8;
  puVar2[0x30] = param_2;
  *(undefined1 *)(puVar2 + 0x35) = 0;
  uVar1 = s____iI__s_Streaming_000652ea._2_4_;
  *(undefined1 *)((int)puVar2 + 0xd5) = 0;
  *(undefined1 *)((int)puVar2 + 0xd6) = 0;
  puVar2[0x36] = uVar1;
  uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
  FUN_000028f8(auStack_58,0x32,s____iI__s_Streaming_000652ea + 6,uVar3);
  puVar11 = puVar2 + 0x36;
  uVar4 = FUN_00003738(auStack_58);
  puVar5 = (undefined1 *)*puVar11;
  if (uVar4 == 0) {
    piVar6 = (int *)(puVar5 + -0xc);
    iVar9 = *piVar6;
    if (iVar9 != 0) {
      if (puVar5 != (undefined1 *)uVar1) {
        if (iVar9 == -1) {
          FUN_00173a54(piVar6,*(int *)(puVar5 + -8) + 0xe,0);
        }
        else if (piVar6 != DAT_00065300) {
          *piVar6 = iVar9 + -1;
        }
      }
      *puVar11 = uVar1;
      return puVar2;
    }
    *(undefined4 *)(puVar5 + -4) = 0;
    puVar5 = (undefined1 *)*puVar11;
LAB_000652d4:
    *puVar5 = 0;
  }
  else {
    uVar8 = *(uint *)(puVar5 + -4);
    if ((*(int *)(puVar5 + -0xc) + 1U < 2) && (uVar4 <= *(uint *)(puVar5 + -8))) {
      bVar12 = auStack_58 <= puVar5;
      if (puVar5 <= auStack_58) {
        bVar12 = puVar5 + uVar8 <= auStack_58;
      }
      if (bVar12) {
        FUN_00003ab4(puVar5,auStack_58,uVar4);
        *(uint *)(*puVar11 - 4) = uVar4;
        puVar5 = (undefined1 *)(*puVar11 + uVar4);
        goto LAB_000652d4;
      }
    }
    local_64 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_64 < uVar8 + 0x80) {
      local_64 = uVar8 + 0x80;
    }
    local_60 = uVar4;
    puVar10 = &local_60;
    if (uVar4 <= local_64) {
      puVar10 = &local_64;
    }
    uVar8 = *puVar10;
    if (0xfffffff1 < uVar8) {
      FUN_00173800(8,s____iI__s_Streaming_000652ea + 0x12,s____iI__s_Streaming_000652ea + 0x12,uVar8
                   ,0xfffffff1);
    }
    if (uVar8 < uVar4) {
      FUN_00173800(8,s____iI__s_Streaming_000652ea + 0x12,s____iI__s_Streaming_000652ea + 0x12,uVar4
                   ,uVar8);
    }
    piVar6 = DAT_00065300;
    if (uVar8 != 0) {
      piVar6 = (int *)FUN_00173860(uVar8 + 0xe,0);
      if (piVar6 != (int *)0x0) {
        *piVar6 = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
      }
      *piVar6 = 0;
      piVar6[1] = uVar8;
      piVar6[2] = uVar4;
      puVar5 = (undefined1 *)((int)piVar6 + uVar4 + 0xc);
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
    }
    FUN_000039e0(piVar6 + 3,auStack_58,uVar4);
    if (*puVar11 != uVar1) {
      piVar7 = (int *)(*puVar11 - 0xc);
      iVar9 = *piVar7;
      if ((iVar9 == -1) || ((piVar7 != DAT_00065300 && (*piVar7 = iVar9 + -1, iVar9 == 0)))) {
        FUN_00173a54(*puVar11 - 0xc,*(int *)(*puVar11 - 8) + 0xe,0);
      }
    }
    *puVar11 = (uint)(piVar6 + 3);
  }
  return puVar2;
}

