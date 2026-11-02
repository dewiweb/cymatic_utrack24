// rea decompile_all
// name: FUN_000e7a50
// address: 0xe7a50
// body: available
// range: 0xe7a50-0xe7d3b inclusive
// range: 0xe7e04-0xe7e0b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000e7a50(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  
  iVar1 = FUN_00003960(*param_2,s_create_000e7d3c);
  if (iVar1 == 0) {
    if (param_3 < 2) {
      return 6;
    }
    FUN_00003220(param_2[1],0);
    FUN_000ad214();
    FUN_000028a4(s_Done_000e7d64);
    return 0;
  }
  iVar1 = FUN_00003960(*param_2,s_alloc_000e7d44);
  if (iVar1 == 0) {
    if (param_3 < 2) {
      return 6;
    }
    uVar4 = FUN_00003220(param_2[1],0);
    uVar9 = FUN_000ad464();
    iVar1 = FUN_000ad2f8(uVar9,uVar4);
    if (iVar1 != 0) {
      FUN_000028a4(s_Buffer___0x_p_allocated_000e7d74,iVar1);
      piVar6 = (int *)(param_1 + 0x14);
      piVar7 = *(int **)(param_1 + 0x18);
      iVar10 = *(int *)(param_1 + 0x24);
      if (piVar7 == (int *)0x0) {
        piVar7 = *(int **)(param_1 + 0x1c);
        if (piVar7 == *(int **)(param_1 + 0x20)) {
          uVar8 = 1;
          if (*piVar6 != 0) {
            uVar2 = *(uint *)(*piVar6 + 4);
            uVar8 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar8 < uVar2 + 1) {
              uVar8 = uVar2 + 1;
            }
          }
          piVar7 = (int *)FUN_0010f82c(0xc,0);
          iVar3 = FUN_0010f82c(uVar8 * 0xc,0);
          piVar7[2] = iVar3;
          *piVar7 = *piVar6;
          piVar7[1] = uVar8;
          *piVar6 = (int)piVar7;
          piVar7 = (int *)piVar7[2];
          *(int **)(param_1 + 0x1c) = piVar7;
          *(int **)(param_1 + 0x20) = piVar7 + uVar8 * 3;
        }
        *(int **)(param_1 + 0x1c) = piVar7 + 3;
      }
      else {
        *(int *)(param_1 + 0x18) = *piVar7;
      }
      if (piVar7 + 2 != (int *)0x0) {
        piVar7[2] = iVar1;
      }
      *piVar7 = iVar10;
      piVar7[1] = *(int *)(iVar10 + 4);
      **(int **)(iVar10 + 4) = (int)piVar7;
      *(int **)(iVar10 + 4) = piVar7;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      return 0;
    }
    pcVar5 = s_Failed_000e7d6c;
  }
  else {
    iVar1 = FUN_00003960(*param_2,&DAT_000e7d4c);
    if (iVar1 == 0) {
      if (param_3 < 2) {
        return 6;
      }
      iVar1 = FUN_00003220(param_2[1],0);
      piVar7 = (int *)**(int **)(param_1 + 0x24);
      while( true ) {
        if (piVar7 == *(int **)(param_1 + 0x24)) {
          FUN_000028a4(s_No_buffer_found_000e7d90);
          return 1;
        }
        if (iVar1 == 0) break;
        piVar7 = (int *)*piVar7;
        iVar1 = iVar1 + -1;
      }
      uVar9 = piVar7[2];
      uVar4 = FUN_000ad464();
      FUN_000ad150(uVar4,uVar9);
      if (piVar7 != (int *)*(int *)(param_1 + 0x24)) {
        *(int *)piVar7[1] = *piVar7;
        *(int *)(*piVar7 + 4) = piVar7[1];
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
        *piVar7 = *(undefined4 *)(param_1 + 0x18);
        *(int **)(param_1 + 0x18) = piVar7;
      }
      FUN_000028a4(s_Buffer___0x_p_freed_000e7da4,uVar9);
      return 0;
    }
    iVar1 = FUN_00003960(*param_2,&DAT_000e7d54);
    if (iVar1 == 0) {
      FUN_000ad464();
      uVar4 = FUN_001598f0();
      FUN_000028a4(s_Free_size___u_000e7dbc,uVar4);
      FUN_000ad464();
      uVar4 = FUN_001598f8();
      FUN_000028a4(s_Min_size_ever___u_000e7dd0,uVar4);
      FUN_000028a4(s_Allocated_buffers__000e7de4);
      piVar7 = (int *)**(int **)(param_1 + 0x24);
      iVar1 = 0;
      if (piVar7 != *(int **)(param_1 + 0x24)) {
        do {
          FUN_000028a4(s___3u__0x_p_000e7df8,iVar1,piVar7[2]);
          piVar7 = (int *)*piVar7;
          iVar1 = iVar1 + 1;
        } while (piVar7 != (int *)*(int *)(param_1 + 0x24));
      }
      FUN_000028a4(s_Done_000e7d64 + 4);
      return 0;
    }
    iVar1 = FUN_00003960(*param_2,s_destroy_000e7d5c);
    if (iVar1 != 0) {
      return 6;
    }
    FUN_000ad464();
    FUN_000ad12c();
    pcVar5 = s_Done_000e7d64;
  }
  FUN_000028a4(pcVar5);
  return 0;
}

