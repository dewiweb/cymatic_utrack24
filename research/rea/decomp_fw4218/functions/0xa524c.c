// rea decompile_all
// name: FUN_000a524c
// address: 0xa524c
// body: available
// range: 0xa524c-0xa555f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a524c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  uint *puVar10;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 auStack_70 [24];
  int local_58;
  undefined1 auStack_50 [32];
  int local_30;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    FUN_0005f6a0(param_1);
    FUN_001d0130(1);
  }
  if (*(int *)(param_1 + 0x90) < 0) goto LAB_000a5518;
  iVar1 = param_1 + 0x34;
  iVar9 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_0012c838(auStack_b0,iVar1,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x90),
                   *(undefined4 *)(param_1 + 0xcc),
                   (uint)*(ushort *)(param_1 + 0xe4) * (uint)*(byte *)(param_1 + 7) *
                   *(int *)(param_1 + 0xd4));
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                        (*(int **)(param_1 + 0x24),auStack_b0,0xffffffff);
      if (iVar2 != 0) {
        thunk_FUN_00002898(_DAT_000a5560);
      }
    }
    uVar6 = s_e__cue_dataERROR__WaveFileEncode_000a5561._3_4_;
    uVar3 = (uint)*(ushort *)(param_1 + 0x27a);
    if (uVar3 != 0) {
      pcVar8 = *(char **)(param_1 + 0xcc);
      *(uint *)(pcVar8 + 8) = uVar3;
      *(uint *)(pcVar8 + 4) = uVar3 * 0x18 + 4;
      *(undefined4 *)pcVar8 = uVar6;
      uVar6 = s_e__cue_dataERROR__WaveFileEncode_000a5561._7_4_;
      uVar3 = 0;
      iVar2 = 3;
      if (*(short *)(param_1 + 0x27a) != 0) {
        do {
          if (*(uint *)(param_1 + 0xc) < iVar2 + 0x18U) {
            FUN_0012c838(auStack_50,iVar1,*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0xcc),iVar2 << 2)
            ;
            iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                              (*(int **)(param_1 + 0x24),auStack_50,0xffffffff);
            if (iVar2 == 0) {
              iVar9 = iVar9 + local_30;
            }
            else {
              thunk_FUN_00002898();
            }
            iVar2 = 0;
          }
          uVar7 = *(uint *)(param_1 + uVar3 * 4 + 0x27c);
          puVar10 = (uint *)(*(int *)(param_1 + 0xcc) + iVar2 * 4);
          *puVar10 = uVar3;
          puVar10[1] = 0;
          puVar10[2] = uVar6;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = uVar7;
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + 6;
        } while (uVar3 < *(ushort *)(param_1 + 0x27a));
      }
      FUN_0012c838(auStack_98,iVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x90),
                   *(undefined4 *)(param_1 + 0xcc),iVar2 << 2);
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                        (*(int **)(param_1 + 0x24),auStack_98,0xffffffff);
      if (iVar2 == 0) {
        iVar9 = iVar9 + local_78;
      }
      else {
        thunk_FUN_00002898();
      }
    }
  }
  FUN_0012378c(auStack_70,iVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x90));
  piVar4 = (int *)FUN_000cbaf0();
  iVar5 = (**(code **)(*piVar4 + 8))(piVar4,auStack_70,0xffffffff);
  iVar2 = local_58;
  if (iVar5 != 0) {
    thunk_FUN_00002898(DAT_000a55ac);
    iVar2 = -4;
  }
  iVar5 = FUN_0005f7d4(param_1,*(undefined4 *)(param_1 + 0x90),0);
  uVar6 = DAT_000a55b0;
  if (iVar5 == 0) {
LAB_000a5500:
    FUN_00002898(uVar6);
  }
  else {
    *(int *)(param_1 + 0xa0) = iVar2 + -8;
    *(int *)(param_1 + 0xc4) = (iVar2 - iVar9) + -0x2c;
    FUN_0012c7bc(param_1 + 0xfc,iVar1,*(undefined4 *)(param_1 + 0x30),
                 *(undefined4 *)(param_1 + 0x90),param_1 + 0x9c,0x2c);
    iVar9 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                      (*(int **)(param_1 + 0x24),param_1 + 0xfc,0xffffffff);
    uVar6 = DAT_000a55b4;
    if (iVar9 != 0) goto LAB_000a5500;
  }
  iVar9 = FUN_0005f828(param_1,*(undefined4 *)(param_1 + 0x90));
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
LAB_000a5518:
  if (*(int *)(param_1 + 200) != 0) {
    uVar6 = FUN_000ec4b0();
    FUN_000ec19c(uVar6,*(undefined4 *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0x94) < 0) {
    return;
  }
  iVar9 = FUN_0005f828(param_1,*(undefined4 *)(param_1 + 0x94));
  if (iVar9 != 0) {
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  }
  return;
}

