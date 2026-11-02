// rea decompile_all
// name: FUN_0012b550
// address: 0x12b550
// body: available
// range: 0x12b550-0x12b763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012b550(int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int extraout_r2;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_28 [16];
  
  piVar7 = *(int **)(param_1 + 4);
  if (param_2 != 0xffff) {
    if (piVar7 == (int *)0x0) {
      return;
    }
    do {
      uVar3 = (uint)*(ushort *)(piVar7 + 0x24);
      bVar9 = param_2 < uVar3;
      bVar8 = param_2 == uVar3;
      if (!bVar9 && !bVar8) {
        uVar3 = 1;
      }
      if (bVar9) {
        uVar3 = 0;
      }
      if (bVar8) {
        if (piVar7 == (int *)0x0) {
          return;
        }
        (**(code **)(*param_3 + 0x6c))(auStack_28,param_3);
        FUN_001433bc(piVar7,auStack_28);
        iVar4 = piVar7[9];
        uVar3 = *(uint *)(iVar4 + 0x5e8);
        *(uint *)(iVar4 + 0x5e8) = uVar3 + 1;
        *(uint *)(iVar4 + 0x5ec) = *(int *)(iVar4 + 0x5ec) + (uint)(0xfffffffe < uVar3);
        uVar3 = 0;
        while( true ) {
          if (*(ushort *)(piVar7 + 0x11) <= uVar3) {
            return;
          }
          puVar5 = *(undefined4 **)(piVar7[0x10] + uVar3 * 4);
          if (puVar5 == (undefined4 *)0x0) break;
          if (param_3 == (int *)0x0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(*param_3 + -0x14) + (int)param_3;
          }
          (**(code **)*puVar5)(puVar5,*(int *)(*piVar7 + -0x14) + (int)piVar7,iVar4,0);
          uVar3 = uVar3 + 1 & 0xfffeffff;
        }
        return;
      }
      if ((int *)piVar7[uVar3 + 0x41] == (int *)0x0) {
        return;
      }
      bVar1 = 0;
      if (uVar3 != 0) {
        bVar1 = *(byte *)(piVar7 + 0x43);
      }
      piVar7 = (int *)piVar7[uVar3 + 0x41];
    } while (uVar3 == 0 || (bVar1 & 0x80) == 0);
    return;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  for (piVar2 = (int *)piVar7[0x41]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x41]) {
    piVar7 = piVar2;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  do {
    (**(code **)(*param_3 + 0x6c))(auStack_28,param_3);
    FUN_001433bc(piVar7,auStack_28);
    iVar6 = piVar7[9];
    uVar3 = *(uint *)(iVar6 + 0x5e8);
    iVar4 = uVar3 + 1;
    *(int *)(iVar6 + 0x5e8) = iVar4;
    *(uint *)(iVar6 + 0x5ec) = *(int *)(iVar6 + 0x5ec) + (uint)(0xfffffffe < uVar3);
    uVar3 = 0;
    while (uVar3 < *(ushort *)(piVar7 + 0x11)) {
      iVar6 = piVar7[0x10];
      puVar5 = *(undefined4 **)(iVar6 + uVar3 * 4);
      if (puVar5 == (undefined4 *)0x0) break;
      bVar8 = param_3 != (int *)0x0;
      if (bVar8) {
        iVar6 = *param_3;
      }
      if (bVar8) {
        iVar4 = *(int *)(iVar6 + -0x14);
      }
      if (bVar8) {
        iVar4 = iVar4 + (int)param_3;
      }
      else {
        iVar4 = 0;
      }
      (**(code **)*puVar5)(puVar5,*(int *)(*piVar7 + -0x14) + (int)piVar7,iVar4,0);
      iVar4 = extraout_r2;
      uVar3 = uVar3 + 1 & 0xfffeffff;
    }
    piVar7 = (int *)FUN_001d7aac(param_1,piVar7);
    if (piVar7 == (int *)0x0) {
      return;
    }
  } while( true );
}

