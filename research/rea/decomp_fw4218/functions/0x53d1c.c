// rea decompile_all
// name: FUN_00053d1c
// address: 0x53d1c
// body: available
// range: 0x53d1c-0x53f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00053d1c(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  FUN_00237ef4(&local_48,auStack_2c);
  local_30 = 0x41;
  local_2f = 0;
  FUN_00052ef0(param_1,*(undefined4 *)(param_1 + 0x48),&local_48,auStack_28);
  piVar8 = (int *)*local_38;
  if ((piVar8 != local_38) && (*(char *)(piVar8[2] + 0xc) == 'I')) {
    pcVar2 = *(char **)(piVar8[2] + 8);
    if (*(int *)(pcVar2 + -4) != 0) {
      cVar1 = *pcVar2;
      if (cVar1 == 'A') {
        local_30 = 0x42;
      }
      else if (cVar1 == 'B') {
        local_30 = 0x43;
      }
      else if (cVar1 == 'C') {
        local_30 = 0x41;
      }
    }
    *(int *)piVar8[1] = *piVar8;
    *(int *)(*piVar8 + 4) = piVar8[1];
    local_34 = local_34 + -1;
    *piVar8 = (int)local_44;
    local_44 = piVar8;
  }
  puVar3 = (undefined4 *)FUN_001f01c4(0x10,1);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = DAT_00053f3c;
    iVar4 = FUN_00232964(puVar3 + 1,s_USER_0_00053f34,auStack_24);
    iVar4 = FUN_00232964(iVar4 + 4,&local_30,auStack_20);
    puVar3 = (undefined4 *)(iVar4 + -8);
    *(undefined1 *)(iVar4 + 4) = 0x49;
    *puVar3 = DAT_00053f40;
  }
  iVar4 = *local_38;
  if (local_44 == (int *)0x0) {
    if (local_40 == local_3c) {
      uVar9 = 1;
      if (local_48 != (int *)0x0) {
        uVar5 = local_48[1];
        uVar9 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (uVar9 < uVar5 + 1) {
          uVar9 = uVar5 + 1;
        }
      }
      piVar8 = (int *)FUN_00173860(0xc,0);
      iVar6 = FUN_00173860(uVar9 * 0xc,0);
      piVar8[2] = iVar6;
      *piVar8 = (int)local_48;
      piVar8[1] = uVar9;
      local_40 = (int *)piVar8[2];
      local_3c = local_40 + uVar9 * 3;
      local_48 = piVar8;
    }
    piVar8 = local_40;
    local_40 = local_40 + 3;
  }
  else {
    piVar8 = local_44;
    local_44 = (int *)*local_44;
  }
  if (piVar8 + 2 != (int *)0x0) {
    piVar8[2] = (int)puVar3;
  }
  *piVar8 = iVar4;
  piVar8[1] = *(int *)(iVar4 + 4);
  **(undefined4 **)(iVar4 + 4) = piVar8;
  *(int **)(iVar4 + 4) = piVar8;
  local_34 = local_34 + 1;
  uVar7 = FUN_00054d5c(param_1,&local_48);
  FUN_00053c8c(&local_48);
  FUN_00237f74(&local_48);
  return uVar7;
}

