// rea decompile_all
// name: FUN_001da4e4
// address: 0x1da4e4
// body: available
// range: 0x1da4e4-0x1da7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_001da4e4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_2c;
  uint local_28;
  
  uVar9 = *(uint *)(*param_1 - 4);
  uVar1 = FUN_000034d0(param_2);
  uVar2 = *(uint *)(*param_1 - 4);
  if (uVar2 < uVar9) {
    if (uVar2 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_0010f7cc(9,&DAT_001da7e0,&DAT_001da7e0,uVar9,uVar2);
  }
  if (-uVar1 - 0xf < *(uint *)(*param_1 - 4)) {
    FUN_0010f7cc(8,&DAT_001da7e0,&DAT_001da7e0,*(uint *)(*param_1 - 4),-uVar1 - 0xf);
  }
  uVar2 = DAT_001da7e4;
  uVar3 = *param_1;
  uVar6 = *(uint *)(uVar3 - 4);
  uVar10 = uVar6 + uVar1;
  if (uVar10 == 0) {
    if (uVar3 != DAT_001da7e4) {
      piVar4 = (int *)(uVar3 - 0xc);
      iVar11 = *piVar4;
      if ((iVar11 == -1) || ((piVar4 != DAT_001da7e8 && (*piVar4 = iVar11 + -1, iVar11 == 0)))) {
        FUN_0010fa20(*param_1 - 0xc,*(int *)(*param_1 - 8) + 0xe,0);
      }
    }
    *param_1 = uVar2;
  }
  else {
    iVar11 = uVar6 - uVar9;
    if (((*(int *)(uVar3 - 0xc) + 1U < 2) && (uVar10 <= *(uint *)(uVar3 - 8))) &&
       ((param_2 == 0 || ((param_2 < uVar3 || (uVar3 + uVar6 <= param_2)))))) {
      if (iVar11 != 0) {
        FUN_000036fc(uVar3 + uVar9 + uVar1,uVar3 + uVar9,iVar11);
      }
      if (uVar1 != 0) {
        FUN_000036fc(*param_1 + uVar9,param_2,uVar1);
      }
      *(uint *)(*param_1 - 4) = uVar10;
      *(undefined1 *)(*param_1 + uVar10) = 0;
    }
    else {
      local_2c = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (local_2c < uVar6 + 0x80) {
        local_2c = uVar6 + 0x80;
      }
      local_28 = uVar10;
      puVar7 = &local_2c;
      if (local_2c < uVar10) {
        puVar7 = &local_28;
      }
      uVar3 = *puVar7;
      if (0xfffffff1 < uVar3) {
        FUN_0010f7cc(8,&DAT_001da7e0,&DAT_001da7e0,uVar3,0xfffffff1);
      }
      if (uVar3 < uVar10) {
        FUN_0010f7cc(8,&DAT_001da7e0,&DAT_001da7e0,uVar10,uVar3);
      }
      piVar4 = DAT_001da7e8;
      if (uVar3 != 0) {
        piVar4 = (int *)FUN_0010f82c(uVar3 + 0xe,0);
        if (piVar4 != (int *)0x0) {
          *piVar4 = 0;
          piVar4[1] = 0;
          piVar4[2] = 0;
        }
        piVar4[2] = uVar10;
        *piVar4 = 0;
        piVar4[1] = uVar3;
        puVar8 = (undefined1 *)((int)piVar4 + uVar10 + 0xc);
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = 0;
        }
      }
      if (uVar9 != 0) {
        FUN_00003628(piVar4 + 3,*param_1,uVar9);
      }
      if (uVar1 != 0) {
        FUN_00003628((int)piVar4 + uVar9 + 0xc,param_2,uVar1);
      }
      if (iVar11 != 0) {
        FUN_00003628((int)piVar4 + uVar1 + uVar9 + 0xc,*param_1 + uVar9,iVar11);
      }
      if (*param_1 != uVar2) {
        piVar5 = (int *)(*param_1 - 0xc);
        iVar11 = *piVar5;
        if ((iVar11 == -1) || ((piVar5 != DAT_001da7e8 && (*piVar5 = iVar11 + -1, iVar11 == 0)))) {
          FUN_0010fa20(*param_1 - 0xc,*(int *)(*param_1 - 8) + 0xe,0);
        }
      }
      *param_1 = (uint)(piVar4 + 3);
    }
  }
  return param_1;
}

