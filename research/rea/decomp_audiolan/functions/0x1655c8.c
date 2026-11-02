// rea decompile_all
// name: FUN_001655c8
// address: 0x1655c8
// body: available
// range: 0x1655c8-0x1657b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001655c8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined1 param_6,int param_7,undefined4 *param_8,int param_9,undefined4 *param_10
                 ,int param_11,undefined4 *param_12,int param_13,undefined1 param_14,int param_15,
                 undefined4 param_16,int param_17,undefined4 param_18)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  piVar7 = (int *)(param_1 + -0x114);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  puVar2 = (uint *)FUN_001a0808(4,1);
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = 0;
    if (local_2c != 0) {
      *puVar2 = 1;
    }
    if (param_5 != 0) {
      *puVar2 = *puVar2 | 2;
    }
    if (param_7 != 0) {
      *puVar2 = *puVar2 | 4;
    }
    if (param_9 != 0) {
      *puVar2 = *puVar2 | 8;
    }
    if (param_11 != 0) {
      *puVar2 = *puVar2 | 0x10;
    }
    if (param_13 != 0) {
      *puVar2 = *puVar2 | 0x20;
    }
    if (param_15 != 0) {
      *puVar2 = *puVar2 | 0x40;
    }
    if (param_17 != 0) {
      *puVar2 = *puVar2 | 0x80;
    }
  }
  puVar3 = (undefined1 *)FUN_001a0808(0x1c,1);
  uVar1 = local_28;
  if (puVar3 == (undefined1 *)0x0) {
    iVar6 = 0;
  }
  else {
    FUN_001da408(auStack_38,param_18);
    *puVar3 = (char)uVar1;
    puVar3[1] = param_6;
    puVar3[0x10] = param_14;
    *(undefined4 *)(puVar3 + 0x14) = param_16;
    iVar4 = FUN_001da408(puVar3 + 0x18,auStack_38);
    iVar6 = iVar4 + -0x18;
    *(undefined4 *)(iVar4 + -0x14) = *param_8;
    *(undefined4 *)(iVar4 + -0x10) = *param_10;
    *(undefined4 *)(iVar4 + -0xc) = *param_12;
    FUN_001da44c(auStack_38);
  }
  uVar1 = local_30;
  uVar8 = *DAT_001657b4;
  uVar9 = DAT_001657b4[1];
  puVar5 = (undefined4 *)FUN_001a0808(0x1c,1);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = DAT_001657b8;
    puVar5[1] = piVar7;
    puVar5[2] = uVar8;
    puVar5[3] = uVar9;
    *(char *)(puVar5 + 4) = (char)uVar1;
    puVar5[5] = puVar2;
    puVar5[6] = iVar6;
  }
  iVar6 = (**(code **)(*piVar7 + 0x2c))(piVar7,puVar5,0);
  if (iVar6 == 0) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),local_30,2);
    return;
  }
  return;
}

