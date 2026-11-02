// rea decompile_all
// name: FUN_0012591c
// address: 0x12591c
// body: available
// range: 0x12591c-0x125973 inclusive
// range: 0x142384-0x14251f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012591c(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [4];
  
  piVar3 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) == (int *)0x0) {
    return;
  }
  do {
    uVar6 = (uint)*(ushort *)(piVar3 + 0x3a);
    bVar9 = param_2 < uVar6;
    bVar8 = param_2 == uVar6;
    if (!bVar9 && !bVar8) {
      uVar6 = 1;
    }
    if (bVar9) {
      uVar6 = 0;
    }
    if (bVar8) {
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_001179e0();
      (**(code **)(*param_3 + 0x6c))(auStack_48,param_3);
      iVar4 = FUN_0012e3a4(piVar3 + 0x1a,auStack_48);
      if (iVar4 == 0) {
        FUN_001179d0(piVar3);
      }
      else {
        (**(code **)(*param_3 + 0x6c))(auStack_28,param_3);
        iVar4 = FUN_00132ec8(piVar3 + 0x15,auStack_28,auStack_18);
        FUN_001179d0(piVar3);
        if (iVar4 != 0) {
          *(undefined1 *)((int)piVar3 + 0xeb) = 1;
          uVar6 = 0;
          while ((uVar6 < *(ushort *)(piVar3 + 0x23) &&
                 (puVar7 = *(undefined4 **)(piVar3[0x22] + uVar6 * 4), puVar7 != (undefined4 *)0x0))
                ) {
            (**(code **)(*param_3 + 0x6c))(auStack_38,param_3);
            (**(code **)*puVar7)(puVar7,*(int *)(*piVar3 + -0x14) + (int)piVar3,auStack_38,1);
            uVar6 = uVar6 + 1 & 0xfffeffff;
          }
        }
      }
      if ((char)piVar3[0x14] != '\0') {
        if (param_3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*param_3 + -0x14) + (int)param_3;
        }
        FUN_00142594(piVar3,iVar4);
      }
      iVar4 = piVar3[9];
      uVar6 = *(uint *)(iVar4 + 0x5e8);
      *(uint *)(iVar4 + 0x5e8) = uVar6 + 1;
      *(uint *)(iVar4 + 0x5ec) = *(int *)(iVar4 + 0x5ec) + (uint)(0xfffffffe < uVar6);
      uVar6 = 0;
      while( true ) {
        if (*(ushort *)(piVar3 + 0x23) <= uVar6) {
          return;
        }
        piVar5 = *(int **)(piVar3[0x22] + uVar6 * 4);
        if (piVar5 == (int *)0x0) break;
        if (param_3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*param_3 + -0x14) + (int)param_3;
        }
        (**(code **)(*piVar5 + 8))(piVar5,*(int *)(*piVar3 + -0x14) + (int)piVar3,iVar4);
        uVar6 = uVar6 + 1 & 0xfffeffff;
      }
      return;
    }
    puVar1 = (uint *)(piVar3 + uVar6 + 0x10);
    if ((int *)*puVar1 == (int *)0x0) {
      return;
    }
    if (uVar6 != 0) {
      piVar3 = (int *)(uint)*(byte *)(piVar3 + 0x12);
    }
    uVar2 = (uint)piVar3 & 0x80;
    piVar3 = (int *)*puVar1;
  } while (uVar6 == 0 || uVar2 == 0);
  return;
}

