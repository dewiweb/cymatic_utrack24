// rea decompile_all
// name: FUN_00164c4c
// address: 0x164c4c
// body: available
// range: 0x164c4c-0x164e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00164c4c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined1 param_5,undefined2 *param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [12];
  undefined4 local_48;
  undefined4 local_3c;
  int iStack_34;
  undefined4 local_30;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  
  piVar13 = (int *)(param_1 + -0x114);
  uVar11 = *(undefined4 *)(DAT_00164e3c + 0xf8);
  uVar12 = param_3[1];
  uVar14 = *param_3;
  uVar6 = *(undefined4 *)(DAT_00164e3c + 0xfc);
  uVar7 = param_3[3];
  uVar15 = param_3[2];
  local_3c = param_3[4];
  iStack_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  uStack_28 = param_4;
  local_48 = FUN_001d9c54(auStack_54,param_4);
  uVar1 = *param_7;
  uVar2 = param_7[1];
  uVar4 = *param_6;
  uVar5 = param_6[1];
  uVar3 = param_7[2];
  puVar8 = (undefined4 *)FUN_001a0808(0x38,1);
  if (puVar8 == (undefined4 *)0x0) {
    iVar10 = 0;
  }
  else {
    FUN_001d9c54(auStack_58,local_48);
    *puVar8 = DAT_00164e40;
    puVar8[1] = piVar13;
    puVar8[3] = uVar6;
    puVar8[2] = uVar11;
    *(char *)(puVar8 + 4) = (char)param_2;
    puVar8[5] = uVar14;
    puVar8[6] = uVar12;
    puVar8[7] = uVar15;
    puVar8[8] = uVar7;
    puVar8[9] = local_3c;
    iVar9 = FUN_001d9c54(puVar8 + 10,auStack_58);
    iVar10 = iVar9 + -0x28;
    *(undefined1 *)(iVar9 + 4) = param_5;
    *(undefined2 *)(iVar9 + 6) = uVar4;
    *(undefined2 *)(iVar9 + 8) = uVar5;
    *(undefined1 *)(iVar9 + 10) = uVar1;
    *(undefined1 *)(iVar9 + 0xb) = uVar2;
    *(undefined1 *)(iVar9 + 0xc) = uVar3;
  }
  iVar10 = (**(code **)(*piVar13 + 0x2c))(piVar13,iVar10,0);
  if (puVar8 != (undefined4 *)0x0) {
    FUN_001d9b00(auStack_58);
  }
  FUN_001d9b00(auStack_54);
  if (iVar10 != 1) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),local_30,2);
    return;
  }
  return;
}

