// rea decompile_all
// name: FUN_00015ec0
// address: 0x15ec0
// body: available
// range: 0x15ec0-0x1618f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1618c to 0x15774 FUN_00015774 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015ec0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  piVar1 = DAT_000161a4;
  if (param_3 != 6) {
    *(byte *)(*(int *)(param_1 + 0x34) + 0x16) = *(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 0xfe;
    piVar1[3] = piVar1[3] + 1;
    return;
  }
  uVar3 = 0;
  if ((*(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 1) != 0) {
    uVar3 = *(ushort *)(*(int *)(param_1 + 0x34) + 0x18) & 0xffff1fff;
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (uVar3 == 0) {
    *(byte *)(*(int *)(param_1 + 0x34) + 0x16) = *(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 0xfe;
    piVar1[4] = piVar1[4] + 1;
    return;
  }
  if ((uint)(*(int *)(param_1 + 0x18) * 4) < uVar3) {
    *(byte *)(*(int *)(param_1 + 0x34) + 0x16) = *(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 0xfe;
    piVar1[5] = piVar1[5] + 1;
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar4 = FUN_00012c2c(*(undefined4 *)(param_1 + 8),0);
    *(int *)(param_1 + 0x10) = iVar4;
    iVar5 = DAT_000161a8;
    if (iVar4 == 0) {
      *(byte *)(*(int *)(param_1 + 0x34) + 0x16) = *(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 0xfe
      ;
      piVar1[7] = piVar1[7] + 1;
      return;
    }
    *(int *)(DAT_000161a8 + 4) = *(int *)(DAT_000161a8 + 4) + 1;
    iVar9 = *(int *)(param_1 + 0x34);
    uVar3 = *(ushort *)(iVar9 + 0xc) & 0xffff07ff;
    if (*(uint *)(param_1 + 0x38) != uVar3) {
      *(uint *)(param_1 + 0x38) = uVar3;
      *(undefined4 *)(iVar5 + 4) = 0;
    }
    piVar2 = DAT_000161ac;
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar8 = param_2 * 4 + 0x20;
    if (iVar5 < 0x80) {
      puVar10 = (undefined4 *)(iVar9 + iVar8);
      puVar6 = (undefined4 *)(iVar4 + 8);
      puVar7 = puVar6;
      if (3 < iVar5) {
        iVar5 = -((int)((iVar5 + ((uint)(iVar5 >> 0x1f) >> 0x1e)) * 0x20000000) >> 0x1f);
        if (iVar5 != 1) goto LAB_00016160;
        while( true ) {
          puVar7 = puVar6 + 1;
          *puVar6 = *puVar10;
LAB_00016160:
          if ((int)(*(int *)(param_1 + 0x2c) + ((uint)(*(int *)(param_1 + 0x2c) >> 0x1f) >> 0x1e))
              >> 2 <= iVar5) break;
          iVar5 = iVar5 + 2;
          puVar6 = puVar7 + 1;
          *puVar7 = *puVar10;
        }
        FUN_00015774(param_1);
        return;
      }
      iVar5 = 0;
      goto LAB_00016160;
    }
    iVar5 = *(int *)(param_1 + 0xc);
    *(int *)(iVar5 + 0x1c) = iVar4 + 8;
    *(int *)(*piVar2 + *(int *)(iVar5 + 4) * 0x40 + 8) = iVar4 + 8;
    iVar5 = *(int *)(param_1 + 0xc);
    iVar8 = *(int *)(param_1 + 0x34) + iVar8;
    *(int *)(iVar5 + 0x18) = iVar8;
    *(int *)(*piVar2 + *(int *)(iVar5 + 4) * 0x40 + 0xc) = iVar8;
    iVar5 = *(int *)(param_1 + 0xc);
    uVar3 = *(uint *)(param_1 + 0x2c);
    if (*(char *)(iVar5 + 0xc) == '\x01') {
      FUN_001dad70(*(undefined4 *)(iVar5 + 0x18),uVar3);
    }
    if (*(char *)(iVar5 + 0xd) == '\x01') {
      FUN_001dad70(*(undefined4 *)(iVar5 + 0x1c),uVar3);
    }
    *(uint *)(*DAT_000161b0 + *(int *)(iVar5 + 4) * 4 + 0x400) =
         uVar3 >> *(sbyte *)(iVar5 + 0x20) & 0xffff | *(int *)(iVar5 + 0x14) << 0x10;
    *piVar1 = *piVar1 + 1;
    return;
  }
  *(byte *)(*(int *)(param_1 + 0x34) + 0x16) = *(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 0xfe;
  piVar1[6] = piVar1[6] + 1;
  return;
}

